<?php
/**
 * @file
 * gsb_feature_phd_candidate_ct.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gsb_feature_phd_candidate_ct_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
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
  return $items;
}
