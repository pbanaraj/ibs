<?php
/**
 * @file
 * content2.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function content2_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Access to Website',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '0e35a3e0-da70-445f-bafa-b052f5c7c600',
    'vocabulary_machine_name' => 'faq_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'New Customer',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '50d9ec53-3c0e-5f64-c144-1440f8dcb479',
    'vocabulary_machine_name' => 'customer_segment',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Accessing Bank Account and Setting Limits',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '97c83eaf-b0d8-4b98-b032-9f5e1a786b2a',
    'vocabulary_machine_name' => 'faq_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Existing Customer',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'c52dd784-44ce-e2d4-2d71-85767f65d59a',
    'vocabulary_machine_name' => 'customer_segment',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  return $terms;
}
