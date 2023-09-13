<?php

/**
 * @file
 * content_type_local_problem.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function content_type_local_problem_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_address|node|local_problem|form';
  $field_group->group_name = 'group_address';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'local_problem';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_placement';
  $field_group->data = array(
    'children' => array(
      0 => 'field_address',
      1 => 'field_placement_by_taxonomy',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => 'group-address field-group-tab',
        'description' => '',
        'required_fields' => 1,
      ),
      'label' => 'Адрас - апісанне',
    ),
    'format_type' => 'tab',
    'label' => 'Адрас - апісанне',
    'weight' => '2',
  );
  $field_groups['group_address|node|local_problem|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_placement|node|local_problem|form';
  $field_group->group_name = 'group_placement';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'local_problem';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'group_problem_map',
      1 => 'group_address',
    ),
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-placement field-group-tabs',
        'id' => '',
      ),
    ),
    'format_type' => 'tabs',
    'label' => 'Месца, дзе знаходзіцца праблема',
    'weight' => '2',
  );
  $field_groups['group_placement|node|local_problem|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_problem_map|node|local_problem|form';
  $field_group->group_name = 'group_problem_map';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'local_problem';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_placement';
  $field_group->data = array(
    'children' => array(
      0 => 'field_problem_map',
      1 => 'field_this_problem_on_map',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => '',
        'description' => 'Адзначце на ёй месца, дзе знаходзіцца праблема',
        'required_fields' => 1,
      ),
      'label' => 'Мапа',
    ),
    'format_type' => 'tab',
    'label' => 'Мапа',
    'weight' => '1',
  );
  $field_groups['group_problem_map|node|local_problem|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Адрас - апісанне');
  t('Мапа');
  t('Месца, дзе знаходзіцца праблема');

  return $field_groups;
}
