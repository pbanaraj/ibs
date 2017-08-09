<?php
/**
 * @file
 * feature_sbi_tv_commercials.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function feature_sbi_tv_commercials_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create tv_commercials content'.
  $permissions['create tv_commercials content'] = array(
    'name' => 'create tv_commercials content',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any tv_commercials content'.
  $permissions['delete any tv_commercials content'] = array(
    'name' => 'delete any tv_commercials content',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own tv_commercials content'.
  $permissions['delete own tv_commercials content'] = array(
    'name' => 'delete own tv_commercials content',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any tv_commercials content'.
  $permissions['edit any tv_commercials content'] = array(
    'name' => 'edit any tv_commercials content',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own tv_commercials content'.
  $permissions['edit own tv_commercials content'] = array(
    'name' => 'edit own tv_commercials content',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
