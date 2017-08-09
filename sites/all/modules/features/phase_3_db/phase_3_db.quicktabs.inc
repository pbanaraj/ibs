<?php
/**
 * @file
 * phase_3_db.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function phase_3_db_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'customer_service';
  $quicktabs->ajax = 1;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Customer Service';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'views_delta_customer_service_demo-block',
      'hide_title' => 1,
      'title' => 'DEMOS',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'views_delta_customer_service_demo-block_1',
      'hide_title' => 1,
      'title' => 'DOCUMENTS/PDFS',
      'weight' => '-99',
      'type' => 'block',
    ),
    2 => array(
      'bid' => 'views_delta_customer_service_demo-block_2',
      'hide_title' => 1,
      'title' => 'EDUTAINTMENTS VIDEOS',
      'weight' => '-98',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'Sky';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Customer Service');
  t('DEMOS');
  t('DOCUMENTS/PDFS');
  t('EDUTAINTMENTS VIDEOS');

  $export['customer_service'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'regulatory_corner';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Regulatory Corner';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'custom_delta_regulation',
      'hide_title' => 1,
      'title' => 'REGULATIONS',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'views_delta_regulatory_corner-block',
      'hide_title' => 1,
      'title' => 'NOTICE',
      'weight' => '-99',
      'type' => 'block',
    ),
    2 => array(
      'bid' => 'views_delta_regulatory_corner-block_1',
      'hide_title' => 1,
      'title' => 'LIST OF HOLIDAYS',
      'weight' => '-98',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'Sky';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('LIST OF HOLIDAYS');
  t('NOTICE');
  t('REGULATIONS');
  t('Regulatory Corner');

  $export['regulatory_corner'] = $quicktabs;

  return $export;
}
