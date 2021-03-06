<?php
/**
 * @file
 * feature_smart_insights.features.inc
 */

/**
 * Implements hook_views_api().
 */
function feature_smart_insights_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function feature_smart_insights_node_info() {
  $items = array(
    'smart_insights' => array(
      'name' => t('Smart Insights'),
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
