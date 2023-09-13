<?php

/**
 * @file
 * content_type_old_place.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function content_type_old_place_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-old_place-body'.
  $field_instances['node-old_place-body'] = array(
    'bundle' => 'old_place',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Падрабязнае апісанне месца.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Апісанне',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'anonymous_text' => 0,
          'author_text' => 'author_text',
          'comment_text' => 0,
          'company_text' => 0,
          'identified_text' => 0,
          'php_code' => 0,
          'plain_text' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'anonymous_text' => array(
              'weight' => 0,
            ),
            'author_text' => array(
              'weight' => 2,
            ),
            'comment_text' => array(
              'weight' => 1,
            ),
            'company_text' => array(
              'weight' => 3,
            ),
            'identified_text' => array(
              'weight' => 2,
            ),
            'php_code' => array(
              'weight' => 4,
            ),
            'plain_text' => array(
              'weight' => -1,
            ),
          ),
        ),
      ),
      'display_summary' => 1,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => '',
        'maxlength_js_enforce' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'maxlength_js_label_summary' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'maxlength_js_summary' => '',
        'maxlength_js_truncate_html' => 0,
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-old_place-field_old_place_type'.
  $field_instances['node-old_place-field_old_place_type'] = array(
    'bundle' => 'old_place',
    'default_value' => array(
      0 => array(
        'tid' => 176,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_old_place_type',
    'label' => 'Тып',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-old_place-field_pics'.
  $field_instances['node-old_place-field_pics'] = array(
    'bundle' => 'old_place',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_pics',
    'label' => 'Галоўны фотаздымак',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'alt_field_default' => '[node:node-caption]',
      'alt_field_hide' => 1,
      'alt_field_sync_title' => 0,
      'alt_field_update_on_edit' => 1,
      'default_image' => 0,
      'file_directory' => 'old_places',
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
          'value' => '',
        ),
        'redirect' => 0,
        'retroactive_update' => 0,
      ),
      'filefield_paths_enabled' => 0,
      'max_filesize' => '',
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
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-old_place-field_place_map'.
  $field_instances['node-old_place-field_place_map'] = array(
    'bundle' => 'old_place',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_place_map',
    'label' => 'Мапа',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'openlayers',
      'settings' => array(
        'allow_edit' => 0,
        'data_storage' => 'single',
        'feature_types' => array(
          'path' => 'path',
          'point' => 'point',
          'polygon' => 0,
        ),
        'openlayers_map' => 'geofield_old_places',
      ),
      'type' => 'geofield_openlayers',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-old_place-field_placement_by_taxonomy'.
  $field_instances['node-old_place-field_placement_by_taxonomy'] = array(
    'bundle' => 'old_place',
    'default_value' => array(
      0 => array(
        'tid' => 58,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_placement_by_taxonomy',
    'label' => 'Месца',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-old_place-field_this_place_on_map'.
  $field_instances['node-old_place-field_this_place_on_map'] = array(
    'bundle' => 'old_place',
    'default_value' => array(
      0 => array(
        'vname' => 'map_old_places|block_1',
        'vargs' => '',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'viewfield',
        'settings' => array(),
        'type' => 'viewfield_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_this_place_on_map',
    'label' => 'Абранае месца на мапе',
    'required' => 1,
    'settings' => array(
      'allowed_views' => array(
        'admin_views_comment' => 0,
        'admin_views_node' => 0,
        'admin_views_user' => 0,
        'aposhnija_naviny' => 0,
        'catalog_company' => 0,
        'comments_block' => 0,
        'daviedka' => 0,
        'fontyourface_browse' => 0,
        'front' => 0,
        'genres' => 0,
        'knowledge_base' => 0,
        'last_comments' => 0,
        'latest_objects' => 0,
        'library' => 0,
        'local_problems' => 0,
        'map_local_problems' => 0,
        'map_old_places' => 'map_old_places',
        'news_by_regions' => 0,
        'news_from_readers' => 0,
        'photoblog' => 0,
        'rubrics' => 0,
        'similarterms' => 0,
        'uzgorak' => 0,
        'videoblog' => 0,
      ),
      'force_default' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'viewfield',
      'settings' => array(),
      'type' => 'viewfield_select',
      'weight' => 13,
    ),
  );

  // Exported field_instance:
  // 'taxonomy_term-old_place_types-field_taxonomy_pic'.
  $field_instances['taxonomy_term-old_place_types-field_taxonomy_pic'] = array(
    'bundle' => 'old_place_types',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_taxonomy_pic',
    'label' => 'Маркер',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'alt_field_default' => '',
      'alt_field_hide' => 0,
      'alt_field_sync_title' => 0,
      'alt_field_update_on_edit' => 0,
      'default_image' => 39086,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'title_field_default' => '',
      'title_field_hide' => 0,
      'title_field_update_on_edit' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'insert' => 0,
        'insert_absolute' => 0,
        'insert_class' => '',
        'insert_default' => 'auto',
        'insert_styles' => array(
          'auto' => 'auto',
          'colorbox__article_breakpoints_theme_horki2_desktop_narrow_1x' => 0,
          'colorbox__article_breakpoints_theme_horki2_desktop_normal_1x' => 0,
          'colorbox__article_breakpoints_theme_horki2_mobile_narrow_1x' => 0,
          'colorbox__article_breakpoints_theme_horki2_mobile_normal_1x' => 0,
          'colorbox__article_colorbox' => 0,
          'colorbox__article_gallery' => 0,
          'colorbox__article_gallery_thumbnail' => 0,
          'colorbox__filtered-table' => 0,
          'colorbox__highlight_breakpoints_theme_horki2_desktop_narrow_1x' => 0,
          'colorbox__highlight_breakpoints_theme_horki2_desktop_normal_1x' => 0,
          'colorbox__highlight_breakpoints_theme_horki2_mobile_narrow_1x' => 0,
          'colorbox__highlight_breakpoints_theme_horki2_mobile_normal_1x' => 0,
          'colorbox__large' => 0,
          'colorbox__main_pic_preview' => 0,
          'colorbox__mediagrid_breakpoints_theme_horki2_desktop_narrow_1x' => 0,
          'colorbox__mediagrid_breakpoints_theme_horki2_desktop_normal_1x' => 0,
          'colorbox__mediagrid_breakpoints_theme_horki2_mobile_narrow_1x' => 0,
          'colorbox__mediagrid_breakpoints_theme_horki2_mobile_normal_1x' => 0,
          'colorbox__medium' => 0,
          'colorbox__node_teaser_preview' => 0,
          'colorbox__photo_video_preview' => 0,
          'colorbox__square_news_preview' => 0,
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
          'image_article_breakpoints_theme_horki2_desktop_narrow_1x' => 0,
          'image_article_breakpoints_theme_horki2_desktop_normal_1x' => 0,
          'image_article_breakpoints_theme_horki2_mobile_narrow_1x' => 0,
          'image_article_breakpoints_theme_horki2_mobile_normal_1x' => 0,
          'image_article_colorbox' => 0,
          'image_article_gallery' => 0,
          'image_article_gallery_thumbnail' => 0,
          'image_filtered-table' => 0,
          'image_highlight_breakpoints_theme_horki2_desktop_narrow_1x' => 0,
          'image_highlight_breakpoints_theme_horki2_desktop_normal_1x' => 0,
          'image_highlight_breakpoints_theme_horki2_mobile_narrow_1x' => 0,
          'image_highlight_breakpoints_theme_horki2_mobile_normal_1x' => 0,
          'image_large' => 0,
          'image_main_pic_preview' => 0,
          'image_mediagrid_breakpoints_theme_horki2_desktop_narrow_1x' => 0,
          'image_mediagrid_breakpoints_theme_horki2_desktop_normal_1x' => 0,
          'image_mediagrid_breakpoints_theme_horki2_mobile_narrow_1x' => 0,
          'image_mediagrid_breakpoints_theme_horki2_mobile_normal_1x' => 0,
          'image_medium' => 0,
          'image_node_teaser_preview' => 0,
          'image_photo_video_preview' => 0,
          'image_square_news_preview' => 0,
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
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Абранае месца на мапе');
  t('Апісанне');
  t('Галоўны фотаздымак');
  t('Мапа');
  t('Маркер');
  t('Месца');
  t('Падрабязнае апісанне месца.');
  t('Тып');

  return $field_instances;
}
