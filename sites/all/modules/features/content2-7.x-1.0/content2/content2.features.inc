<?php
/**
 * @file
 * content2.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content2_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function content2_node_info() {
  $items = array(
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
    'expert_talk' => array(
      'name' => t('Expert Talk'),
      'base' => 'node_content',
      'description' => t('Content for expert talk topic'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'faq' => array(
      'name' => t('FAQ'),
      'base' => 'node_content',
      'description' => t('Content for FAQs'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'live_news' => array(
      'name' => t('Live News'),
      'base' => 'node_content',
      'description' => t('Live News content type'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'loan_and_product' => array(
      'name' => t('Loan and Product'),
      'base' => 'node_content',
      'description' => t('Contains the content of Loan and product'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'main_banner' => array(
      'name' => t('Main Banner'),
      'base' => 'node_content',
      'description' => t('Main Banner content type'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'new_branch' => array(
      'name' => t('New branch'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
