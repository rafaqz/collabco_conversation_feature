<?php
/**
 * @file
 * collabco_conversation_feature.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function collabco_conversation_feature_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'conversation_group_block';
  $context->description = 'Shows conversation block on group main pages.';
  $context->tag = 'conversation feature';
  $context->conditions = array(
    'context_og_condition_group_type' => array(
      'values' => array(
        '_any_' => '_any_',
      ),
      'options' => array(
        'node_form' => 1,
      ),
    ),
    'node' => array(
      'values' => array(
        'closed_group' => 'closed_group',
        'group' => 'group',
        'project' => 'project',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-abc4946a7748b03378796dc4d218fc68' => array(
          'module' => 'views',
          'delta' => 'abc4946a7748b03378796dc4d218fc68',
          'region' => 'content_lower',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Shows conversation block on group main pages.');
  t('conversation feature');
  $export['conversation_group_block'] = $context;

  return $export;
}
