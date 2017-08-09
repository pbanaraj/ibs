<?php
/**
 * @file
 * feature_sbi_notifications.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function feature_sbi_notifications_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create sbi_notifications content'.
  $permissions['create sbi_notifications content'] = array(
    'name' => 'create sbi_notifications content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any sbi_notifications content'.
  $permissions['delete any sbi_notifications content'] = array(
    'name' => 'delete any sbi_notifications content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own sbi_notifications content'.
  $permissions['delete own sbi_notifications content'] = array(
    'name' => 'delete own sbi_notifications content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any sbi_notifications content'.
  $permissions['edit any sbi_notifications content'] = array(
    'name' => 'edit any sbi_notifications content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own sbi_notifications content'.
  $permissions['edit own sbi_notifications content'] = array(
    'name' => 'edit own sbi_notifications content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
