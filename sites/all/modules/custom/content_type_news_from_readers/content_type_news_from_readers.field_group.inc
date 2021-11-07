<?php

/**
 * @file
 * content_type_news_from_readers.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function content_type_news_from_readers_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_actions|node|news_from_readers|full';
  $field_group->group_name = 'group_actions';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news_from_readers';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'group_share',
      1 => 'group_tags',
    ),
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => 'group-actions',
        'description' => '',
        'effect' => 'none',
        'id' => '',
        'label_element' => 'h3',
        'show_label' => '0',
        'speed' => 'fast',
      ),
      'label' => 'Дзеянні',
    ),
    'format_type' => 'div',
    'label' => 'Дзеянні',
    'weight' => '8',
  );
  $field_groups['group_actions|node|news_from_readers|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_places|node|news_from_readers|form';
  $field_group->group_name = 'group_places';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news_from_readers';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tags';
  $field_group->data = array(
    'children' => array(
      0 => 'field_placement_by_taxonomy',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => ' group-places field-group-tab',
        'description' => '',
        'required_fields' => 1,
      ),
    ),
    'format_type' => 'tab',
    'label' => 'Месцы',
    'weight' => '12',
  );
  $field_groups['group_places|node|news_from_readers|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_rubrics|node|news_from_readers|form';
  $field_group->group_name = 'group_rubrics';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news_from_readers';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tags';
  $field_group->data = array(
    'children' => array(
      0 => 'field_rubric_by_taxonomy',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => ' group-rubrics field-group-tab',
        'description' => '',
        'required_fields' => 1,
      ),
    ),
    'format_type' => 'tab',
    'label' => 'Рубрыкі',
    'weight' => '13',
  );
  $field_groups['group_rubrics|node|news_from_readers|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_share|node|news_from_readers|full';
  $field_group->group_name = 'group_share';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news_from_readers';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_actions';
  $field_group->data = array(
    'children' => array(
      0 => 'field_add_this',
    ),
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => 'group-share',
        'description' => '',
        'effect' => 'none',
        'id' => '',
        'label_element' => 'h3',
        'show_label' => '1',
        'speed' => 'fast',
      ),
      'label' => 'Падзяліцца',
    ),
    'format_type' => 'div',
    'label' => 'Падзяліцца',
    'weight' => '1',
  );
  $field_groups['group_share|node|news_from_readers|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tags|node|news_from_readers|form';
  $field_group->group_name = 'group_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news_from_readers';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'group_places',
      1 => 'group_rubrics',
    ),
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-tags field-group-tabs',
      ),
    ),
    'format_type' => 'tabs',
    'label' => 'Тэгі',
    'weight' => '4',
  );
  $field_groups['group_tags|node|news_from_readers|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tags|node|news_from_readers|full';
  $field_group->group_name = 'group_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news_from_readers';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_actions';
  $field_group->data = array(
    'children' => array(
      0 => 'field_placement_by_taxonomy',
      1 => 'field_rubric_by_taxonomy',
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
    'weight' => '2',
  );
  $field_groups['group_tags|node|news_from_readers|full'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Дзеянні');
  t('Месцы');
  t('Падзяліцца');
  t('Рубрыкі');
  t('Тэгі');

  return $field_groups;
}
