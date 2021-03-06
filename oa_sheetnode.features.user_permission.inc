<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function oa_sheetnode_user_default_permissions() {
  $permissions = array();

  // Exported permission: create sheet template
  $permissions['create sheet template'] = array(
    'name' => 'create sheet template',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: create sheetnode
  $permissions['create sheetnode'] = array(
    'name' => 'create sheetnode',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
      '2' => 'manager',
    ),
  );

  // Exported permission: delete any sheetnode
  $permissions['delete any sheetnode'] = array(
    'name' => 'delete any sheetnode',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete own sheetnode
  $permissions['delete own sheetnode'] = array(
    'name' => 'delete own sheetnode',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: edit any sheetnode
  $permissions['edit any sheetnode'] = array(
    'name' => 'edit any sheetnode',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: edit own sheetnode
  $permissions['edit own sheetnode'] = array(
    'name' => 'edit own sheetnode',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
      '2' => 'manager',
    ),
  );

  // Exported permission: edit sheet settings
  $permissions['edit sheet settings'] = array(
    'name' => 'edit sheet settings',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  return $permissions;
}
