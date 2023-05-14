<?php

/**
 * @file
 * views_front.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function views_front_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'front';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Навіна дня';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'болей';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '300';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '300';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Прымяніць';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Скінуць';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Усе -';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« першая';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ папярэдняя';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'наступная ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'апошняя »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Relationship: Зрабіць галоўнай навіной.: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'main_news' => 'main_news',
  );
  /* Поле: Змест: Загаловак */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Змест: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Змест: Статус публікацыі */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Блок */
  $handler = $view->new_display('block', 'Блок', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Навiна дня';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Ніжні калантытул: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['label'] = 'Дадаць сваю навіну!';
  $handler->display->display_options['footer']['area']['content'] = '<a class="flush-right-this bold-text rich-link" href="/node/add/news-from-readers">Дадаць сваю навіну!</a>';
  $handler->display->display_options['footer']['area']['format'] = 'author_text';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Зрабіць галоўнай навіной.: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'main_news' => 'main_news',
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Поле: Змест: Колькасць каментароў */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = '';
  $handler->display->display_options['fields']['comment_count']['exclude'] = TRUE;
  $handler->display->display_options['fields']['comment_count']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['comment_count']['alter']['text'] = '<span class="comments-counter-highlight">[comment_count]</span>';
  $handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comment_count']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['comment_count']['separator'] = '';
  /* Поле: Змест: Загаловак */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title][comment_count]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_class'] = 'black-text';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Поле: Змест: Галоўны фотаздымак */
  $handler->display->display_options['fields']['field_pics']['id'] = 'field_pics';
  $handler->display->display_options['fields']['field_pics']['table'] = 'field_data_field_pics';
  $handler->display->display_options['fields']['field_pics']['field'] = 'field_pics';
  $handler->display->display_options['fields']['field_pics']['label'] = '';
  $handler->display->display_options['fields']['field_pics']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pics']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_pics']['type'] = 'picture';
  $handler->display->display_options['fields']['field_pics']['settings'] = array(
    'picture_mapping' => 'highlight',
    'fallback_image_style' => 'highlight_breakpoints_theme_horki2_fallback',
    'lazyload' => 0,
    'lazyload_aspect_ratio' => 0,
    'image_link' => 'content',
    'colorbox_settings' => array(
      'colorbox_group' => 'article',
      'colorbox_gallery' => 'post',
      'colorbox_gallery_custom' => '',
      'colorbox_caption' => 'auto',
      'colorbox_caption_custom' => '',
    ),
  );
  $handler->display->display_options['fields']['field_pics']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_pics']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Вузел: Published at */
  $handler->display->display_options['sorts']['published_at']['id'] = 'published_at';
  $handler->display->display_options['sorts']['published_at']['table'] = 'publication_date';
  $handler->display->display_options['sorts']['published_at']['field'] = 'published_at';
  $handler->display->display_options['sorts']['published_at']['order'] = 'DESC';
  $handler->display->display_options['sorts']['published_at']['granularity'] = 'minute';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Змест: Статус публікацыі */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Зрабіць галоўнай навіной.: In queue */
  $handler->display->display_options['filters']['in_queue']['id'] = 'in_queue';
  $handler->display->display_options['filters']['in_queue']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['filters']['in_queue']['field'] = 'in_queue';
  $handler->display->display_options['filters']['in_queue']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['filters']['in_queue']['value'] = '1';
  $handler->display->display_options['block_description'] = 'Навiна дня';
  $handler->display->display_options['block_caching'] = '8';

  /* Display: Старонка */
  $handler = $view->new_display('page', 'Старонка', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'page-main-news';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Поле: Node statistics: Recent count */
  $handler->display->display_options['fields']['recentcount']['id'] = 'recentcount';
  $handler->display->display_options['fields']['recentcount']['table'] = 'jstats_node';
  $handler->display->display_options['fields']['recentcount']['field'] = 'recentcount';
  $handler->display->display_options['fields']['recentcount']['label'] = '';
  $handler->display->display_options['fields']['recentcount']['exclude'] = TRUE;
  $handler->display->display_options['fields']['recentcount']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['recentcount']['alter']['text'] = '<img src="/sites/default/files/default_images/view-icon.png" width="22" height="14" /> [recentcount] ';
  $handler->display->display_options['fields']['recentcount']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['recentcount']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['recentcount']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['recentcount']['separator'] = ' ';
  /* Поле: Змест: Колькасць каментароў */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = '';
  $handler->display->display_options['fields']['comment_count']['exclude'] = TRUE;
  $handler->display->display_options['fields']['comment_count']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['comment_count']['alter']['text'] = '<img src="/sites/default/files/default_images/comment-icon.png" width="16" height="14" /> [comment_count]';
  $handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comment_count']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['comment_count']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['comment_count']['separator'] = ' ';
  /* Поле: Змест: Галоўны фотаздымак */
  $handler->display->display_options['fields']['field_pics']['id'] = 'field_pics';
  $handler->display->display_options['fields']['field_pics']['table'] = 'field_data_field_pics';
  $handler->display->display_options['fields']['field_pics']['field'] = 'field_pics';
  $handler->display->display_options['fields']['field_pics']['label'] = '';
  $handler->display->display_options['fields']['field_pics']['element_class'] = 'main-photo';
  $handler->display->display_options['fields']['field_pics']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pics']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_pics']['type'] = 'picture';
  $handler->display->display_options['fields']['field_pics']['settings'] = array(
    'picture_mapping' => 'highlight',
    'fallback_image_style' => 'highlight_breakpoints_theme_horki2_fallback',
    'lazyload' => 0,
    'lazyload_aspect_ratio' => 0,
    'image_link' => 'content',
    'colorbox_settings' => array(
      'colorbox_group' => 'highlight',
      'colorbox_gallery' => 'post',
      'colorbox_gallery_custom' => '',
      'colorbox_caption' => 'auto',
      'colorbox_caption_custom' => '',
    ),
  );
  /* Поле: Статыстыка */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Статыстыка';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<span class="views-count">[recentcount]</span><span class="comments-count">[comment_count]</span>';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_class'] = 'main-statistics';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Поле: Змест: Загаловак */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_class'] = 'main-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Вузел: Published at */
  $handler->display->display_options['sorts']['published_at']['id'] = 'published_at';
  $handler->display->display_options['sorts']['published_at']['table'] = 'publication_date';
  $handler->display->display_options['sorts']['published_at']['field'] = 'published_at';
  $handler->display->display_options['sorts']['published_at']['order'] = 'DESC';
  $handler->display->display_options['sorts']['published_at']['granularity'] = 'minute';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Змест: Статус публікацыі */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Зрабіць галоўнай навіной.: In queue */
  $handler->display->display_options['filters']['in_queue']['id'] = 'in_queue';
  $handler->display->display_options['filters']['in_queue']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['filters']['in_queue']['field'] = 'in_queue';
  $handler->display->display_options['filters']['in_queue']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['filters']['in_queue']['value'] = '1';
  $handler->display->display_options['metatags'] = array(
    'und' => array(
      'title' => array(
        'value' => '[view:title] [current-page:pager] | [site:name]',
        'default' => '[view:title] [current-page:pager] | [site:name]',
      ),
      'description' => array(
        'value' => '[view:description]',
        'default' => '[view:description]',
      ),
      'abstract' => array(
        'value' => '',
        'default' => '',
      ),
      'keywords' => array(
        'value' => '',
        'default' => '',
      ),
      'author' => array(
        'value' => '',
        'default' => '',
      ),
      'robots' => array(
        'value' => array(
          'index' => 0,
          'follow' => 0,
          'noindex' => 0,
          'nofollow' => 0,
          'noarchive' => 0,
          'nosnippet' => 0,
          'noodp' => 0,
          'noydir' => 0,
          'noimageindex' => 0,
          'notranslate' => 0,
        ),
        'default' => array(),
      ),
      'news_keywords' => array(
        'value' => '',
        'default' => '',
      ),
      'standout' => array(
        'value' => '',
        'default' => '',
      ),
      'rating' => array(
        'value' => '',
        'default' => '',
      ),
      'referrer' => array(
        'value' => '',
        'default' => '',
      ),
      'rights' => array(
        'value' => '',
        'default' => '',
      ),
      'image_src' => array(
        'value' => 'sites/default/files/social_preview/default.png',
        'default' => 'sites/default/files/social_preview/default.png',
      ),
      'canonical' => array(
        'value' => '',
        'default' => '[current-page:url]',
      ),
      'set_cookie' => array(
        'value' => '',
        'default' => '',
      ),
      'shortlink' => array(
        'value' => '',
        'default' => '',
      ),
      'original-source' => array(
        'value' => '',
        'default' => '',
      ),
      'prev' => array(
        'value' => '',
        'default' => '',
      ),
      'next' => array(
        'value' => '',
        'default' => '',
      ),
      'content-language' => array(
        'value' => 'ru',
        'default' => 'ru',
      ),
      'geo.position' => array(
        'value' => '',
        'default' => '',
      ),
      'geo.placename' => array(
        'value' => '',
        'default' => '',
      ),
      'geo.region' => array(
        'value' => '',
        'default' => '',
      ),
      'icbm' => array(
        'value' => '',
        'default' => '',
      ),
      'refresh' => array(
        'value' => '',
        'default' => '',
      ),
      'revisit-after' => array(
        'value' => '',
        'period' => '',
        'default' => '',
      ),
      'pragma' => array(
        'value' => '',
        'default' => '',
      ),
      'cache-control' => array(
        'value' => '',
        'default' => '',
      ),
      'expires' => array(
        'value' => '',
        'default' => '',
      ),
      'google' => array(
        'value' => '',
        'default' => '',
      ),
      'fb:admins' => array(
        'value' => '',
        'default' => '',
      ),
      'fb:app_id' => array(
        'value' => '1404750383092736',
        'default' => '1404750383092736',
      ),
      'fb:pages' => array(
        'value' => '',
        'default' => '',
      ),
      'og:type' => array(
        'value' => 'website',
        'default' => 'website',
      ),
      'og:url' => array(
        'value' => '',
        'default' => '[view:url]',
      ),
      'og:title' => array(
        'value' => '[view:title] [current-page:pager]',
        'default' => '[view:title] [current-page:pager]',
      ),
      'og:determiner' => array(
        'value' => '',
        'default' => '',
      ),
      'og:description' => array(
        'value' => '',
        'default' => '',
      ),
      'og:updated_time' => array(
        'value' => '',
        'default' => '',
      ),
      'og:see_also' => array(
        'value' => '',
        'default' => '',
      ),
      'og:image' => array(
        'value' => 'sites/default/files/social_preview/default.png',
        'default' => 'sites/default/files/social_preview/default.png',
      ),
      'og:image:url' => array(
        'value' => '',
        'default' => '',
      ),
      'og:image:secure_url' => array(
        'value' => '',
        'default' => '',
      ),
      'og:image:alt' => array(
        'value' => '',
        'default' => '',
      ),
      'og:image:type' => array(
        'value' => 'image/png',
        'default' => 'image/png',
      ),
      'og:image:width' => array(
        'value' => '968',
        'default' => '968',
      ),
      'og:image:height' => array(
        'value' => '504',
        'default' => '504',
      ),
      'og:latitude' => array(
        'value' => '',
        'default' => '',
      ),
      'og:longitude' => array(
        'value' => '',
        'default' => '',
      ),
      'og:street_address' => array(
        'value' => '',
        'default' => '',
      ),
      'og:locality' => array(
        'value' => '',
        'default' => '',
      ),
      'og:region' => array(
        'value' => '',
        'default' => '',
      ),
      'og:postal_code' => array(
        'value' => '',
        'default' => '',
      ),
      'og:country_name' => array(
        'value' => '',
        'default' => '',
      ),
      'og:email' => array(
        'value' => '',
        'default' => '',
      ),
      'og:phone_number' => array(
        'value' => '',
        'default' => '',
      ),
      'og:fax_number' => array(
        'value' => '',
        'default' => '',
      ),
      'og:locale' => array(
        'value' => 'ru_RU',
        'default' => 'ru_RU',
      ),
      'og:locale:alternate' => array(
        'value' => 'be_BY',
        'default' => 'be_BY',
      ),
      'article:author' => array(
        'value' => '',
        'default' => '',
      ),
      'article:publisher' => array(
        'value' => '',
        'default' => '',
      ),
      'article:section' => array(
        'value' => '',
        'default' => '',
      ),
      'article:tag' => array(
        'value' => '',
        'default' => '',
      ),
      'article:published_time' => array(
        'value' => '',
        'default' => '',
      ),
      'article:modified_time' => array(
        'value' => '',
        'default' => '',
      ),
      'article:expiration_time' => array(
        'value' => '',
        'default' => '',
      ),
      'profile:first_name' => array(
        'value' => '',
        'default' => '',
      ),
      'profile:last_name' => array(
        'value' => '',
        'default' => '',
      ),
      'profile:username' => array(
        'value' => '',
        'default' => '',
      ),
      'profile:gender' => array(
        'value' => '',
        'default' => '',
      ),
      'og:audio' => array(
        'value' => '',
        'default' => '',
      ),
      'og:audio:secure_url' => array(
        'value' => '',
        'default' => '',
      ),
      'og:audio:type' => array(
        'value' => '',
        'default' => '',
      ),
      'book:author' => array(
        'value' => '',
        'default' => '',
      ),
      'book:isbn' => array(
        'value' => '',
        'default' => '',
      ),
      'book:release_date' => array(
        'value' => '',
        'default' => '',
      ),
      'book:tag' => array(
        'value' => '',
        'default' => '',
      ),
      'og:video:url' => array(
        'value' => '',
        'default' => '',
      ),
      'og:video:secure_url' => array(
        'value' => '',
        'default' => '',
      ),
      'og:video:width' => array(
        'value' => '',
        'default' => '',
      ),
      'og:video:height' => array(
        'value' => '',
        'default' => '',
      ),
      'og:video:type' => array(
        'value' => '',
        'default' => '',
      ),
      'video:actor' => array(
        'value' => '',
        'default' => '',
      ),
      'video:actor:role' => array(
        'value' => '',
        'default' => '',
      ),
      'video:director' => array(
        'value' => '',
        'default' => '',
      ),
      'video:writer' => array(
        'value' => '',
        'default' => '',
      ),
      'video:duration' => array(
        'value' => '',
        'default' => '',
      ),
      'video:release_date' => array(
        'value' => '',
        'default' => '',
      ),
      'video:tag' => array(
        'value' => '',
        'default' => '',
      ),
      'video:series' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:card' => array(
        'value' => 'summary_large_image',
        'default' => 'summary_large_image',
      ),
      'twitter:creator' => array(
        'value' => '@horki_info',
        'default' => '@horki_info',
      ),
      'twitter:creator:id' => array(
        'value' => '120533731',
        'default' => '120533731',
      ),
      'twitter:url' => array(
        'value' => '',
        'default' => '[view:url]',
      ),
      'twitter:title' => array(
        'value' => '[view:title] [current-page:pager]',
        'default' => '[view:title] [current-page:pager]',
      ),
      'twitter:description' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:dnt' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:image' => array(
        'value' => 'sites/default/files/social_preview/default.png',
        'default' => 'sites/default/files/social_preview/default.png',
      ),
      'twitter:image:width' => array(
        'value' => '968',
        'default' => '968',
      ),
      'twitter:image:height' => array(
        'value' => '504',
        'default' => '504',
      ),
      'twitter:image:alt' => array(
        'value' => '[current-page:title]',
        'default' => '[current-page:title]',
      ),
      'twitter:image0' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:image1' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:image2' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:image3' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:player' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:player:width' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:player:height' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:player:stream' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:player:stream:content_type' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:app:country' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:app:name:iphone' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:app:id:iphone' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:app:url:iphone' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:app:name:ipad' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:app:id:ipad' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:app:url:ipad' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:app:name:googleplay' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:app:id:googleplay' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:app:url:googleplay' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:label1' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:data1' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:label2' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:data2' => array(
        'value' => '',
        'default' => '',
      ),
      'schema_article.@type' => array(
        'value' => '',
        'default' => '',
      ),
      'schema_article.headline' => array(
        'value' => '',
        'default' => '',
      ),
      'schema_article.name' => array(
        'value' => '',
        'default' => '',
      ),
      'schema_article.description' => array(
        'value' => '',
        'default' => '',
      ),
      'schema_article.author' => array(
        'value' => array(
          'pivot' => '',
          '@type' => '',
          '@id' => '',
          'name' => '',
          'url' => '',
          'sameAs' => '',
          'logo' => array(
            'pivot' => '',
            '@type' => '',
            'representativeOfPage' => '',
            'url' => '',
            'width' => '',
            'height' => '',
          ),
        ),
        'default' => '',
      ),
      'schema_article.publisher' => array(
        'value' => array(
          '@type' => '',
          '@id' => '',
          'name' => '',
          'url' => '',
          'sameAs' => '',
          'logo' => array(
            'pivot' => '',
            '@type' => '',
            'representativeOfPage' => '',
            'url' => '',
            'width' => '',
            'height' => '',
          ),
        ),
        'default' => '',
      ),
      'schema_article.datePublished' => array(
        'value' => '',
        'default' => '',
      ),
      'schema_article.dateModified' => array(
        'value' => '',
        'default' => '',
      ),
      'schema_article.image' => array(
        'value' => array(
          'pivot' => '',
          '@type' => '',
          'representativeOfPage' => '',
          'url' => '',
          'width' => '',
          'height' => '',
        ),
        'default' => '',
      ),
      'schema_article.mainEntityOfPage' => array(
        'value' => '',
        'default' => '',
      ),
      'schema_article.hasPart' => array(
        'value' => array(
          '@type' => '',
          '@id' => '',
          'name' => '',
          'description' => '',
          'timeRequired' => '',
          'potentialAction' => array(
            'actionType' => '',
            'pivot' => '',
            'ConsumeAction' => array(
              '@type' => '',
              'target' => array(
                'pivot' => '',
                '@type' => '',
                'urlTemplate' => '',
                'actionPlatform' => '',
                'inLanguage' => '',
              ),
              'expectsAcceptanceOf' => array(
                'pivot' => '',
                '@type' => '',
                '@id' => '',
                'price' => '',
                'offerCount' => '',
                'lowPrice' => '',
                'highPrice' => '',
                'priceCurrency' => '',
                'url' => '',
                'itemCondition' => '',
                'availability' => '',
                'availabilityStarts' => '',
                'availabilityEnds' => '',
                'validFrom' => '',
                'priceValidUntil' => '',
                'category' => '',
                'eligibleRegion' => array(
                  'pivot' => '',
                  '@type' => '',
                  'name' => '',
                ),
                'ineligibleRegion' => array(
                  'pivot' => '',
                  '@type' => '',
                  'name' => '',
                ),
              ),
            ),
            'target' => array(
              'pivot' => '',
              '@type' => '',
              'urlTemplate' => '',
              'actionPlatform' => '',
              'inLanguage' => '',
            ),
            'expectsAcceptanceOf' => array(
              'pivot' => '',
              '@type' => '',
              '@id' => '',
              'price' => '',
              'offerCount' => '',
              'lowPrice' => '',
              'highPrice' => '',
              'priceCurrency' => '',
              'url' => '',
              'itemCondition' => '',
              'availability' => '',
              'availabilityStarts' => '',
              'availabilityEnds' => '',
              'validFrom' => '',
              'priceValidUntil' => '',
              'category' => '',
              'eligibleRegion' => array(
                'pivot' => '',
                '@type' => '',
                'name' => '',
              ),
              'ineligibleRegion' => array(
                'pivot' => '',
                '@type' => '',
                'name' => '',
              ),
            ),
            '@type' => '',
          ),
          'isAccessibleForFree' => '',
          'cssSelector' => '',
        ),
        'default' => '',
      ),
      'schema_article.isAccessibleForFree' => array(
        'value' => '',
        'default' => '',
      ),
      'schema_article.speakable' => array(
        'value' => array(
          '@type' => '',
          'xpath' => '',
          'cssSelector' => '',
        ),
        'default' => '',
      ),
      'schema_article.about' => array(
        'value' => '',
        'default' => '',
      ),
      'schema_article.aggregateRating' => array(
        'value' => array(
          'pivot' => '',
          '@type' => '',
          'ratingValue' => '',
          'ratingCount' => '',
          'bestRating' => '',
          'worstRating' => '',
        ),
        'default' => '',
      ),
      'schema_article.review' => array(
        'value' => array(
          'pivot' => '',
          '@type' => '',
          'reviewBody' => '',
          'datePublished' => '',
          'author' => array(
            'pivot' => '',
            '@type' => '',
            '@id' => '',
            'name' => '',
            'url' => '',
            'sameAs' => '',
            'logo' => array(
              'pivot' => '',
              '@type' => '',
              'representativeOfPage' => '',
              'url' => '',
              'width' => '',
              'height' => '',
            ),
          ),
          'reviewRating' => array(
            'pivot' => '',
            '@type' => '',
            'ratingValue' => '',
            'ratingCount' => '',
            'bestRating' => '',
            'worstRating' => '',
          ),
        ),
        'default' => '',
      ),
      'schema_item_list.@type' => array(
        'value' => '',
        'default' => '',
      ),
      'schema_item_list.@id' => array(
        'value' => '',
        'default' => '',
      ),
      'schema_item_list.itemListElement' => array(
        'value' => '',
        'default' => '',
      ),
      'schema_item_list.mainEntityOfPage' => array(
        'value' => '',
        'default' => '',
      ),
      'schema_organization.@type' => array(
        'value' => '',
        'default' => '',
      ),
      'schema_organization.additionalType' => array(
        'value' => '',
        'default' => '',
      ),
      'schema_organization.@id' => array(
        'value' => '',
        'default' => '',
      ),
      'schema_organization.name' => array(
        'value' => '',
        'default' => '',
      ),
      'schema_organization.address' => array(
        'value' => array(
          'pivot' => '',
          '@type' => '',
          'streetAddress' => '',
          'addressLocality' => '',
          'addressRegion' => '',
          'postalCode' => '',
          'addressCountry' => '',
        ),
        'default' => '',
      ),
      'schema_organization.geo' => array(
        'value' => array(
          'pivot' => '',
          '@type' => '',
          'latitude' => '',
          'longitude' => '',
        ),
        'default' => '',
      ),
      'schema_organization.telephone' => array(
        'value' => '',
        'default' => '',
      ),
      'schema_organization.contactPoint' => array(
        'value' => array(
          'pivot' => '',
          '@type' => '',
          'telephone' => '',
          'url' => '',
          'availableLanguage' => '',
          'contactType' => '',
          'contactOption' => '',
          'areaServed' => array(
            'pivot' => '',
            '@type' => '',
            'name' => '',
            'url' => '',
            'address' => array(
              'pivot' => '',
              '@type' => '',
              'streetAddress' => '',
              'addressLocality' => '',
              'addressRegion' => '',
              'postalCode' => '',
              'addressCountry' => '',
            ),
            'geo' => array(
              'pivot' => '',
              '@type' => '',
              'latitude' => '',
              'longitude' => '',
            ),
          ),
          'email' => '',
          'faxnumber' => '',
          'productSupported' => '',
        ),
        'default' => '',
      ),
      'schema_organization.url' => array(
        'value' => '',
        'default' => '',
      ),
      'schema_organization.sameAs' => array(
        'value' => '',
        'default' => '',
      ),
      'schema_organization.description' => array(
        'value' => '',
        'default' => '',
      ),
      'schema_organization.brand' => array(
        'value' => array(
          '@type' => '',
          '@id' => '',
          'name' => '',
          'description' => '',
          'url' => '',
          'sameAs' => '',
          'logo' => array(
            'pivot' => '',
            '@type' => '',
            'representativeOfPage' => '',
            'url' => '',
            'width' => '',
            'height' => '',
          ),
        ),
        'default' => '',
      ),
      'schema_organization.acceptsReservations' => array(
        'value' => '',
        'default' => '',
      ),
      'schema_organization.menu' => array(
        'value' => '',
        'default' => '',
      ),
      'schema_organization.openingHoursSpecification' => array(
        'value' => array(
          'pivot' => '',
          '@type' => '',
          'dayOfWeek' => '',
          'opens' => '',
          'closes' => '',
          'validFrom' => '',
          'validThrough' => '',
        ),
        'default' => '',
      ),
      'schema_organization.image' => array(
        'value' => array(
          'pivot' => '',
          '@type' => '',
          'representativeOfPage' => '',
          'url' => '',
          'width' => '',
          'height' => '',
        ),
        'default' => '',
      ),
      'schema_organization.logo' => array(
        'value' => array(
          '@type' => '',
          'representativeOfPage' => '',
          'url' => '',
          'width' => '',
          'height' => '',
        ),
        'default' => '',
      ),
      'schema_organization.potentialAction' => array(
        'value' => array(
          'actionType' => '',
          'TradeAction' => array(
            '@type' => '',
            'target' => array(
              'pivot' => '',
              '@type' => '',
              'urlTemplate' => '',
              'actionPlatform' => '',
              'inLanguage' => '',
            ),
          ),
          'OrganizeAction' => array(
            '@type' => '',
            'target' => array(
              'pivot' => '',
              '@type' => '',
              'urlTemplate' => '',
              'actionPlatform' => '',
              'inLanguage' => '',
            ),
            'result' => array(
              'pivot' => '',
              '@type' => '',
              '@id' => '',
              'name' => '',
              'url' => '',
            ),
          ),
          'target' => array(
            'pivot' => '',
            '@type' => '',
            'urlTemplate' => '',
            'actionPlatform' => '',
            'inLanguage' => '',
          ),
          '@type' => '',
          'result' => array(
            'pivot' => '',
            '@type' => '',
            '@id' => '',
            'name' => '',
            'url' => '',
          ),
        ),
        'default' => '',
      ),
      'schema_organization.priceRange' => array(
        'value' => '',
        'default' => '',
      ),
      'schema_organization.memberOf' => array(
        'value' => array(
          '@type' => '',
          'name' => '',
          'programName' => '',
          'alternateName' => '',
          'hostingOrganization' => array(
            'pivot' => '',
            '@type' => '',
            '@id' => '',
            'name' => '',
            'url' => '',
            'sameAs' => '',
            'logo' => array(
              'pivot' => '',
              '@type' => '',
              'representativeOfPage' => '',
              'url' => '',
              'width' => '',
              'height' => '',
            ),
          ),
          'member' => array(
            'pivot' => '',
            '@type' => '',
            '@id' => '',
            'name' => '',
            'url' => '',
            'sameAs' => '',
            'logo' => array(
              'pivot' => '',
              '@type' => '',
              'representativeOfPage' => '',
              'url' => '',
              'width' => '',
              'height' => '',
            ),
          ),
          'membershipNumber' => '',
          'identifier' => '',
          'additionalType' => '',
          'description' => '',
          'disambiguatingDescription' => '',
          'image' => array(
            'pivot' => '',
            '@type' => '',
            'representativeOfPage' => '',
            'url' => '',
            'width' => '',
            'height' => '',
          ),
          'mainEntityOfPage' => '',
          'url' => '',
          'sameAs' => '',
        ),
        'default' => '',
      ),
      'schema_organization.aggregateRating' => array(
        'value' => array(
          'pivot' => '',
          '@type' => '',
          'ratingValue' => '',
          'ratingCount' => '',
          'bestRating' => '',
          'worstRating' => '',
        ),
        'default' => '',
      ),
      'schema_organization.starRating' => array(
        'value' => array(
          'pivot' => '',
          '@type' => '',
          'ratingValue' => '',
          'ratingCount' => '',
          'bestRating' => '',
          'worstRating' => '',
        ),
        'default' => '',
      ),
      'schema_organization.review' => array(
        'value' => array(
          'pivot' => '',
          '@type' => '',
          'reviewBody' => '',
          'datePublished' => '',
          'author' => array(
            'pivot' => '',
            '@type' => '',
            '@id' => '',
            'name' => '',
            'url' => '',
            'sameAs' => '',
            'logo' => array(
              'pivot' => '',
              '@type' => '',
              'representativeOfPage' => '',
              'url' => '',
              'width' => '',
              'height' => '',
            ),
          ),
          'reviewRating' => array(
            'pivot' => '',
            '@type' => '',
            'ratingValue' => '',
            'ratingCount' => '',
            'bestRating' => '',
            'worstRating' => '',
          ),
        ),
        'default' => '',
      ),
      'schema_video_object.@type' => array(
        'value' => '',
        'default' => '',
      ),
      'schema_video_object.@id' => array(
        'value' => '',
        'default' => '',
      ),
      'schema_video_object.name' => array(
        'value' => '',
        'default' => '',
      ),
      'schema_video_object.description' => array(
        'value' => '',
        'default' => '',
      ),
      'schema_video_object.uploadDate' => array(
        'value' => '',
        'default' => '',
      ),
      'schema_video_object.expires' => array(
        'value' => '',
        'default' => '',
      ),
      'schema_video_object.thumbnailUrl' => array(
        'value' => array(
          '@type' => '',
          'representativeOfPage' => '',
          'url' => '',
          'width' => '',
          'height' => '',
        ),
        'default' => '',
      ),
      'schema_video_object.contentUrl' => array(
        'value' => '',
        'default' => '',
      ),
      'schema_video_object.embedUrl' => array(
        'value' => '',
        'default' => '',
      ),
      'schema_video_object.duration' => array(
        'value' => '',
        'default' => '',
      ),
      'schema_video_object.interactionCount' => array(
        'value' => '',
        'default' => '',
      ),
      'schema_video_object.transcript' => array(
        'value' => '',
        'default' => '',
      ),
      'schema_video_object.aggregateRating' => array(
        'value' => array(
          'pivot' => '',
          '@type' => '',
          'ratingValue' => '',
          'ratingCount' => '',
          'bestRating' => '',
          'worstRating' => '',
        ),
        'default' => '',
      ),
      'schema_video_object.review' => array(
        'value' => array(
          'pivot' => '',
          '@type' => '',
          'reviewBody' => '',
          'datePublished' => '',
          'author' => array(
            'pivot' => '',
            '@type' => '',
            '@id' => '',
            'name' => '',
            'url' => '',
            'sameAs' => '',
            'logo' => array(
              'pivot' => '',
              '@type' => '',
              'representativeOfPage' => '',
              'url' => '',
              'width' => '',
              'height' => '',
            ),
          ),
          'reviewRating' => array(
            'pivot' => '',
            '@type' => '',
            'ratingValue' => '',
            'ratingCount' => '',
            'bestRating' => '',
            'worstRating' => '',
          ),
        ),
        'default' => '',
      ),
      'schema_web_site.@type' => array(
        'value' => '',
        'default' => '',
      ),
      'schema_web_site.@id' => array(
        'value' => '',
        'default' => '',
      ),
      'schema_web_site.name' => array(
        'value' => '',
        'default' => '',
      ),
      'schema_web_site.url' => array(
        'value' => '',
        'default' => '',
      ),
      'schema_web_site.sameAs' => array(
        'value' => '',
        'default' => '',
      ),
      'schema_web_site.publisher' => array(
        'value' => array(
          'pivot' => '',
          '@type' => '',
          '@id' => '',
          'name' => '',
          'url' => '',
          'sameAs' => '',
          'logo' => array(
            'pivot' => '',
            '@type' => '',
            'representativeOfPage' => '',
            'url' => '',
            'width' => '',
            'height' => '',
          ),
        ),
        'default' => '',
      ),
      'schema_web_site.potentialAction' => array(
        'value' => array(
          'actionType' => '',
          'pivot' => '',
          'SearchAction' => array(
            '@type' => '',
            'query' => '',
            'query-input' => '',
            'target' => array(
              'pivot' => '',
              '@type' => '',
              'urlTemplate' => '',
              'actionPlatform' => '',
              'inLanguage' => '',
            ),
          ),
          'query' => '',
          'query-input' => '',
          'target' => array(
            'pivot' => '',
            '@type' => '',
            'urlTemplate' => '',
            'actionPlatform' => '',
            'inLanguage' => '',
          ),
          '@type' => '',
        ),
        'default' => '',
      ),
      'schema_web_site.inLanguage' => array(
        'value' => '',
        'default' => '',
      ),
      'schema_web_site.translationOfWork' => array(
        'value' => array(
          '@id' => '',
        ),
        'default' => '',
      ),
      'schema_web_site.workTranslation' => array(
        'value' => array(
          'pivot' => '',
          '@id' => '',
        ),
        'default' => '',
      ),
    ),
  );
  $handler->display->display_options['path'] = 'main';
  $translatables['front'] = array(
    t('Master'),
    t('болей'),
    t('Прымяніць'),
    t('Скінуць'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- Усе -'),
    t('Offset'),
    t('« першая'),
    t('‹ папярэдняя'),
    t('наступная ›'),
    t('апошняя »'),
    t('чарга'),
    t('Блок'),
    t('Навiна дня'),
    t('Дадаць сваю навіну!'),
    t('<a class="flush-right-this bold-text rich-link" href="/node/add/news-from-readers">Дадаць сваю навіну!</a>'),
    t('<span class="comments-counter-highlight">[comment_count]</span>'),
    t('.'),
    t('1'),
    t('@count'),
    t('[title][comment_count]'),
    t('Старонка'),
    t('<img src="/sites/default/files/default_images/view-icon.png" width="22" height="14" /> [recentcount] '),
    t(' '),
    t('<img src="/sites/default/files/default_images/comment-icon.png" width="16" height="14" /> [comment_count]'),
    t('<span class="views-count">[recentcount]</span><span class="comments-count">[comment_count]</span>'),
  );
  $export['front'] = $view;

  return $export;
}
