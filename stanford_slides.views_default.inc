<?php
/**
 * @file
 * stanford_image.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function stanford_image_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'stanford_slides';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Stanford Slides';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Slideshow Images';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'counter' => 'counter',
    'field_s_image_image' => 'field_s_image_image',
    'title' => 'title',
    'field_s_image_caption' => 'title',
    'field_s_slide_weight' => 'field_s_slide_weight',
    'field_s_slide_category' => 'field_s_slide_category',
    'field_s_slide_link' => 'field_s_slide_link',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'counter' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_s_image_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ' / ',
      'empty_column' => 1,
    ),
    'field_s_image_caption' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_s_slide_weight' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_s_slide_category' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_s_slide_link' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 1;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Relationship: Field: Image (field_s_image_info) */
  $handler->display->display_options['relationships']['field_s_image_info_value']['id'] = 'field_s_image_info_value';
  $handler->display->display_options['relationships']['field_s_image_info_value']['table'] = 'field_data_field_s_image_info';
  $handler->display->display_options['relationships']['field_s_image_info_value']['field'] = 'field_s_image_info_value';
  $handler->display->display_options['relationships']['field_s_image_info_value']['label'] = 'Image Info Field Collection';
  $handler->display->display_options['relationships']['field_s_image_info_value']['required'] = 0;
  $handler->display->display_options['relationships']['field_s_image_info_value']['delta'] = '-1';
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['external'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['counter']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['counter']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['html'] = 0;
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['counter']['hide_empty'] = 0;
  $handler->display->display_options['fields']['counter']['empty_zero'] = 0;
  $handler->display->display_options['fields']['counter']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Field collection item: Image */
  $handler->display->display_options['fields']['field_s_image_image']['id'] = 'field_s_image_image';
  $handler->display->display_options['fields']['field_s_image_image']['table'] = 'field_data_field_s_image_image';
  $handler->display->display_options['fields']['field_s_image_image']['field'] = 'field_s_image_image';
  $handler->display->display_options['fields']['field_s_image_image']['relationship'] = 'field_s_image_info_value';
  $handler->display->display_options['fields']['field_s_image_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_s_image_image']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_s_image_image']['alter']['path'] = '[field_s_slide_link]';
  $handler->display->display_options['fields']['field_s_image_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_s_image_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_s_image_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_s_image_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_s_image_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_s_image_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_s_image_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_s_image_image']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_s_image_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_s_image_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_s_image_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_s_image_image']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_s_image_image']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_s_image_image']['element_wrapper_class'] = 'banner-image';
  $handler->display->display_options['fields']['field_s_image_image']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_s_image_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_s_image_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_s_image_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_s_image_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_s_image_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'file',
  );
  $handler->display->display_options['fields']['field_s_image_image']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Title and Caption';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Field collection item: Caption */
  $handler->display->display_options['fields']['field_s_image_caption']['id'] = 'field_s_image_caption';
  $handler->display->display_options['fields']['field_s_image_caption']['table'] = 'field_data_field_s_image_caption';
  $handler->display->display_options['fields']['field_s_image_caption']['field'] = 'field_s_image_caption';
  $handler->display->display_options['fields']['field_s_image_caption']['relationship'] = 'field_s_image_info_value';
  $handler->display->display_options['fields']['field_s_image_caption']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_s_image_caption']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_s_image_caption']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_s_image_caption']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_s_image_caption']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_s_image_caption']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_s_image_caption']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_s_image_caption']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_s_image_caption']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_s_image_caption']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_s_image_caption']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_s_image_caption']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_s_image_caption']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_s_image_caption']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_s_image_caption']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_s_image_caption']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_s_image_caption']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_s_image_caption']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_s_image_caption']['field_api_classes'] = 0;
  /* Field: Content: Weight */
  $handler->display->display_options['fields']['field_s_slide_weight']['id'] = 'field_s_slide_weight';
  $handler->display->display_options['fields']['field_s_slide_weight']['table'] = 'field_data_field_s_slide_weight';
  $handler->display->display_options['fields']['field_s_slide_weight']['field'] = 'field_s_slide_weight';
  $handler->display->display_options['fields']['field_s_slide_weight']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_s_slide_weight']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_s_slide_weight']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_s_slide_weight']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_s_slide_weight']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_s_slide_weight']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_s_slide_weight']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_s_slide_weight']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_s_slide_weight']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_s_slide_weight']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_s_slide_weight']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_s_slide_weight']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_s_slide_weight']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_s_slide_weight']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_s_slide_weight']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_s_slide_weight']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_s_slide_weight']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_s_slide_weight']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_s_slide_weight']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_s_slide_weight']['field_api_classes'] = 0;
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_s_slide_category']['id'] = 'field_s_slide_category';
  $handler->display->display_options['fields']['field_s_slide_category']['table'] = 'field_data_field_s_slide_category';
  $handler->display->display_options['fields']['field_s_slide_category']['field'] = 'field_s_slide_category';
  $handler->display->display_options['fields']['field_s_slide_category']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_s_slide_category']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_s_slide_category']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_s_slide_category']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_s_slide_category']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_s_slide_category']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_s_slide_category']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_s_slide_category']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_s_slide_category']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_s_slide_category']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_s_slide_category']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_s_slide_category']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_s_slide_category']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_s_slide_category']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_s_slide_category']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_s_slide_category']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_s_slide_category']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_s_slide_category']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_s_slide_category']['field_api_classes'] = 0;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_s_slide_link']['id'] = 'field_s_slide_link';
  $handler->display->display_options['fields']['field_s_slide_link']['table'] = 'field_data_field_s_slide_link';
  $handler->display->display_options['fields']['field_s_slide_link']['field'] = 'field_s_slide_link';
  $handler->display->display_options['fields']['field_s_slide_link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_s_slide_link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_s_slide_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_s_slide_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_s_slide_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_s_slide_link']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_s_slide_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_s_slide_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_s_slide_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_s_slide_link']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_s_slide_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_s_slide_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_s_slide_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_s_slide_link']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_s_slide_link']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_s_slide_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_s_slide_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_s_slide_link']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_s_slide_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_s_slide_link']['type'] = 'link_separate';
  $handler->display->display_options['fields']['field_s_slide_link']['field_api_classes'] = 0;
  /* Field: Node: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_wrapper_class'] = 'edit-link';
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['edit_node']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit Slide';
  /* Sort criterion: Content: Weight (field_s_slide_weight) */
  $handler->display->display_options['sorts']['field_s_slide_weight_value']['id'] = 'field_s_slide_weight_value';
  $handler->display->display_options['sorts']['field_s_slide_weight_value']['table'] = 'field_data_field_s_slide_weight';
  $handler->display->display_options['sorts']['field_s_slide_weight_value']['field'] = 'field_s_slide_weight_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'stanford_slide' => 'stanford_slide',
  );
  /* Filter criterion: Content: Category (field_s_slide_category) */
  $handler->display->display_options['filters']['field_s_slide_category_tid']['id'] = 'field_s_slide_category_tid';
  $handler->display->display_options['filters']['field_s_slide_category_tid']['table'] = 'field_data_field_s_slide_category';
  $handler->display->display_options['filters']['field_s_slide_category_tid']['field'] = 'field_s_slide_category_tid';
  $handler->display->display_options['filters']['field_s_slide_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_s_slide_category_tid']['expose']['operator_id'] = 'field_s_slide_category_tid_op';
  $handler->display->display_options['filters']['field_s_slide_category_tid']['expose']['label'] = 'Filter by Category';
  $handler->display->display_options['filters']['field_s_slide_category_tid']['expose']['operator'] = 'field_s_slide_category_tid_op';
  $handler->display->display_options['filters']['field_s_slide_category_tid']['expose']['identifier'] = 'field_s_slide_category_tid';
  $handler->display->display_options['filters']['field_s_slide_category_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_s_slide_category_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_s_slide_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_s_slide_category_tid']['vocabulary'] = 'stanford_slide_category';
  $handler->display->display_options['filters']['field_s_slide_category_tid']['hierarchy'] = 1;
  $handler->display->display_options['filters']['field_s_slide_category_tid']['error_message'] = 1;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'slides';
  $export['stanford_slides'] = $view;

  $view = new view;
  $view->name = 'stanford_slideshow';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Stanford Slideshow';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['wrapper_class'] = 'stanford-slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_s_image_caption' => 0,
    'field_s_slide_link' => 0,
    'title' => 0,
    'field_s_image_image' => 0,
    'nothing' => 0,
    'counter' => 0,
    'edit_node' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '3';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'counter' => 'counter',
    'field_s_image_caption' => 0,
    'field_s_slide_link' => 0,
    'title' => 0,
    'field_s_image_image' => 0,
    'nothing' => 0,
    'edit_node' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['transition_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '600';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['pause'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Field: Image (field_s_image_info) */
  $handler->display->display_options['relationships']['field_s_image_info_value']['id'] = 'field_s_image_info_value';
  $handler->display->display_options['relationships']['field_s_image_info_value']['table'] = 'field_data_field_s_image_info';
  $handler->display->display_options['relationships']['field_s_image_info_value']['field'] = 'field_s_image_info_value';
  $handler->display->display_options['relationships']['field_s_image_info_value']['label'] = 'Image Info Field Collection';
  $handler->display->display_options['relationships']['field_s_image_info_value']['required'] = 0;
  $handler->display->display_options['relationships']['field_s_image_info_value']['delta'] = '-1';
  /* Field: Field collection item: Caption */
  $handler->display->display_options['fields']['field_s_image_caption']['id'] = 'field_s_image_caption';
  $handler->display->display_options['fields']['field_s_image_caption']['table'] = 'field_data_field_s_image_caption';
  $handler->display->display_options['fields']['field_s_image_caption']['field'] = 'field_s_image_caption';
  $handler->display->display_options['fields']['field_s_image_caption']['relationship'] = 'field_s_image_info_value';
  $handler->display->display_options['fields']['field_s_image_caption']['label'] = '';
  $handler->display->display_options['fields']['field_s_image_caption']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_image_caption']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_s_image_caption']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_s_image_caption']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_s_image_caption']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_s_image_caption']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_s_image_caption']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_s_image_caption']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_s_image_caption']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_s_image_caption']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_s_image_caption']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_s_image_caption']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_s_image_caption']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_s_image_caption']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_s_image_caption']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_image_caption']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_s_image_caption']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_s_image_caption']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_s_image_caption']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_s_image_caption']['field_api_classes'] = 0;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_s_slide_link']['id'] = 'field_s_slide_link';
  $handler->display->display_options['fields']['field_s_slide_link']['table'] = 'field_data_field_s_slide_link';
  $handler->display->display_options['fields']['field_s_slide_link']['field'] = 'field_s_slide_link';
  $handler->display->display_options['fields']['field_s_slide_link']['label'] = '';
  $handler->display->display_options['fields']['field_s_slide_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_slide_link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_s_slide_link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_s_slide_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_s_slide_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_s_slide_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_s_slide_link']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_s_slide_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_s_slide_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_s_slide_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_s_slide_link']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_s_slide_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_s_slide_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_s_slide_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_s_slide_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_slide_link']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_s_slide_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_s_slide_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_s_slide_link']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_s_slide_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_s_slide_link']['type'] = 'link_url';
  $handler->display->display_options['fields']['field_s_slide_link']['field_api_classes'] = 0;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_s_slide_link_1']['id'] = 'field_s_slide_link_1';
  $handler->display->display_options['fields']['field_s_slide_link_1']['table'] = 'field_data_field_s_slide_link';
  $handler->display->display_options['fields']['field_s_slide_link_1']['field'] = 'field_s_slide_link';
  $handler->display->display_options['fields']['field_s_slide_link_1']['label'] = '';
  $handler->display->display_options['fields']['field_s_slide_link_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_slide_link_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_s_slide_link_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_s_slide_link_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_s_slide_link_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_s_slide_link_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_s_slide_link_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_s_slide_link_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_s_slide_link_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_s_slide_link_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_s_slide_link_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_s_slide_link_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_s_slide_link_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_s_slide_link_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_s_slide_link_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_slide_link_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_s_slide_link_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_s_slide_link_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_s_slide_link_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_s_slide_link_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_s_slide_link_1']['field_api_classes'] = 0;
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_s_slide_category']['id'] = 'field_s_slide_category';
  $handler->display->display_options['fields']['field_s_slide_category']['table'] = 'field_data_field_s_slide_category';
  $handler->display->display_options['fields']['field_s_slide_category']['field'] = 'field_s_slide_category';
  $handler->display->display_options['fields']['field_s_slide_category']['label'] = '';
  $handler->display->display_options['fields']['field_s_slide_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_slide_category']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_s_slide_category']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_s_slide_category']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_s_slide_category']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_s_slide_category']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_s_slide_category']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_s_slide_category']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_s_slide_category']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_s_slide_category']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_s_slide_category']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_s_slide_category']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_s_slide_category']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_s_slide_category']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_s_slide_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_slide_category']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_s_slide_category']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_s_slide_category']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_s_slide_category']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_s_slide_category']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_s_slide_category']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Field collection item: Image */
  $handler->display->display_options['fields']['field_s_image_image']['id'] = 'field_s_image_image';
  $handler->display->display_options['fields']['field_s_image_image']['table'] = 'field_data_field_s_image_image';
  $handler->display->display_options['fields']['field_s_image_image']['field'] = 'field_s_image_image';
  $handler->display->display_options['fields']['field_s_image_image']['relationship'] = 'field_s_image_info_value';
  $handler->display->display_options['fields']['field_s_image_image']['label'] = '';
  $handler->display->display_options['fields']['field_s_image_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_image_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_s_image_image']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_s_image_image']['alter']['path'] = '[field_s_slide_link]';
  $handler->display->display_options['fields']['field_s_image_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_s_image_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_s_image_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_s_image_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_s_image_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_s_image_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_s_image_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_s_image_image']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_s_image_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_s_image_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_s_image_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_s_image_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_image_image']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_s_image_image']['element_wrapper_class'] = 'banner-image';
  $handler->display->display_options['fields']['field_s_image_image']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_s_image_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_s_image_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_s_image_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_s_image_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_s_image_image']['settings'] = array(
    'image_style' => '12-col-banner',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_s_image_image']['field_api_classes'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div>
[field_s_image_image] 
</div>
<div class="stanford-slideshow-text">
<h6>[field_s_slide_category] </h6>
<h2>[title] </h2>
[field_s_image_caption]<br>
[field_s_slide_link_1]
</div>
';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = 0;
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['counter']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['external'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['counter']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['counter']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['html'] = 0;
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['counter']['hide_empty'] = 0;
  $handler->display->display_options['fields']['counter']['empty_zero'] = 0;
  $handler->display->display_options['fields']['counter']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Node: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_wrapper_class'] = 'edit-link';
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['edit_node']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit Slide';
  /* Sort criterion: Content: Weight (field_s_slide_weight) */
  $handler->display->display_options['sorts']['field_s_slide_weight_value']['id'] = 'field_s_slide_weight_value';
  $handler->display->display_options['sorts']['field_s_slide_weight_value']['table'] = 'field_data_field_s_slide_weight';
  $handler->display->display_options['sorts']['field_s_slide_weight_value']['field'] = 'field_s_slide_weight_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'stanford_slide' => 'stanford_slide',
  );
  /* Filter criterion: Content: Group (field_s_slide_group) */
  $handler->display->display_options['filters']['field_s_slide_group_value']['id'] = 'field_s_slide_group_value';
  $handler->display->display_options['filters']['field_s_slide_group_value']['table'] = 'field_data_field_s_slide_group';
  $handler->display->display_options['filters']['field_s_slide_group_value']['field'] = 'field_s_slide_group_value';
  $handler->display->display_options['filters']['field_s_slide_group_value']['value'] = array(
    'home' => 'home',
  );
  /* Filter criterion: Field collection item: Image (field_s_image_image:width) */
  $handler->display->display_options['filters']['field_s_image_image_width']['id'] = 'field_s_image_image_width';
  $handler->display->display_options['filters']['field_s_image_image_width']['table'] = 'field_data_field_s_image_image';
  $handler->display->display_options['filters']['field_s_image_image_width']['field'] = 'field_s_image_image_width';
  $handler->display->display_options['filters']['field_s_image_image_width']['relationship'] = 'field_s_image_info_value';
  $handler->display->display_options['filters']['field_s_image_image_width']['operator'] = '>';
  $handler->display->display_options['filters']['field_s_image_image_width']['value']['value'] = '0';
  $handler->display->display_options['filters']['field_s_image_image_width']['expose']['operator_id'] = 'field_s_image_image_width_op';
  $handler->display->display_options['filters']['field_s_image_image_width']['expose']['label'] = 'Image (field_s_image_image:width)';
  $handler->display->display_options['filters']['field_s_image_image_width']['expose']['operator'] = 'field_s_image_image_width_op';
  $handler->display->display_options['filters']['field_s_image_image_width']['expose']['identifier'] = 'field_s_image_image_width';
  $handler->display->display_options['filters']['field_s_image_image_width']['expose']['multiple'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['stanford_slideshow'] = $view;

  return $export;
}
