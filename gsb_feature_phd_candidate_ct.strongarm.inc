<?php
/**
 * @file
 * gsb_feature_phd_candidate_ct.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function gsb_feature_phd_candidate_ct_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_node_phd_candidate';
  $strongarm->value = '1';
  $export['auto_entitylabel_node_phd_candidate'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_pattern_node_phd_candidate';
  $strongarm->value = '[node:field_salutation] [node:field_first_name] [node:field_middle_name] [node:field_last_name]';
  $export['auto_entitylabel_pattern_node_phd_candidate'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_php_node_phd_candidate';
  $strongarm->value = 0;
  $export['auto_entitylabel_php_node_phd_candidate'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__phd_candidate';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '25',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '24',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__phd_candidate'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_phd_candidate';
  $strongarm->value = array();
  $export['menu_options_phd_candidate'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_phd_candidate';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_phd_candidate'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_phd_candidate';
  $strongarm->value = array(
    0 => 'moderation',
    1 => 'revision',
  );
  $export['node_options_phd_candidate'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_phd_candidate';
  $strongarm->value = '0';
  $export['node_preview_phd_candidate'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_phd_candidate';
  $strongarm->value = 0;
  $export['node_submitted_phd_candidate'] = $strongarm;

  return $export;
}
