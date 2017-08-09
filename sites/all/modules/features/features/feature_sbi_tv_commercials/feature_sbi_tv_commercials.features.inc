<?php
/**
 * @file
 * feature_sbi_tv_commercials.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_sbi_tv_commercials_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function feature_sbi_tv_commercials_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_fe_nodequeue_export_fields().
 */
function feature_sbi_tv_commercials_fe_nodequeue_export_fields() {
  $nodequeues = array();

  // Exported nodequeues: tv_commercials
  $nodequeues['tv_commercials'] = array(
    'name' => 'tv_commercials',
    'title' => 'TV Commercials',
    'subqueue_title' => '',
    'size' => 0,
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 0,
    'reference' => 0,
    'reverse' => 0,
    'insert_at_front' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'tv_commercials',
    ),
    'roles' => array(),
    'count' => 0,
  );

  return $nodequeues;
}

/**
 * Implements hook_node_info().
 */
function feature_sbi_tv_commercials_node_info() {
  $items = array(
    'tv_commercials' => array(
      'name' => t('TV Commercials'),
      'base' => 'node_content',
      'description' => t('TV Commercials for Why SBISMART.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
