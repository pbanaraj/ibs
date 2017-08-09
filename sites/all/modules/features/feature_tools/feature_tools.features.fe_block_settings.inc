<?php
/**
 * @file
 * feature_tools.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function feature_tools_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['sbicap_tools-education_tools'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'education_tools',
    'module' => 'sbicap_tools',
    'node_types' => array(),
    'pages' => 'education/tools-calculators',
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
        'weight' => -29,
      ),
      'seven' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['views-tools-recent_tools'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'tools-recent_tools',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'education/tools',
    'roles' => array(),
    'themes' => array(
      'bootstrap' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap',
        'weight' => 0,
      ),
      'sbicap' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'sbicap',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-tools-tools'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'tools-tools',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'education/tools',
    'roles' => array(),
    'themes' => array(
      'bootstrap' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap',
        'weight' => 0,
      ),
      'sbicap' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'sbicap',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-tools-top_tools'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'tools-top_tools',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'education/tools',
    'roles' => array(),
    'themes' => array(
      'bootstrap' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap',
        'weight' => 0,
      ),
      'sbicap' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'sbicap',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
