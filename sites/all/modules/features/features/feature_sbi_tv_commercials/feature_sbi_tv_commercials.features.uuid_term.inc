<?php
/**
 * @file
 * feature_sbi_tv_commercials.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function feature_sbi_tv_commercials_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Customer Service',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '27bcd0bd-e183-3ca4-d176-8b7da2230db5',
    'vocabulary_machine_name' => 'inner_search_master',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  return $terms;
}
