<?php

/**
 * @file
 * Field formatters for Views RSS: Yandex Realty module.
 */

/**
 * Implements hook_field_formatter_info().
 */
function views_rss_yandex_realty_field_formatter_info() {
  $formatters = array(
    'views_rss_yandex_realty_image' => array(
      'label' => t('Views RSS Yandex Realty <image> element'),
      'field types' => array('file', 'media', 'image', 'text', 'link_field'),
    ),
  );
  return $formatters;
}

/**
 * Implements hook_field_formatter_settings_form().
 */
function views_rss_yandex_realty_field_formatter_settings_form($field, $instance, $view_mode, $form, &$form_state) {
  $display = $instance['display'][$view_mode];
  $settings = $display['settings'];
  $element = NULL;

  if ($field['type'] == 'image') {
    $image_styles = image_style_options(FALSE);
    $element['image_style'] = array(
      '#title' => t('Image style'),
      '#type' => 'select',
      '#default_value' => $settings['image_style'],
      '#empty_option' => t('None (original image)'),
      '#options' => $image_styles,
    );
  }

  return $element;
}

/**
 * Implements hook_field_formatter_settings_summary().
 */
function views_rss_yandex_realty_field_formatter_settings_summary($field, $instance, $view_mode) {
  $display = $instance['display'][$view_mode];
  $settings = $display['settings'];

  $summary = array();

  if ($field['type'] == 'image') {
    $image_styles = image_style_options(FALSE);
    // Unset possible 'No defined styles' option.
    unset($image_styles['']);
    // Styles could be lost because of enabled/disabled modules that defines
    // their styles in code.
    if (!empty($settings['image_style']) && !empty($image_styles[$settings['image_style']])) {
      $summary[] = t('Image style: @style', array('@style' => $image_styles[$settings['image_style']]));
    }
    else {
      $summary[] = t('Original image');
    }
  }

  return implode('<br />', $summary);
}

/**
 * Implements hook_field_formatter_view().
 */
function views_rss_yandex_realty_field_formatter_view($entity_type, $entity, $field, $instance, $langcode, $items, $display) {
  $element = NULL;
  foreach ($items as $delta => $item) {
    // Inside a view item may contain NULL data. In that case, just return.
    if (
      ($field['type'] == 'file' || $field['type'] == 'image') && empty($item['fid'])
      || $field['type'] == 'media' && empty($item['file']->fid)
      || $field['type'] == 'text' && empty($item['safe_value'])
      || $field['type'] == 'link_field' && empty($item['url'])
    ) {
      unset($items[$delta]);
      continue;
    }
    // Get full image URL based on provided image style.
    if ($field['type'] == 'image' && !empty($display['settings']['image_style']) && $image_style = image_style_load($display['settings']['image_style'])) {
      $uri = image_style_url($display['settings']['image_style'], $item['uri']);
    }
    elseif ($field['type'] == 'media') {
      $uri = file_create_url($item['file']->uri);
    }
    elseif ($field['type'] == 'text' || $field['type'] == 'link_field') {
      $uri = ($field['type'] == 'text') ? $item['safe_value'] : $item['url'];
    }
    else {
      $uri = file_create_url($item['uri']);
    }

    // XML element array in format_xml_elements() format.
    $rss_element = array(
      'key' => 'image',
      'value' => $uri,
    );

    $element[$delta] = array(
      '#item' => $item,
      '#markup' => format_xml_elements(array($rss_element)),
      '#rss_element' => $rss_element,
    );

  }
  return $element;
}
