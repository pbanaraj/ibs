<?php
/**
 * @file
 * feature_nri_zone_and_partner_zone_content_update.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_nri_zone_and_partner_zone_content_update_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function feature_nri_zone_and_partner_zone_content_update_node_info() {
  $items = array(
    'page_banner' => array(
      'name' => t('Page Banner'),
      'base' => 'node_content',
      'description' => t('Contains the banner image for the pages'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
