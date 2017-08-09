<?php
/**
 * @file
 * feature_education_demos.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function feature_education_demos_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create demo content'.
  $permissions['create demo content'] = array(
    'name' => 'create demo content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any demo content'.
  $permissions['delete any demo content'] = array(
    'name' => 'delete any demo content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own demo content'.
  $permissions['delete own demo content'] = array(
    'name' => 'delete own demo content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any demo content'.
  $permissions['edit any demo content'] = array(
    'name' => 'edit any demo content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own demo content'.
  $permissions['edit own demo content'] = array(
    'name' => 'edit own demo content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
