<?php
/**
 * @file
 * feature_cs_modal_blocks_settings.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function feature_cs_modal_blocks_settings_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['ctools_custom_modal-custom_form_modal_settings_block'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'custom_form_modal_settings_block',
    'module' => 'ctools_custom_modal',
    'node_types' => array(),
    'pages' => 'customer-service',
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
    'title' => '',
    'visibility' => 1,
  );

  $export['ctools_custom_modal-custom_node_modal_settings_block'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'custom_node_modal_settings_block',
    'module' => 'ctools_custom_modal',
    'node_types' => array(),
    'pages' => '<front>
education/*',
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
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
