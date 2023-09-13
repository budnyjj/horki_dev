<?php

/**
 * @file
 * content_type_old_place.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function content_type_old_place_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_address|node|old_place|form';
  $field_group->group_name = 'group_address';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'old_place';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_placement';
  $field_group->data = array(
    'children' => array(
      0 => 'field_placement_by_taxonomy',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => 'group-address field-group-tab',
        'description' => '',
        'required_fields' => 1,
      ),
      'label' => 'Адрас',
    ),
    'format_type' => 'tab',
    'label' => 'Адрас',
    'weight' => '12',
  );
  $field_groups['group_address|node|old_place|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_place_map|node|old_place|form';
  $field_group->group_name = 'group_place_map';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'old_place';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_placement';
  $field_group->data = array(
    'children' => array(
      0 => 'field_place_map',
      1 => 'field_this_place_on_map',
    ),
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => 'group-place-map field-group-tab',
        'description' => '',
        'required_fields' => 1,
      ),
      'label' => 'Месца',
    ),
    'format_type' => 'tab',
    'label' => 'Месца',
    'weight' => '12',
  );
  $field_groups['group_place_map|node|old_place|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_placement|node|old_place|form';
  $field_group->group_name = 'group_placement';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'old_place';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'group_place_map',
      1 => 'group_address',
    ),
    'format_settings' => array(
      'instance_settings' => array(
        'classes' => 'group-placement field-group-tabs',
        'id' => '',
      ),
      'label' => 'Месца',
    ),
    'format_type' => 'tabs',
    'label' => 'Месца',
    'weight' => '2',
  );
  $field_groups['group_placement|node|old_place|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tags|node|old_place|default';
  $field_group->group_name = 'group_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'old_place';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_old_place_type',
    ),
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => 'group-tags',
        'description' => '',
        'effect' => 'none',
        'id' => '',
        'label_element' => 'h3',
        'show_label' => '1',
        'speed' => 'fast',
      ),
      'label' => 'Тэгі',
    ),
    'format_type' => 'div',
    'label' => 'Тэгі',
    'weight' => '4',
  );
  $field_groups['group_tags|node|old_place|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Адрас');
  t('Месца');
  t('Тэгі');

  return $field_groups;
}
