<?php

/**
 * @file
 * XML sitemap integration functions for xmlsitemap.module.
 */

/**
 * Class for XML Sitemap Exception.
 */
class XMLSitemapException extends Exception {

}

/**
 * Class for XML Sitemap Generation Exception.
 */
class XMLSitemapGenerationException extends XMLSitemapException {

}

/**
 * Extended class for writing XML sitemap files.
 */
class XMLSitemapWriter extends XMLWriter {

  protected $uri = NULL;
  protected $sitemapElementCount = 0;
  protected $linkCountFlush = 500;
  protected $sitemap = NULL;

  /**
   * Sitemap Page.
   *
   * @var string
   *
   * @codingStandardsIgnoreStart
   */
  protected $sitemap_page = NULL;

  /**
   * Root Element.
   *
   * @var string.
   *
   * @codingStandardsIgnoreEnd
   */
  protected $rootElement = 'urlset';

  /**
   * Constructor.
   *
   * @param array $sitemap
   *   The sitemap array.
   * @param string $page
   *   The current page of the sitemap being generated.
   *
   * @codingStandardsIgnoreStart
   */
  public function __construct(stdClass $sitemap, $page) {
    // @codingStandardsIgnoreEnd
    $this->sitemap = $sitemap;
    $this->sitemap_page = $page;
    $this->uri = xmlsitemap_sitemap_get_file($sitemap, $page);
    $this->openUri($this->uri);
  }

  /**
   * Open URI.
   */
  #[ReturnTypeWillChange]
  public function openUri($uri) {
    $return = parent::openUri($uri);
    if (!$return) {
      throw new XMLSitemapGenerationException(t('Could not open file @file for writing.', array('@file' => $uri)));
    }
    return $return;
  }

  /**
   * Start Document.
   */
  #[ReturnTypeWillChange]
  public function startDocument($version = '1.0', $encoding = 'UTF-8', $standalone = NULL) {
    $this->setIndent(FALSE);
    $result = parent::startDocument($version, $encoding);
    if (!$result) {
      throw new XMLSitemapGenerationException(t('Unknown error occurred while writing to file @file.', array('@file' => $this->uri)));
    }
    if (variable_get('xmlsitemap_xsl', 1)) {
      $this->writeXSL();
    }
    $this->startElement($this->rootElement, TRUE);
    return $result;
  }

  /**
   * Get Sitemap URL.
   */
  public function getSitemapUrl($path, array $options = array()) {
    global $base_url;
    $options += $this->sitemap->uri['options'];
    $options += array(
      'absolute' => TRUE,
      'base_url' => variable_get('xmlsitemap_base_url', $base_url),
      'language' => language_default(),
      'alias' => TRUE,
    );
    if (!empty($options['protocol_relative'])) {
      $options['base_url'] = preg_replace('~^https?:~', '', $options['base_url']);
    }
    return url($path, $options);
  }

  /**
   * Add the XML stylesheet to the XML page.
   *
   * @codingStandardsIgnoreStart
   */
  public function writeXSL() {
    // @codingStandardsIgnoreEnd
    $this->writePi('xml-stylesheet', 'type="text/xsl" href="' . $this->getSitemapUrl('sitemap.xsl', array('absolute' => FALSE)) . '"');
    $this->writeRaw(PHP_EOL);
  }

  /**
   * Return an array of attributes for the root element of the XML.
   */
  public function getRootAttributes() {
    $attributes['xmlns'] = 'http://www.sitemaps.org/schemas/sitemap/0.9';
    if (variable_get('xmlsitemap_developer_mode', 0)) {
      $attributes['xmlns:xsi'] = 'http://www.w3.org/2001/XMLSchema-instance';
      $attributes['xsi:schemaLocation'] = 'http://www.sitemaps.org/schemas/sitemap/0.9 http://www.sitemaps.org/schemas/sitemap/0.9/sitemap.xsd';
    }

    drupal_alter('xmlsitemap_root_attributes', $attributes, $this->sitemap);

    return $attributes;
  }

  /**
   * Generate XML.
   *
   * @codingStandardsIgnoreStart
   */
  public function generateXML() {
    // @codingStandardsIgnoreEnd
    return xmlsitemap_generate_chunk($this->sitemap, $this, $this->sitemap_page);
  }

  /**
   * Start Element.
   */
  #[ReturnTypeWillChange]
  public function startElement($name, $root = FALSE) {
    parent::startElement($name);

    if ($root) {
      foreach ($this->getRootAttributes() as $name => $value) {
        $this->writeAttribute($name, $value);
      }
      $this->writeRaw(PHP_EOL);
    }
  }

  /**
   * Write an full XML sitemap element tag.
   *
   * @param string $name
   *   The element name.
   * @param array $element
   *   An array of the elements properties and values.
   */
  public function writeSitemapElement($name, array &$element) {
    $this->writeElement($name, $element);
    $this->writeRaw(PHP_EOL);

    // After a certain number of elements have been added, flush the buffer
    // to the output file.
    $this->sitemapElementCount++;
    if (($this->sitemapElementCount % $this->linkCountFlush) == 0) {
      $this->flush();
    }
  }

  /**
   * Write full element tag including support for nested elements.
   *
   * @param string $name
   *   The element name.
   * @param string|array $content
   *   The element contents or an array of the elements' sub-elements.
   *
   * @todo Missing a return value since XMLWriter::writeElement() has one.
   */
  #[ReturnTypeWillChange]
  public function writeElement($name, $content = NULL) {
    if (is_array($content)) {
      $this->startElement($name);
      // If XMLSitemap Image module is enabled and we have image elements
      // we need execute custom writer which can handle the multiple
      // image:image tags without overwriting the previous values during
      // the iteration. It generates the necessary xml output at all.
      if (module_exists('xmlsitemap_image') && array_key_exists('images', $content)) {
        $num_images = $content['images'];
        unset($content['images']);
        if (empty($num_images)) {
          $xml_content = format_xml_elements($content);
        }
        else {
          $xml_content = xmlsitemap_image_write_images_records_to_xml($content);
        }
      }
      else {
        $xml_content = format_xml_elements($content);
      }
      // Remove additional spaces from the output.
      $xml_content = str_replace(array(" <", ">\n"), array("<", ">"), $xml_content);
      $this->writeRaw($xml_content);
      $this->endElement();
    }
    else {
      parent::writeElement($name, check_plain((string) $content));
    }
  }

  /**
   * Get URI.
   *
   * @codingStandardsIgnoreStart
   */
  public function getURI() {
    // @codingStandardsIgnoreEnd
    return $this->uri;
  }

  /**
   * Get Count Sitemap Element.
   */
  public function getSitemapElementCount() {
    return $this->sitemapElementCount;
  }

  /**
   * Document.
   */
  #[ReturnTypeWillChange]
  public function endDocument() {
    $return = parent::endDocument();

    if (!$return) {
      throw new XMLSitemapGenerationException(t('Unknown error occurred while writing to file @file.', array('@file' => $this->uri)));
    }

    // @code
    // If (xmlsitemap_var('gz')) {
    //  $file_gz = $file . '.gz';
    //  file_put_contents($file_gz, gzencode(file_get_contents($file), 9));
    // }
    // @endcode
    return $return;
  }

}

/**
 * XML Sitemap Index Writer.
 */
class XMLSitemapIndexWriter extends XMLSitemapWriter {

  protected $rootElement = 'sitemapindex';

  /**
   * Construct.
   */
  public function __construct(stdClass $sitemap, $page = 'index') {
    parent::__construct($sitemap, 'index');
  }

  /**
   * Get Root Attributes.
   */
  public function getRootAttributes() {
    $attributes['xmlns'] = 'http://www.sitemaps.org/schemas/sitemap/0.9';
    if (variable_get('xmlsitemap_developer_mode', 0)) {
      $attributes['xmlns:xsi'] = 'http://www.w3.org/2001/XMLSchema-instance';
      $attributes['xsi:schemaLocation'] = 'http://www.sitemaps.org/schemas/sitemap/0.9 http://www.sitemaps.org/schemas/sitemap/0.9/siteindex.xsd';
    }

    drupal_alter('xmlsitemap_root_attributes', $attributes, $this->sitemap);

    return $attributes;
  }

  /**
   * Generate XML.
   *
   * @codingStandardsIgnoreStart
   */
  public function generateXML() {
    // @codingStandardsIgnoreEnd
    $lastmod_format = variable_get('xmlsitemap_lastmod_format', XMLSITEMAP_LASTMOD_MEDIUM);

    for ($i = 1; $i <= $this->sitemap->chunks; $i++) {
      $element = array(
        'loc' => $this->getSitemapUrl('sitemap.xml', array('query' => array('page' => $i))),
        // @todo Use the actual lastmod value of the chunk file.
        'lastmod' => gmdate($lastmod_format, REQUEST_TIME),
      );
      $this->writeSitemapElement('sitemap', $element);
    }
  }

}

/**
 * Implements hook_xmlsitemap_link_info().
 */
function xmlsitemap_xmlsitemap_link_info() {
  return array(
    'frontpage' => array(
      'label' => t('Frontpage'),
      'xmlsitemap' => array(
        'settings callback' => 'xmlsitemap_link_frontpage_settings',
      ),
    ),
  );
}

/**
 * XML sitemap link type settings callback for frontpage link entity.
 */
function xmlsitemap_link_frontpage_settings(&$form) {
  module_load_include('admin.inc', 'xmlsitemap');
  if (user_access('administer site configuration')) {
    $form['#description'] = t('The front page path can be changed in the <a href="@url-frontpage">site information configuration</a>.', array('@url-frontpage' => url('admin/config/system/site-information')));
  }
  $form['xmlsitemap_frontpage_priority'] = array(
    '#type' => 'select',
    '#title' => t('Priority'),
    '#options' => xmlsitemap_get_priority_options(),
    '#default_value' => variable_get('xmlsitemap_frontpage_priority', 1.0),
  );
  $form['xmlsitemap_frontpage_changefreq'] = array(
    '#type' => 'select',
    '#title' => t('Change frequency'),
    '#options' => xmlsitemap_get_changefreq_options(),
    '#default_value' => variable_get('xmlsitemap_frontpage_changefreq', XMLSITEMAP_FREQUENCY_DAILY),
  );
  return $form;
}

/**
 * Implements hook_xmlsitemap_link_alter().
 */
function xmlsitemap_xmlsitemap_link_alter(&$link) {
  // Alter the frontpage priority.
  if ($link['type'] == 'frontpage' || $link['loc'] == '' || $link['loc'] == variable_get('site_frontpage', 'node')) {
    $link['priority'] = variable_get('xmlsitemap_frontpage_priority', 1.0);
    $link['changefreq'] = variable_get('xmlsitemap_frontpage_changefreq', XMLSITEMAP_FREQUENCY_DAILY);
  }
}

/**
 * Implements hook_xmlsitemap_links().
 */
function xmlsitemap_xmlsitemap_links() {
  // Frontpage link.
  $links[] = array(
    'type' => 'frontpage',
    'id' => 0,
    'loc' => '',
  );
  return $links;
}

/**
 * Implements hook_xmlsitemap_sitemap_operations().
 */
function xmlsitemap_xmlsitemap_sitemap_operations() {
  $operations['update'] = array(
    'label' => t('Update cached files'),
    'action past' => t('Updated'),
    'callback' => 'xmlsitemap_sitemap_multiple_update',
  );
  return $operations;
}

/**
 * XML sitemap operation callback; regenerate sitemap files using the batch API.
 *
 * @param array $smids
 *   An array of XML sitemap IDs.
 *
 * @see xmlsitemap_regenerate_batch()
 */
function xmlsitemap_sitemap_multiple_update(array $smids) {
  module_load_include('generate.inc', 'xmlsitemap');
  $batch = xmlsitemap_regenerate_batch($smids);
  batch_set($batch);
}

/**
 * Implements hook_query_TAG_alter().
 */
function xmlsitemap_query_xmlsitemap_link_bundle_access_alter(QueryAlterableInterface $query) {
  if ($query instanceof EntityFieldQuery && $entity = $query->getMetaData('entity')) {
    $info = $query->getMetaData('entity_info');
    $bundle = $query->getMetaData('bundle');
    if (empty($bundle)) {
      $bundle = xmlsitemap_get_link_type_enabled_bundles($entity);
    }
    $query->entityCondition('bundle', $bundle, is_array($bundle) ? 'IN' : '=');
  }
}
