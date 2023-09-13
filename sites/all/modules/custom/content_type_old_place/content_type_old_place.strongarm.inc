<?php

/**
 * @file
 * content_type_old_place.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function content_type_old_place_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_old_place';
  $strongarm->value = 0;
  $export['comment_anonymous_old_place'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_old_place';
  $strongarm->value = 1;
  $export['comment_default_mode_old_place'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_old_place';
  $strongarm->value = '50';
  $export['comment_default_per_page_old_place'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_old_place';
  $strongarm->value = 1;
  $export['comment_form_location_old_place'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_old_place';
  $strongarm->value = '1';
  $export['comment_old_place'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_old_place';
  $strongarm->value = '1';
  $export['comment_preview_old_place'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_old_place';
  $strongarm->value = 1;
  $export['comment_subject_field_old_place'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__old_place';
  $strongarm->value = array(
    'extra_fields' => array(
      'display' => array(),
      'form' => array(
        'metatags' => array(
          'weight' => '9',
        ),
        'path' => array(
          'weight' => '8',
        ),
        'redirect' => array(
          'weight' => '7',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'xmlsitemap' => array(
          'weight' => '5',
        ),
      ),
    ),
    'view_modes' => array(
      'full' => array(
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
  $export['field_bundle_settings_node__old_place'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_old_place';
  $strongarm->value = '0';
  $export['language_content_type_old_place'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_old_place';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_old_place'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_old_place';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_old_place'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_old_place';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_old_place'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_old_place';
  $strongarm->value = '1';
  $export['node_preview_old_place'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_old_place';
  $strongarm->value = 1;
  $export['node_submitted_old_place'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_old_place_pattern';
  $strongarm->value = 'places/[node:nid].html';
  $export['pathauto_node_old_place_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_old_place_types_pattern';
  $strongarm->value = 'places/[term:name].html';
  $export['pathauto_taxonomy_term_old_place_types_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_node_old_place';
  $strongarm->value = array(
    'priority' => '0.5',
    'status' => '1',
  );
  $export['xmlsitemap_settings_node_old_place'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_taxonomy_term_old_place_types';
  $strongarm->value = array(
    'priority' => '0.7',
    'status' => '1',
  );
  $export['xmlsitemap_settings_taxonomy_term_old_place_types'] = $strongarm;

  return $export;
}
