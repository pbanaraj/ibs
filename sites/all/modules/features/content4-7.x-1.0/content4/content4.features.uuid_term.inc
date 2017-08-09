<?php
/**
 * @file
 * content4.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function content4_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Diversified Market Products',
    'description' => '<p><a href="http://172.15.3.37/category/smart-insights-category/diversified-market-products">Diversified Market Products</a></p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '2c5744ac-890d-4df9-a136-7e27496d311a',
    'vocabulary_machine_name' => 'smart_insights_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  return $terms;
}
