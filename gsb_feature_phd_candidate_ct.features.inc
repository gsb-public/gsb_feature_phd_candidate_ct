<?php
/**
 * @file
 * gsb_feature_phd_candidate_ct.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gsb_feature_phd_candidate_ct_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_menu_position_default_menu_positions().
 */
function gsb_feature_phd_candidate_ct_menu_position_default_menu_positions() {
  $items = array(
    'phd_candidate_ct' => array(
      'admin_title' => 'PhD Candidate - CT',
      'enabled' => 1,
      'conditions' => 'a:1:{s:12:"content_type";a:1:{s:12:"content_type";a:1:{s:13:"phd_candidate";s:13:"phd_candidate";}}}',
      'menu_name' => 'section-12481',
      'plid' => 37366,
      'mlid' => 91113,
      'weight' => 0,
      'machine_name' => 'phd_candidate_ct',
    ),
  );
  return $items;
}

/**
 * Implements hook_node_info().
 */
function gsb_feature_phd_candidate_ct_node_info() {
  $items = array(
    'phd_candidate' => array(
      'name' => t('PhD Candidate'),
      'base' => 'node_content',
      'description' => t('Add a PhD Candidate to the list.'),
      'has_title' => '1',
      'title_label' => t('Full Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
