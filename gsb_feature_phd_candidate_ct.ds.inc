<?php
/**
 * @file
 * gsb_feature_phd_candidate_ct.ds.inc
 */

/**
 * Implements hook_ds_view_modes_info().
 */
function gsb_feature_phd_candidate_ct_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'phd_job_market_candidate';
  $ds_view_mode->label = 'PhD Job Market Candidate';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['phd_job_market_candidate'] = $ds_view_mode;

  return $export;
}
