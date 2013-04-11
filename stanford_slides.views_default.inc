<?php
/**
 * @file
 * stanford_slides.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function stanford_slides_views_default_views() {
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


  return $export;
}
