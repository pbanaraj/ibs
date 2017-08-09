<?php
/**
 * @file
 * feature_sbi_notifications.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_sbi_notifications_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "captcha" && $api == "captcha") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function feature_sbi_notifications_node_info() {
  $items = array(
    'sbi_notifications' => array(
      'name' => t('SBI Notifications'),
      'base' => 'node_content',
      'description' => t('Useful to create notification contents.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
