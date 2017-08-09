<?php
/**
 * @file
 * feature_webinar.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function feature_webinar_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-webinars-webinars'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'webinars-webinars',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'education/webinars',
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
