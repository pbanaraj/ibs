<?php
/**
 * @file
 * content1.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content1_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function content1_node_info() {
  $items = array(
    'branches' => array(
      'name' => t('Branches'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'career_page' => array(
      'name' => t('Career Pages'),
      'base' => 'node_content',
      'description' => t('Content for career pages showing in tab'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'demo' => array(
      'name' => t('Demo'),
      'base' => 'node_content',
      'description' => t('Demo page content'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'edutainment' => array(
      'name' => t('Edutainment'),
      'base' => 'node_content',
      'description' => t('Edutainment page content'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
