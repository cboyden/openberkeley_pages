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

  // Exported permission: 'create openberkely_content_page content'.
  $permissions['create openberkely_content_page content'] = array(
    'name' => 'create openberkely_content_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'builder' => 'builder',
      'contributor' => 'contributor',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any openberkely_content_page content'.
  $permissions['delete any openberkely_content_page content'] = array(
    'name' => 'delete any openberkely_content_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'builder' => 'builder',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own openberkely_content_page content'.
  $permissions['delete own openberkely_content_page content'] = array(
    'name' => 'delete own openberkely_content_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'builder' => 'builder',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any openberkely_content_page content'.
  $permissions['edit any openberkely_content_page content'] = array(
    'name' => 'edit any openberkely_content_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'builder' => 'builder',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own openberkely_content_page content'.
  $permissions['edit own openberkely_content_page content'] = array(
    'name' => 'edit own openberkely_content_page content',
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
