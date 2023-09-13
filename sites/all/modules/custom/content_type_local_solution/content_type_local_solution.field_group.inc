<?php

/**
 * @file
 * content_type_local_solution.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function content_type_local_solution_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_info|node|local_solution|full';
  $field_group->group_name = 'group_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'local_solution';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_documents',
      1 => 'field_linked_local_problems',
    ),
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => 'group-info',
        'description' => '',
        'effect' => 'none',
        'id' => '',
        'label_element' => 'h3',
        'show_label' => '0',
        'speed' => 'fast',
      ),
      'label' => 'Інфармацыя',
    ),
    'format_type' => 'div',
    'label' => 'Інфармацыя',
    'weight' => '3',
  );
  $field_groups['group_info|node|local_solution|full'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Інфармацыя');

  return $field_groups;
}
