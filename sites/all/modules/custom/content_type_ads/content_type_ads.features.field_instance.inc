<?php

/**
 * @file
 * content_type_ads.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function content_type_ads_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-ads-field_ads_phone'.
  $field_instances['node-ads-field_ads_phone'] = array(
    'bundle' => 'ads',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Ваш кантактны нумар для сувязі.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 12,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ads_phone',
    'label' => 'Тэлефон',
    'required' => 1,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ads_text' => 0,
          'anonymous_text' => 'anonymous_text',
          'author_text' => 'author_text',
          'comment_text' => 0,
          'company_text' => 0,
          'php_code' => 'php_code',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ads_text' => array(
              'weight' => 0,
            ),
            'anonymous_text' => array(
              'weight' => -8,
            ),
            'author_text' => array(
              'weight' => -10,
            ),
            'comment_text' => array(
              'weight' => 0,
            ),
            'company_text' => array(
              'weight' => 0,
            ),
            'php_code' => array(
              'weight' => -6,
            ),
            'plain_text' => array(
              'weight' => -7,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-ads-field_ads_photo'.
  $field_instances['node-ads-field_ads_photo'] = array(
    'bundle' => 'ads',
    'deleted' => 0,
    'description' => 'Фота вашага тавара або паслугі.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 13,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'picture',
        'settings' => array(
          'colorbox_settings' => array(
            'colorbox_caption' => 'auto',
            'colorbox_caption_custom' => '',
            'colorbox_gallery' => 'post',
            'colorbox_gallery_custom' => '',
            'colorbox_group' => 'highlight',
          ),
          'fallback_image_style' => '',
          'image_link' => '',
          'lazyload' => 0,
          'lazyload_aspect_ratio' => 0,
          'picture_mapping' => 'article',
        ),
        'type' => 'picture',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ads_photo',
    'label' => 'Фотаздымак',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'alt_field_default' => '[node:node-caption]',
      'alt_field_hide' => 1,
      'alt_field_sync_title' => 0,
      'alt_field_update_on_edit' => 1,
      'default_image' => 0,
      'file_directory' => 'ads/[current-date:system]',
      'file_extensions' => 'png gif jpg jpeg',
      'filefield_paths' => array(
        'active_updating' => 0,
        'file_name' => array(
          'options' => array(
            'pathauto' => 0,
            'slashes' => 0,
            'transliterate' => 0,
          ),
          'value' => '[file:ffp-name-only-original].[file:ffp-extension-original]',
        ),
        'file_path' => array(
          'options' => array(
            'pathauto' => 0,
            'slashes' => 0,
            'transliterate' => 0,
          ),
          'value' => 'ads/[current-date:system]',
        ),
        'redirect' => 0,
        'retroactive_update' => 0,
      ),
      'filefield_paths_enabled' => 0,
      'max_filesize' => '2MB',
      'max_resolution' => '1200x1600',
      'min_resolution' => '',
      'title_field' => 1,
      'title_field_default' => '[node:title] | [site:name]',
      'title_field_hide' => 1,
      'title_field_update_on_edit' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'insert' => 1,
        'insert_absolute' => 0,
        'insert_class' => '',
        'insert_default' => 'auto',
        'insert_styles' => array(
          'auto' => 'auto',
          'colorbox__article_colorbox' => 0,
          'colorbox__article_default' => 0,
          'colorbox__article_default_fallback' => 0,
          'colorbox__article_gallery' => 0,
          'colorbox__article_gallery_thumbnail' => 0,
          'colorbox__article_mobile' => 0,
          'colorbox__article_wide' => 0,
          'colorbox__article_wide_fallback' => 0,
          'colorbox__article_with_logo_default' => 0,
          'colorbox__article_with_logo_default_fallback' => 0,
          'colorbox__article_with_logo_mobile' => 0,
          'colorbox__article_with_logo_wide' => 0,
          'colorbox__article_with_logo_wide_fallback' => 0,
          'colorbox__filtered-table' => 0,
          'colorbox__highlight_breakpoints_theme_horki2_desktop' => 0,
          'colorbox__highlight_breakpoints_theme_horki2_fallback' => 0,
          'colorbox__highlight_breakpoints_theme_horki2_mobile_narrow' => 0,
          'colorbox__highlight_breakpoints_theme_horki2_mobile_normal' => 0,
          'colorbox__large' => 0,
          'colorbox__main_pic_preview' => 0,
          'colorbox__mediagrid_breakpoints_theme_horki2_desktop' => 0,
          'colorbox__mediagrid_breakpoints_theme_horki2_fallback' => 0,
          'colorbox__mediagrid_breakpoints_theme_horki2_mobile_narrow' => 0,
          'colorbox__mediagrid_breakpoints_theme_horki2_mobile_normal' => 0,
          'colorbox__mediagridlist_desktop' => 0,
          'colorbox__mediagridlist_fallback' => 0,
          'colorbox__mediagridlist_mobile' => 0,
          'colorbox__medium' => 0,
          'colorbox__node_social_preview_facebook' => 0,
          'colorbox__node_social_preview_ok' => 0,
          'colorbox__node_social_preview_twitter' => 0,
          'colorbox__node_social_preview_vk' => 0,
          'colorbox__node_teaser_preview' => 0,
          'colorbox__photo_video_preview' => 0,
          'colorbox__printed_desktop' => 0,
          'colorbox__printed_fallback' => 0,
          'colorbox__printed_mobile' => 0,
          'colorbox__square_news_preview' => 0,
          'colorbox__term_social_preview' => 0,
          'colorbox__thumbnail' => 0,
          'colorbox__user_avatar_comment' => 0,
          'colorbox__user_avatar_comment_2' => 0,
          'colorbox__user_avatar_comment_block' => 0,
          'colorbox__user_avatar_login' => 0,
          'colorbox__user_avatar_page' => 0,
          'colorbox__user_avatar_page_2' => 0,
          'colorbox__uzgorak_preview' => 0,
          'icon_link' => 0,
          'image' => 0,
          'image_article_colorbox' => 0,
          'image_article_default' => 0,
          'image_article_default_fallback' => 0,
          'image_article_gallery' => 0,
          'image_article_gallery_thumbnail' => 0,
          'image_article_mobile' => 0,
          'image_article_wide' => 0,
          'image_article_wide_fallback' => 0,
          'image_article_with_logo_default' => 0,
          'image_article_with_logo_default_fallback' => 0,
          'image_article_with_logo_mobile' => 0,
          'image_article_with_logo_wide' => 0,
          'image_article_with_logo_wide_fallback' => 0,
          'image_filtered-table' => 0,
          'image_highlight_breakpoints_theme_horki2_desktop' => 0,
          'image_highlight_breakpoints_theme_horki2_fallback' => 0,
          'image_highlight_breakpoints_theme_horki2_mobile_narrow' => 0,
          'image_highlight_breakpoints_theme_horki2_mobile_normal' => 0,
          'image_large' => 0,
          'image_main_pic_preview' => 0,
          'image_mediagrid_breakpoints_theme_horki2_desktop' => 0,
          'image_mediagrid_breakpoints_theme_horki2_fallback' => 0,
          'image_mediagrid_breakpoints_theme_horki2_mobile_narrow' => 0,
          'image_mediagrid_breakpoints_theme_horki2_mobile_normal' => 0,
          'image_mediagridlist_desktop' => 0,
          'image_mediagridlist_fallback' => 0,
          'image_mediagridlist_mobile' => 0,
          'image_medium' => 0,
          'image_node_social_preview_facebook' => 0,
          'image_node_social_preview_ok' => 0,
          'image_node_social_preview_twitter' => 0,
          'image_node_social_preview_vk' => 0,
          'image_node_teaser_preview' => 0,
          'image_photo_video_preview' => 0,
          'image_printed_desktop' => 0,
          'image_printed_fallback' => 0,
          'image_printed_mobile' => 0,
          'image_square_news_preview' => 0,
          'image_term_social_preview' => 0,
          'image_thumbnail' => 0,
          'image_user_avatar_comment' => 0,
          'image_user_avatar_comment_2' => 0,
          'image_user_avatar_comment_block' => 0,
          'image_user_avatar_login' => 0,
          'image_user_avatar_page' => 0,
          'image_user_avatar_page_2' => 0,
          'image_uzgorak_preview' => 0,
          'link' => 0,
        ),
        'insert_width' => '',
        'preview_image_style' => 'article_default',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-ads-field_ads_placement'.
  $field_instances['node-ads-field_ads_placement'] = array(
    'bundle' => 'ads',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 14,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ads_placement',
    'label' => 'Месца размяшчэння абвесткі',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
      ),
      'type' => 'options_buttons',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-ads-field_ads_topic'.
  $field_instances['node-ads-field_ads_topic'] = array(
    'bundle' => 'ads',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 9,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ads_topic',
    'label' => 'Тэма абвесткі',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
      ),
      'type' => 'options_buttons',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-ads-field_ads_type'.
  $field_instances['node-ads-field_ads_type'] = array(
    'bundle' => 'ads',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 8,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ads_type',
    'label' => 'Тып абвесткі',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
      ),
      'type' => 'options_buttons',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-ads-field_email'.
  $field_instances['node-ads-field_email'] = array(
    'bundle' => 'ads',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Адрас электроннай пошты.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 16,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_plain',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_email',
    'label' => 'E-mail',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'email',
      'settings' => array(
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'email_textfield',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-ads-field_price'.
  $field_instances['node-ads-field_price'] = array(
    'bundle' => 'ads',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Цана тавара або паслугі ў БЕЛАРУСКІХ РУБЛЯХ.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 15,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_price',
    'label' => 'Цана',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ads_text' => 'ads_text',
          'anonymous_text' => 'anonymous_text',
          'author_text' => 'author_text',
          'comment_text' => 'comment_text',
          'company_text' => 'company_text',
          'php_code' => 'php_code',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ads_text' => array(
              'weight' => 0,
            ),
            'anonymous_text' => array(
              'weight' => -8,
            ),
            'author_text' => array(
              'weight' => -10,
            ),
            'comment_text' => array(
              'weight' => 0,
            ),
            'company_text' => array(
              'weight' => 0,
            ),
            'php_code' => array(
              'weight' => -6,
            ),
            'plain_text' => array(
              'weight' => -7,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-ads-field_text'.
  $field_instances['node-ads-field_text'] = array(
    'bundle' => 'ads',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Падрабязнае апісанне вашага тавару або паслугі. Яно будзе паказвацца на старонцы вашай абвесткі.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_text',
    'label' => 'Апiсанне',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'anonymous_text' => 0,
          'author_text' => 'author_text',
          'comment_text' => 0,
          'company_text' => 0,
          'identified_text' => 'identified_text',
          'php_code' => 0,
          'plain_text' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'anonymous_text' => array(
              'weight' => -8,
            ),
            'author_text' => array(
              'weight' => -10,
            ),
            'comment_text' => array(
              'weight' => 0,
            ),
            'company_text' => array(
              'weight' => 0,
            ),
            'identified_text' => array(
              'weight' => 2,
            ),
            'php_code' => array(
              'weight' => 11,
            ),
            'plain_text' => array(
              'weight' => -8,
            ),
          ),
        ),
      ),
      'display_summary' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 600,
        'maxlength_js_enforce' => 0,
        'maxlength_js_label' => 'максімальная даўжыня апісання складае @limit сімвалаў, засталося: <strong>@remaining</strong>',
        'maxlength_js_label_summary' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'maxlength_js_summary' => '',
        'maxlength_js_truncate_html' => 1,
        'rows' => 10,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-ads-field_user_name'.
  $field_instances['node-ads-field_user_name'] = array(
    'bundle' => 'ads',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Вашае імя, прозвішча.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 10,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_user_name',
    'label' => 'Кантактнае імя',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ads_text' => 0,
          'anonymous_text' => 'anonymous_text',
          'author_text' => 'author_text',
          'comment_text' => 0,
          'company_text' => 0,
          'php_code' => 'php_code',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ads_text' => array(
              'weight' => 0,
            ),
            'anonymous_text' => array(
              'weight' => -8,
            ),
            'author_text' => array(
              'weight' => -10,
            ),
            'comment_text' => array(
              'weight' => 0,
            ),
            'company_text' => array(
              'weight' => 0,
            ),
            'php_code' => array(
              'weight' => -6,
            ),
            'plain_text' => array(
              'weight' => -7,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('E-mail');
  t('Адрас электроннай пошты.');
  t('Апiсанне');
  t('Ваш кантактны нумар для сувязі.');
  t('Вашае імя, прозвішча.');
  t('Кантактнае імя');
  t('Месца размяшчэння абвесткі');
  t('Падрабязнае апісанне вашага тавару або паслугі. Яно будзе паказвацца на старонцы вашай абвесткі.');
  t('Тып абвесткі');
  t('Тэлефон');
  t('Тэма абвесткі');
  t('Фота вашага тавара або паслугі.');
  t('Фотаздымак');
  t('Цана');
  t('Цана тавара або паслугі ў БЕЛАРУСКІХ РУБЛЯХ.');

  return $field_instances;
}
