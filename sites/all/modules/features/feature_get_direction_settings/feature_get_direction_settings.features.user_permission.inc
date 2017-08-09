<?php
/**
 * @file
 * feature_get_direction_settings.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function feature_get_direction_settings_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access gmap getdirections'.
  $permissions['access gmap getdirections'] = array(
    'name' => 'access gmap getdirections',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'getdirections',
  );

  return $permissions;
}
