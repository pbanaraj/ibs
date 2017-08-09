<?php
/**
 * @file
 * content3.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content3_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function content3_node_info() {
  $items = array(
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page_banner' => array(
      'name' => t('Page Banner'),
      'base' => 'node_content',
      'description' => t('Contains the banner image for the pages'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'product_and_service' => array(
      'name' => t('Product and Service'),
      'base' => 'node_content',
      'description' => t('Content for Product and Service'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'regularity_corner' => array(
      'name' => t('Regularity Corner'),
      'base' => 'node_content',
      'description' => t('Content for Regularity Corner'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
