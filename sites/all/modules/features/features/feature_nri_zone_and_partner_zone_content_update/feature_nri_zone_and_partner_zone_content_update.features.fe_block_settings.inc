<?php
/**
 * @file
 * feature_nri_zone_and_partner_zone_content_update.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function feature_nri_zone_and_partner_zone_content_update_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['custom-page_top_image'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'page_top_image',
    'module' => 'custom',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bootstrap' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap',
        'weight' => 0,
      ),
      'sbicap' => array(
        'region' => 'content_top',
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
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
