<?php
/**
 * @file
 * collabco_conversation_feature.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function collabco_conversation_feature_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-join_the_conversation-block'] = array(
    'cache' => -1,
    'css_class' => 'iin-join-conversation-block',
    'custom' => 0,
    'delta' => 'join_the_conversation-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'openhub' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'openhub',
        'weight' => -29,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
