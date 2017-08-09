<?php
/**
 * @file
 * feature_forms_and_software.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_forms_and_software_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function feature_forms_and_software_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_fe_nodequeue_export_fields().
 */
function feature_forms_and_software_fe_nodequeue_export_fields() {
  $nodequeues = array();

  // Exported nodequeues: download_forms
  $nodequeues['download_forms'] = array(
    'name' => 'download_forms',
    'title' => 'Download Forms',
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
      0 => 'forms_and_software',
    ),
    'roles' => array(),
    'count' => 0,
  );

  return $nodequeues;
}

/**
 * Implements hook_node_info().
 */
function feature_forms_and_software_node_info() {
  $items = array(
    'forms_and_software' => array(
      'name' => t('Forms and Software'),
      'base' => 'node_content',
      'description' => t('Content type Contains the forms (PDF File/Software)'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
