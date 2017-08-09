<?php
/**
 * @file
 * feature_education.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function feature_education_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'education_banner_slides';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Education_Banner_Slides';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Education_Banner_Slides';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'slideshow';
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
    'field_education_banner' => 0,
    'field_education_banner_2' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '3';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['hide_on_single_slide'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_education_banner_2' => 'field_education_banner_2',
    'field_education_banner' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_hover'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '3';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['hide_on_single_slide'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['effect'] = 'scrollHorz';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Education Banner */
  $handler->display->display_options['fields']['field_education_banner']['id'] = 'field_education_banner';
  $handler->display->display_options['fields']['field_education_banner']['table'] = 'field_data_field_education_banner';
  $handler->display->display_options['fields']['field_education_banner']['field'] = 'field_education_banner';
  $handler->display->display_options['fields']['field_education_banner']['label'] = '';
  $handler->display->display_options['fields']['field_education_banner']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_education_banner']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_education_banner']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
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
    'education' => 'education',
  );

  /* Display: banner_slides */
  $handler = $view->new_display('block', 'banner_slides', 'education_banner');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Education Banner */
  $handler->display->display_options['fields']['field_education_banner']['id'] = 'field_education_banner';
  $handler->display->display_options['fields']['field_education_banner']['table'] = 'field_data_field_education_banner';
  $handler->display->display_options['fields']['field_education_banner']['field'] = 'field_education_banner';
  $handler->display->display_options['fields']['field_education_banner']['label'] = '';
  $handler->display->display_options['fields']['field_education_banner']['element_type'] = '0';
  $handler->display->display_options['fields']['field_education_banner']['element_class'] = 'img-responsive';
  $handler->display->display_options['fields']['field_education_banner']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_education_banner']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_education_banner']['settings'] = array(
    'image_style' => 'education_banner',
    'image_link' => 'content',
  );
  /* Field: Content: Education Banner */
  $handler->display->display_options['fields']['field_education_banner_2']['id'] = 'field_education_banner_2';
  $handler->display->display_options['fields']['field_education_banner_2']['table'] = 'field_data_field_education_banner';
  $handler->display->display_options['fields']['field_education_banner_2']['field'] = 'field_education_banner';
  $handler->display->display_options['fields']['field_education_banner_2']['label'] = '';
  $handler->display->display_options['fields']['field_education_banner_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_education_banner_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_education_banner_2']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_education_banner_2']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );

  /* Display: Education Grid */
  $handler = $view->new_display('block', 'Education Grid', 'education_grid');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Education Grid';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'col-xs-6 col-sm-4 col-md-3';
  $handler->display->display_options['style_options']['class'] = 'row educationThumbList';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Education Thumbnail */
  $handler->display->display_options['fields']['field_education_thumbnail']['id'] = 'field_education_thumbnail';
  $handler->display->display_options['fields']['field_education_thumbnail']['table'] = 'field_data_field_education_thumbnail';
  $handler->display->display_options['fields']['field_education_thumbnail']['field'] = 'field_education_thumbnail';
  $handler->display->display_options['fields']['field_education_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_education_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_education_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_education_thumbnail']['settings'] = array(
    'image_style' => 'education_thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['alt'] = 'More';
  $handler->display->display_options['fields']['view_node']['alter']['rel'] = 'More';
  $handler->display->display_options['fields']['view_node']['alter']['link_class'] = 'moreLink fontBold';
  $handler->display->display_options['fields']['view_node']['element_type'] = 'p';
  $handler->display->display_options['fields']['view_node']['element_class'] = 'divSpace';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'More';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $export['education_banner_slides'] = $view;

  return $export;
}
