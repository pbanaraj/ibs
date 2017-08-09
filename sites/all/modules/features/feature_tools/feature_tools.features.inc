<?php
/**
 * @file
 * feature_tools.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_tools_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function feature_tools_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function feature_tools_node_info() {
  $items = array(
    'tools' => array(
      'name' => t('Tools'),
      'base' => 'node_content',
      'description' => t('Tools content type for the calculater'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
