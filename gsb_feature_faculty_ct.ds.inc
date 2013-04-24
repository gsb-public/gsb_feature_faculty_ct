<?php
/**
 * @file
 * gsb_feature_faculty_ct.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function gsb_feature_faculty_ct_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|faculty|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'faculty';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_file_single_public' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Download CV',
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_first_name' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'span',
          'ow-cl' => 'name-first',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_last_name' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'span',
          'ow-cl' => 'name-last',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_link_blog' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'lb' => 'Visit',
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_link_website' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'lb' => 'Visit',
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_middle_name' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'span',
          'ow-cl' => 'name-middle',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|faculty|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|faculty|people_fpp';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'faculty';
  $ds_fieldsetting->view_mode = 'people_fpp';
  $ds_fieldsetting->settings = array(
    'field_academic_area_single' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'of',
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'span',
          'ow-cl' => 'person-area',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_first_name' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'span',
          'ow-cl' => 'name-first',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_last_name' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'span',
          'ow-cl' => 'name-last',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_middle_name' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'span',
          'ow-cl' => 'name-middle',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_title_position_unlimited' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'span',
          'ow-cl' => 'person-title',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|faculty|people_fpp'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|faculty|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'faculty';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'field_academic_area_single' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'person-area',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_first_name' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'span',
          'ow-cl' => 'name-first',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_last_name' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'span',
          'ow-cl' => 'name-last',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_middle_name' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'span',
          'ow-cl' => 'name-middle',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_title_position_unlimited' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'person-title',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|faculty|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function gsb_feature_faculty_ct_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|faculty|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'faculty';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_image_single_public',
        1 => 'field_phone',
        2 => 'field_email',
        3 => 'field_twitter_search',
        4 => 'field_facebook',
        5 => 'field_link_website',
        6 => 'field_link_blog',
        7 => 'field_file_single_public',
        8 => 'field_link_google_scholar',
        9 => 'group_tags_wrapper',
        10 => 'field_academic_area_single',
        14 => 'field_academic_area_unlimited',
        15 => 'field_centers_research_programs',
        18 => 'field_program',
      ),
      'right' => array(
        11 => 'group_wrapper_name',
        12 => 'field_research_statement',
        13 => 'field_first_name',
        16 => 'field_middle_name',
        17 => 'field_research_interests',
        19 => 'field_title_position_unlimited',
        20 => 'field_last_name',
        21 => 'field_rank',
        22 => 'field_salutation',
        23 => 'field_professional_experience',
        24 => 'field_awards_honors',
        25 => 'field_faculty_expert',
        26 => 'field_topics_of_expertise',
        27 => 'field_talks_conferences',
        28 => 'field_affilitations',
        29 => 'field_body',
        30 => 'field_addthis',
      ),
    ),
    'fields' => array(
      'field_image_single_public' => 'left',
      'field_phone' => 'left',
      'field_email' => 'left',
      'field_twitter_search' => 'left',
      'field_facebook' => 'left',
      'field_link_website' => 'left',
      'field_link_blog' => 'left',
      'field_file_single_public' => 'left',
      'field_link_google_scholar' => 'left',
      'group_tags_wrapper' => 'left',
      'field_academic_area_single' => 'left',
      'group_wrapper_name' => 'right',
      'field_research_statement' => 'right',
      'field_first_name' => 'right',
      'field_academic_area_unlimited' => 'left',
      'field_centers_research_programs' => 'left',
      'field_middle_name' => 'right',
      'field_research_interests' => 'right',
      'field_program' => 'left',
      'field_title_position_unlimited' => 'right',
      'field_last_name' => 'right',
      'field_rank' => 'right',
      'field_salutation' => 'right',
      'field_professional_experience' => 'right',
      'field_awards_honors' => 'right',
      'field_faculty_expert' => 'right',
      'field_topics_of_expertise' => 'right',
      'field_talks_conferences' => 'right',
      'field_affilitations' => 'right',
      'field_body' => 'right',
      'field_addthis' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|faculty|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|faculty|people_fpp';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'faculty';
  $ds_layout->view_mode = 'people_fpp';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_wrapper_name',
        1 => 'field_first_name',
        2 => 'field_title_position_unlimited',
        3 => 'field_middle_name',
        4 => 'field_academic_area_single',
        5 => 'field_last_name',
        6 => 'group_wrapper_position',
        7 => 'field_image_single_public',
      ),
    ),
    'fields' => array(
      'group_wrapper_name' => 'ds_content',
      'field_first_name' => 'ds_content',
      'field_title_position_unlimited' => 'ds_content',
      'field_middle_name' => 'ds_content',
      'field_academic_area_single' => 'ds_content',
      'field_last_name' => 'ds_content',
      'group_wrapper_position' => 'ds_content',
      'field_image_single_public' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|faculty|people_fpp'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|faculty|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'faculty';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_image_single_public',
        1 => 'group_wrapper_name',
        2 => 'group_wrapper_position',
        3 => 'field_first_name',
        4 => 'field_title_position_unlimited',
        5 => 'field_middle_name',
        6 => 'field_academic_area_single',
        7 => 'field_last_name',
      ),
    ),
    'fields' => array(
      'field_image_single_public' => 'ds_content',
      'group_wrapper_name' => 'ds_content',
      'group_wrapper_position' => 'ds_content',
      'field_first_name' => 'ds_content',
      'field_title_position_unlimited' => 'ds_content',
      'field_middle_name' => 'ds_content',
      'field_academic_area_single' => 'ds_content',
      'field_last_name' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|faculty|teaser'] = $ds_layout;

  return $export;
}
