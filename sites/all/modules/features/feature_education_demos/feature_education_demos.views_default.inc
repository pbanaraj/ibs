<?php
/**
 * @file
 * feature_education_demos.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function feature_education_demos_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'education_demos';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Education Demos';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Demos';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'demo' => 'demo',
  );

  /* Display: Video Demos */
  $handler = $view->new_display('block', 'Video Demos', 'video_demos');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['label'] = '';
  $handler->display->display_options['fields']['field_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_description']['alter']['max_length'] = '50';
  $handler->display->display_options['fields']['field_description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_description']['settings'] = array(
    'trim_length' => '100',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="col-sm-5 col-md-3 col-lg-3">
  <div class="video-icon-img">
    <img src="/sites/all/themes/sbicap/common/images/video-demo-icon.png" class="img-responsive" alt="video" />
  </div>
</div>
<div class="col-sm-7 col-md-9 col-lg-9">
  <div class="video-icon-cnt">
    <h3 class="video-icon-tit">[title]</h3>
    [field_description]
  </div>
</div>
<span class="demo-act-arw"> </span>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'demo' => 'demo',
  );
  /* Filter criterion: Content: Type of file (field_type_of_file) */
  $handler->display->display_options['filters']['field_type_of_file_value']['id'] = 'field_type_of_file_value';
  $handler->display->display_options['filters']['field_type_of_file_value']['table'] = 'field_data_field_type_of_file';
  $handler->display->display_options['filters']['field_type_of_file_value']['field'] = 'field_type_of_file_value';
  $handler->display->display_options['filters']['field_type_of_file_value']['value'] = array(
    'video' => 'video',
  );

  /* Display: Document Demos */
  $handler = $view->new_display('block', 'Document Demos', 'document_demos');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['label'] = '';
  $handler->display->display_options['fields']['field_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_description']['alter']['max_length'] = '50';
  $handler->display->display_options['fields']['field_description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="col-sm-5 col-md-3 col-lg-3">
  <div class="video-icon-img">
    <img src="/sites/all/themes/sbicap/common/images/pdf-demo-icon.png" class="img-responsive" alt="video" />
  </div>
</div>
<div class="col-sm-7 col-md-9 col-lg-9">
  <div class="video-icon-cnt">
    <h3 class="video-icon-tit">[title]</h3>
    [field_description]
  </div>
</div>
<span class="demo-act-arw"> </span>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'demo' => 'demo',
  );
  /* Filter criterion: Content: Type of file (field_type_of_file) */
  $handler->display->display_options['filters']['field_type_of_file_value']['id'] = 'field_type_of_file_value';
  $handler->display->display_options['filters']['field_type_of_file_value']['table'] = 'field_data_field_type_of_file';
  $handler->display->display_options['filters']['field_type_of_file_value']['field'] = 'field_type_of_file_value';
  $handler->display->display_options['filters']['field_type_of_file_value']['value'] = array(
    'pdf' => 'pdf',
  );
  $handler->display->display_options['filters']['field_type_of_file_value']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['block_description'] = 'Document Demos';

  /* Display: Latest Demos */
  $handler = $view->new_display('block', 'Latest Demos', 'latest_demos');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Demo Thumbnail */
  $handler->display->display_options['fields']['field_demo_thumbnail']['id'] = 'field_demo_thumbnail';
  $handler->display->display_options['fields']['field_demo_thumbnail']['table'] = 'field_data_field_demo_thumbnail';
  $handler->display->display_options['fields']['field_demo_thumbnail']['field'] = 'field_demo_thumbnail';
  $handler->display->display_options['fields']['field_demo_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_demo_thumbnail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_demo_thumbnail']['element_type'] = '0';
  $handler->display->display_options['fields']['field_demo_thumbnail']['element_class'] = 'img-responsive cur-pointer';
  $handler->display->display_options['fields']['field_demo_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_demo_thumbnail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_demo_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_demo_thumbnail']['settings'] = array(
    'image_style' => 'demo_thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Type of file */
  $handler->display->display_options['fields']['field_type_of_file']['id'] = 'field_type_of_file';
  $handler->display->display_options['fields']['field_type_of_file']['table'] = 'field_data_field_type_of_file';
  $handler->display->display_options['fields']['field_type_of_file']['field'] = 'field_type_of_file';
  $handler->display->display_options['fields']['field_type_of_file']['label'] = '';
  $handler->display->display_options['fields']['field_type_of_file']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_type_of_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_type_of_file']['type'] = 'list_key';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="viwed-demo-holder-in">
  <div class="col-sm-2 no-pad"><img src="/sites/all/themes/sbicap/common/images/[field_type_of_file]-demo-icon.png" class="img-responsive" alt="[field_type_of_file]" /></div>
  <div class="col-sm-10">
    <div class="video-demo-rt-cnt">[title]</div>
  </div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['block_description'] = 'Latest Demos';

  /* Display: Most Viewed Demos */
  $handler = $view->new_display('block', 'Most Viewed Demos', 'most_viewed_demos');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Demo Thumbnail */
  $handler->display->display_options['fields']['field_demo_thumbnail']['id'] = 'field_demo_thumbnail';
  $handler->display->display_options['fields']['field_demo_thumbnail']['table'] = 'field_data_field_demo_thumbnail';
  $handler->display->display_options['fields']['field_demo_thumbnail']['field'] = 'field_demo_thumbnail';
  $handler->display->display_options['fields']['field_demo_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_demo_thumbnail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_demo_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_demo_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_demo_thumbnail']['settings'] = array(
    'image_style' => 'demo_thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Type of file */
  $handler->display->display_options['fields']['field_type_of_file']['id'] = 'field_type_of_file';
  $handler->display->display_options['fields']['field_type_of_file']['table'] = 'field_data_field_type_of_file';
  $handler->display->display_options['fields']['field_type_of_file']['field'] = 'field_type_of_file';
  $handler->display->display_options['fields']['field_type_of_file']['label'] = '';
  $handler->display->display_options['fields']['field_type_of_file']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_type_of_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_type_of_file']['type'] = 'list_key';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="viwed-demo-holder-in">
  <div class="col-sm-2 no-pad"><img src="/sites/all/themes/sbicap/common/images/[field_type_of_file]-demo-icon.png" class="img-responsive" alt="[field_type_of_file]" /></div>
  <div class="col-sm-10">
    <div class="video-demo-rt-cnt">[title]</div>
  </div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'demo' => 'demo',
  );
  $handler->display->display_options['block_description'] = 'Most Viewed Demos';
  $export['education_demos'] = $view;

  return $export;
}
