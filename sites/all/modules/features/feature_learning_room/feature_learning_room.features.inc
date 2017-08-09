<?php
/**
 * @file
 * feature_learning_room.features.inc
 */

/**
 * Implements hook_views_api().
 */
function feature_learning_room_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function feature_learning_room_node_info() {
  $items = array(
    'learning_room' => array(
      'name' => t('learning Room'),
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
