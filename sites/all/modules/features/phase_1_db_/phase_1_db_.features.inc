<?php
/**
 * @file
 * phase_1_db_.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function phase_1_db__ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "captcha" && $api == "captcha") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function phase_1_db__node_info() {
  $items = array(
    'article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t('Use <em>articles</em> for time-sensitive content like news, press releases or blog posts.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
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
    'download' => array(
      'name' => t('Download'),
      'base' => 'node_content',
      'description' => t('Download contains the content type for PDF download '),
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
    'migrate_example_beer' => array(
      'name' => t('Beer'),
      'base' => 'node_content',
      'description' => t('Beer is what we drink.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'migrate_example_producer' => array(
      'name' => t('Wine Producer'),
      'base' => 'node_content',
      'description' => t('Wineries, vineyards, and large producers'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'migrate_example_wine' => array(
      'name' => t('Wine'),
      'base' => 'node_content',
      'description' => t('Wine is what we drink.'),
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
    'software' => array(
      'name' => t('Software'),
      'base' => 'node_content',
      'description' => t('Content type for download the softwares'),
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
    'what_s_new' => array(
      'name' => t('What\'s new'),
      'base' => 'node_content',
      'description' => t('What\'s new content type'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
