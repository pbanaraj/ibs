<?php
/**
 * @file
 * content4.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content4_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function content4_node_info() {
  $items = array(
    'regularity_corner' => array(
      'name' => t('Regularity Corner'),
      'base' => 'node_content',
      'description' => t('Content for Regularity Corner'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'right_carousel' => array(
      'name' => t('Right Carousel'),
      'base' => 'node_content',
      'description' => t('Right Carousel content type'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'smart_insights' => array(
      'name' => t('Smart Insights'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'tools' => array(
      'name' => t('Tools'),
      'base' => 'node_content',
      'description' => t('Tools content type for the calculater'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'webform' => array(
      'name' => t('Webform'),
      'base' => 'node_content',
      'description' => t('Create a new form or questionnaire accessible to users. Submission results and statistics are recorded and accessible to privileged users.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
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
