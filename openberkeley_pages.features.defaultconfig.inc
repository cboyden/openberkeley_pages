<?php
/**
 * @file
 * openberkeley_pages.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function openberkeley_pages_defaultconfig_features() {
  return array(
    'openberkeley_pages' => array(
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function openberkeley_pages_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create openberkeley_page content'.
  $permissions['create openberkeley_page content'] = array(
    'name' => 'create openberkeley_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'builder' => 'builder',
      'contributor' => 'contributor',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any openberkeley_page content'.
  $permissions['delete any openberkeley_page content'] = array(
    'name' => 'delete any openberkeley_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'builder' => 'builder',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own openberkeley_page content'.
  $permissions['delete own openberkeley_page content'] = array(
    'name' => 'delete own openberkeley_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'builder' => 'builder',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any openberkeley_page content'.
  $permissions['edit any openberkeley_page content'] = array(
    'name' => 'edit any openberkeley_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'builder' => 'builder',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own openberkeley_page content'.
  $permissions['edit own openberkeley_page content'] = array(
    'name' => 'edit own openberkeley_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'builder' => 'builder',
      'contributor' => 'contributor',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
