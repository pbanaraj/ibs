<?php
/**
 * @file
 * feature_webinar.features.inc
 */

/**
 * Implements hook_views_api().
 */
function feature_webinar_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function feature_webinar_node_info() {
  $items = array(
    'webinars' => array(
      'name' => t('Webinars'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
