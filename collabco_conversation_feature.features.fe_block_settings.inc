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

  return $export;
}
