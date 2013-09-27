<?php
/**
 * @file
 * gsb_feature_phd_candidate_ct.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gsb_feature_phd_candidate_ct_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_academic_information|node|phd_candidate|form';
  $field_group->group_name = 'group_academic_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'phd_candidate';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Academic Information',
    'weight' => '2',
    'children' => array(
      0 => 'field_academic_area_single',
      1 => 'field_dissertation',
      2 => 'field_person_fac_ref',
      3 => 'field_research_statement',
      4 => 'field_teaching_statement',
      5 => 'field_phd_research_interests',
      6 => 'field_description',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Academic Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_academic_information|node|phd_candidate|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_id_card|node|phd_candidate|form';
  $field_group->group_name = 'group_id_card';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'phd_candidate';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Personal Information',
    'weight' => '1',
    'children' => array(
      0 => 'field_email',
      1 => 'field_file_single_public',
      2 => 'field_first_name',
      3 => 'field_image_single_public',
      4 => 'field_last_name',
      5 => 'field_link_google_scholar',
      6 => 'field_middle_name',
      7 => 'field_salutation',
      8 => 'field_link_linkedin',
      9 => 'field_link_website',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Personal Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_id_card|node|phd_candidate|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_job_market_paper|node|phd_candidate|form';
  $field_group->group_name = 'group_job_market_paper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'phd_candidate';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_papers_publications';
  $field_group->data = array(
    'label' => 'Job Market Paper',
    'weight' => '22',
    'children' => array(
      0 => 'field_link_single',
      1 => 'field_file_job_market_paper',
      2 => 'field_job_market_paper_desc',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_job_market_paper|node|phd_candidate|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_papers_publications|node|phd_candidate|form';
  $field_group->group_name = 'group_papers_publications';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'phd_candidate';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Papers & Publications ',
    'weight' => '7',
    'children' => array(
      0 => 'group_job_market_paper',
      1 => 'group_publications',
      2 => 'group_working_papers',
      3 => 'group_work_in_progress',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'label' => 'Papers & Publications ',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_papers_publications|node|phd_candidate|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_publications|node|phd_candidate|form';
  $field_group->group_name = 'group_publications';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'phd_candidate';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_papers_publications';
  $field_group->data = array(
    'label' => 'Publications',
    'weight' => '24',
    'children' => array(
      0 => 'field_publications',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_publications|node|phd_candidate|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_work_in_progress|node|phd_candidate|form';
  $field_group->group_name = 'group_work_in_progress';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'phd_candidate';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_papers_publications';
  $field_group->data = array(
    'label' => 'Work in Progress',
    'weight' => '26',
    'children' => array(
      0 => 'field_work_in_progress',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_work_in_progress|node|phd_candidate|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_working_papers|node|phd_candidate|form';
  $field_group->group_name = 'group_working_papers';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'phd_candidate';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_papers_publications';
  $field_group->data = array(
    'label' => 'Working Papers',
    'weight' => '25',
    'children' => array(
      0 => 'field_working_papers',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_working_papers|node|phd_candidate|form'] = $field_group;

  return $export;
}