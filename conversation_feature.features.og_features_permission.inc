<?php
/**
 * @file
 * conversation_feature.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function conversation_feature_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:group:create conversation content'
  $permissions['node:group:create conversation content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:group:delete any conversation content'
  $permissions['node:group:delete any conversation content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:group:delete own conversation content'
  $permissions['node:group:delete own conversation content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:group:update any conversation content'
  $permissions['node:group:update any conversation content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:group:update field_ko_file field'
  $permissions['node:group:update field_ko_file field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:group:update own conversation content'
  $permissions['node:group:update own conversation content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:group:view field_ko_file field'
  $permissions['node:group:view field_ko_file field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:private_group:create conversation content'
  $permissions['node:private_group:create conversation content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:private_group:delete any conversation content'
  $permissions['node:private_group:delete any conversation content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:private_group:delete own conversation content'
  $permissions['node:private_group:delete own conversation content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:private_group:update any conversation content'
  $permissions['node:private_group:update any conversation content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:private_group:update field_ko_file field'
  $permissions['node:private_group:update field_ko_file field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:private_group:update own conversation content'
  $permissions['node:private_group:update own conversation content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:private_group:view field_ko_file field'
  $permissions['node:private_group:view field_ko_file field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  return $permissions;
}
