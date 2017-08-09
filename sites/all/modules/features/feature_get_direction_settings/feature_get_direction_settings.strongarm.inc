<?php
/**
 * @file
 * feature_get_direction_settings.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function feature_get_direction_settings_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'getdirections_api3_key';
  $strongarm->value = '';
  $export['getdirections_api3_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'getdirections_api_key';
  $strongarm->value = '';
  $export['getdirections_api_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'getdirections_default';
  $strongarm->value = array(
    'width' => '650px',
    'height' => '600px',
    'latlong' => '23.091249574993387,79.5927734375',
    'zoom' => '10',
    'controltype' => 'large',
    'pancontrol' => 1,
    'mtc' => 'standard',
    'maptype' => 'Map',
    'baselayers' => array(
      'Map' => 1,
      'Satellite' => 1,
      'Hybrid' => 1,
      'Physical' => 1,
    ),
    'unitsystem' => 'metric',
    'behavior' => array(
      'scale' => 0,
      'overview' => 0,
      'googlebar' => 0,
      'overview_opened' => 0,
      'scrollwheel' => 0,
      'draggable' => 1,
    ),
    'streetview_show' => 0,
    'travelmode_show' => 0,
    'transit_dates' => 0,
    'transit_date_format' => 'int',
    'travelextras_show' => 0,
    'map_backgroundcolor' => '',
    'from_width' => '20',
    'to_width' => '20',
    'use_country_dropdown' => 0,
    'use_advanced' => 0,
    'waypoints' => '0',
    'advanced_autocomplete_via' => 0,
    'advanced_autocomplete_via_width' => '20',
    'waypoints_optimise' => 0,
    'waypoint_color' => 'white',
    'advanced_alternate' => 0,
    'advanced_autocomplete' => 0,
    'advanced_autocomplete_bias' => 0,
    'use_https' => 0,
  );
  $export['getdirections_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'getdirections_misc';
  $strongarm->value = array(
    'keep_title' => 0,
    'show_distance' => 0,
    'show_duration' => 0,
    'geolocation_enable' => 0,
    'geolocation_mobile_check' => 1,
    'geolocation_option' => '1',
    'trafficinfo' => 0,
    'trafficinfo_state' => 0,
    'bicycleinfo' => 0,
    'bicycleinfo_state' => 0,
    'transitinfo' => 0,
    'transitinfo_state' => 0,
    'panoramio_show' => 0,
    'panoramio_state' => 0,
    'switchfromto' => 0,
  );
  $export['getdirections_misc'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'getdirections_paths';
  $strongarm->value = array(
    'getdirections_v2_path' => 'sites/all/modules/contrib/getdirections/getdirections_v2.js',
    'getdirections_v2a_path' => 'sites/all/modules/contrib/getdirections/getdirections_v2a.js',
    'getdirections_v3_path' => 'sites/all/modules/contrib/getdirections/getdirections_v3.js',
    'getdirections_v3a_path' => 'sites/all/modules/contrib/getdirections/getdirections_v3a.js',
    'getdirections_v3b_path' => 'sites/all/modules/contrib/getdirections/getdirections_v3b.js',
  );
  $export['getdirections_paths'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'getdirections_returnlink';
  $strongarm->value = array(
    'page_enable' => 0,
    'page_link' => 'Return to page',
    'user_enable' => 0,
    'user_link' => 'Return to page',
  );
  $export['getdirections_returnlink'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'getdirections_ua';
  $strongarm->value = array(
    'ua_string' => 'iphone|ipad|android|blackberry|blazer|bolt|symbian|mobile safari|fennec|gobrowser|iemobile|maemo browser|profile midp|minimo|kindle|opera mini|opera mobi|skyfire|teashark|uzardweb',
  );
  $export['getdirections_ua'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'getdirections_use_v3';
  $strongarm->value = 1;
  $export['getdirections_use_v3'] = $strongarm;

  return $export;
}
