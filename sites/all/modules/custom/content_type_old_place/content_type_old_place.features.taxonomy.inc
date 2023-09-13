<?php

/**
 * @file
 * content_type_old_place.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function content_type_old_place_taxonomy_default_vocabularies() {
  return array(
    'old_place_types' => array(
      'name' => 'Тыпы старых месцаў',
      'machine_name' => 'old_place_types',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
