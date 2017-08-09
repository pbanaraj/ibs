<?php
/**
 * @file
 * feature_sbi_branches.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function feature_sbi_branches_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-branches-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'branches-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'branches',
    'roles' => array(),
    'themes' => array(
      'bootstrap' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap',
        'weight' => 0,
      ),
      'sbicap' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'sbicap',
        'weight' => -37,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  return $export;
}
