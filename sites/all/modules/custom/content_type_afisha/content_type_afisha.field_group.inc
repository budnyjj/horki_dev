<?php

/**
 * @file
 * content_type_afisha.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function content_type_afisha_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_additional|node|afisha|form';
  $field_group->group_name = 'group_additional';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'afisha';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tags';
  $field_group->data = array(
    'children' => array(
      0 => 'field_additional_taxonomy',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => 'group-additional field-group-tab',
        'description' => '',
        'required_fields' => 1,
      ),
    ),
    'format_type' => 'tab',
    'label' => 'Дадатковыя тэгі',
    'weight' => '19',
  );
  $field_groups['group_additional|node|afisha|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Дадатковыя тэгі');

  return $field_groups;
}
