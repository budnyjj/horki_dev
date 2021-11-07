<?php

/**
 * @file
 * content_type_ads.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function content_type_ads_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_actions|node|ads|full';
  $field_group->group_name = 'group_actions';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ads';
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
    'weight' => '7',
  );
  $field_groups['group_actions|node|ads|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ads_placement|node|ads|form';
  $field_group->group_name = 'group_ads_placement';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ads';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ads';
  $field_group->data = array(
    'children' => array(
      0 => 'field_ads_placement',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => 'group-ads-placement field-group-tab',
        'description' => '',
        'required_fields' => 1,
      ),
    ),
    'format_type' => 'tab',
    'label' => 'Месца',
    'weight' => '15',
  );
  $field_groups['group_ads_placement|node|ads|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ads_topic|node|ads|form';
  $field_group->group_name = 'group_ads_topic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ads';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ads';
  $field_group->data = array(
    'children' => array(
      0 => 'field_ads_topic',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => ' group-ads-topic field-group-tab',
        'description' => '',
        'required_fields' => 1,
      ),
      'label' => 'Тэма',
    ),
    'format_type' => 'tab',
    'label' => 'Тэма',
    'weight' => '13',
  );
  $field_groups['group_ads_topic|node|ads|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ads_type|node|ads|form';
  $field_group->group_name = 'group_ads_type';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ads';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ads';
  $field_group->data = array(
    'children' => array(
      0 => 'field_ads_type',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => ' group-ads-type field-group-tab',
        'description' => '',
        'required_fields' => 1,
      ),
      'label' => 'Тып',
    ),
    'format_type' => 'tab',
    'label' => 'Тып',
    'weight' => '12',
  );
  $field_groups['group_ads_type|node|ads|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ads|node|ads|form';
  $field_group->group_name = 'group_ads';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ads';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'group_ads_type',
      1 => 'group_ads_topic',
      2 => 'group_ads_placement',
    ),
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-ads field-group-tabs',
      ),
    ),
    'format_type' => 'tabs',
    'label' => 'Абвестка',
    'weight' => '3',
  );
  $field_groups['group_ads|node|ads|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_info|node|ads|full';
  $field_group->group_name = 'group_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ads';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_user_name',
      1 => 'field_ads_phone',
      2 => 'field_price',
      3 => 'field_email',
    ),
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'classes' => 'group-info field-group-div',
        'description' => '',
        'effect' => 'none',
        'id' => 'node_ads_full_group_info',
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
  $field_groups['group_info|node|ads|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_share|node|ads|full';
  $field_group->group_name = 'group_share';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ads';
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
  $field_groups['group_share|node|ads|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tags|node|ads|full';
  $field_group->group_name = 'group_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ads';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_actions';
  $field_group->data = array(
    'children' => array(
      0 => 'field_ads_type',
      1 => 'field_ads_topic',
      2 => 'field_ads_placement',
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
    'weight' => '3',
  );
  $field_groups['group_tags|node|ads|full'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Інфармацыя');
  t('Абвестка');
  t('Дзеянні');
  t('Месца');
  t('Падзяліцца');
  t('Тып');
  t('Тэгі');
  t('Тэма');

  return $field_groups;
}
