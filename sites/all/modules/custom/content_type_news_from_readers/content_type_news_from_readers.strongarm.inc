<?php

/**
 * @file
 * content_type_news_from_readers.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function content_type_news_from_readers_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_news_from_readers';
  $strongarm->value = 0;
  $export['comment_anonymous_news_from_readers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_news_from_readers';
  $strongarm->value = 1;
  $export['comment_default_mode_news_from_readers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_news_from_readers';
  $strongarm->value = '30';
  $export['comment_default_per_page_news_from_readers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_news_from_readers';
  $strongarm->value = 1;
  $export['comment_form_location_news_from_readers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_news_from_readers';
  $strongarm->value = '2';
  $export['comment_news_from_readers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_news_from_readers';
  $strongarm->value = '0';
  $export['comment_preview_news_from_readers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_news_from_readers';
  $strongarm->value = 0;
  $export['comment_subject_field_news_from_readers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__news_from_readers';
  $strongarm->value = array(
    'extra_fields' => array(
      'display' => array(),
      'form' => array(
        'metatags' => array(
          'weight' => '11',
        ),
        'mollom' => array(
          'weight' => '12',
        ),
        'path' => array(
          'weight' => '8',
        ),
        'redirect' => array(
          'weight' => '10',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'xmlsitemap' => array(
          'weight' => '9',
        ),
      ),
    ),
    'view_modes' => array(
      'colorbox' => array(
        'custom_settings' => FALSE,
      ),
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'media_gallery_block' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'teaser' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
  );
  $export['field_bundle_settings_node__news_from_readers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_news_from_readers';
  $strongarm->value = '0';
  $export['language_content_type_news_from_readers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_news_from_readers';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_news_from_readers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_news_from_readers';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_news_from_readers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_news_from_readers';
  $strongarm->value = array(
    0 => 'revision',
  );
  $export['node_options_news_from_readers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_news_from_readers';
  $strongarm->value = '0';
  $export['node_preview_news_from_readers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_news_from_readers';
  $strongarm->value = 1;
  $export['node_submitted_news_from_readers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_news_from_readers_pattern';
  $strongarm->value = 'news/[node:nid].html';
  $export['pathauto_node_news_from_readers_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_places_pattern';
  $strongarm->value = '[term:name].html';
  $export['pathauto_taxonomy_term_places_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_rubrics_pattern';
  $strongarm->value = '[term:name].html';
  $export['pathauto_taxonomy_term_rubrics_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_node_news_from_readers';
  $strongarm->value = array(
    'priority' => '0.5',
    'status' => '1',
  );
  $export['xmlsitemap_settings_node_news_from_readers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_taxonomy_term_places';
  $strongarm->value = array(
    'priority' => '0.7',
    'status' => '1',
  );
  $export['xmlsitemap_settings_taxonomy_term_places'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_taxonomy_term_rubrics';
  $strongarm->value = array(
    'priority' => '0.7',
    'status' => '1',
  );
  $export['xmlsitemap_settings_taxonomy_term_rubrics'] = $strongarm;

  return $export;
}
