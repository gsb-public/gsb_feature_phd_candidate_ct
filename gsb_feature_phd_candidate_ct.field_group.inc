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
    'weight' => '3',
    'children' => array(
      0 => 'field_academic_area_single',
      1 => 'field_description',
      2 => 'field_dissertation',
      3 => 'field_person_fac_ref',
      4 => 'field_phd_research_interests',
      5 => 'field_research_statement',
      6 => 'field_teaching_statement',
      7 => 'field_faculty_advisors',
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
    'weight' => '2',
    'children' => array(
      0 => 'field_email',
      1 => 'field_file_single_public',
      2 => 'field_first_name',
      3 => 'field_image_single_public',
      4 => 'field_last_name',
      5 => 'field_link_google_scholar',
      6 => 'field_link_linkedin',
      7 => 'field_link_website',
      8 => 'field_middle_name',
      9 => 'field_salutation',
      10 => 'field_suffix_name',
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
    'weight' => '8',
    'children' => array(
      0 => 'field_file_job_market_paper',
      1 => 'field_job_market_paper_desc',
      2 => 'field_link_single',
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
    'weight' => '4',
    'children' => array(
      0 => 'group_job_market_paper',
      1 => 'group_publications',
      2 => 'group_work_in_progress',
      3 => 'group_working_papers',
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
    'weight' => '9',
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
    'weight' => '11',
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
    'weight' => '10',
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

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_information|node|phd_candidate|default';
  $field_group->group_name = 'group_wrapper_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'phd_candidate';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Information wrapper',
    'weight' => '3',
    'children' => array(
      0 => 'field_email',
      1 => 'phd_address',
      2 => 'group_wrapper_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Information wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-wrapper-information field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_wrapper_information|node|phd_candidate|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_jobpaper|node|phd_candidate|default';
  $field_group->group_name = 'group_wrapper_jobpaper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'phd_candidate';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Job Market Paper',
    'weight' => '10',
    'children' => array(
      0 => 'field_file_job_market_paper',
      1 => 'field_job_market_paper_desc',
      2 => 'field_link_single',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Job Market Paper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-wrapper-jobpaper field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_wrapper_jobpaper|node|phd_candidate|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_link|node|phd_candidate|default';
  $field_group->group_name = 'group_wrapper_link';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'phd_candidate';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_wrapper_information';
  $field_group->data = array(
    'label' => 'Link wrapper',
    'weight' => '3',
    'children' => array(
      0 => 'field_file_single_public',
      1 => 'field_link_google_scholar',
      2 => 'field_link_linkedin',
      3 => 'field_link_website',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Link wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-wrapper-link field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_wrapper_link|node|phd_candidate|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_name|node|phd_candidate|default';
  $field_group->group_name = 'group_wrapper_name';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'phd_candidate';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Name wrapper',
    'weight' => '4',
    'children' => array(
      0 => 'field_first_name',
      1 => 'field_last_name',
      2 => 'field_middle_name',
      3 => 'field_salutation',
      4 => 'field_suffix_name',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Name wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-wrapper-name field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_wrapper_name|node|phd_candidate|default'] = $field_group;

  return $export;
}
