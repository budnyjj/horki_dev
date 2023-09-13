<?php

/**
 * @file
 * content_type_old_place.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content_type_old_place_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function content_type_old_place_node_info() {
  $items = array(
    'old_place' => array(
      'name' => t('Старое месца'),
      'base' => 'node_content',
      'description' => t('Старое месца на мапе рэгіёна.'),
      'has_title' => '1',
      'title_label' => t('Назва'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
