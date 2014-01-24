<?php
/**
 * @file
 * gsb_feature_faculty_ct.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gsb_feature_faculty_ct_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_academic_areas|node|faculty|form';
  $field_group->group_name = 'group_academic_areas';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'faculty';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_academic_information';
  $field_group->data = array(
    'label' => 'Academic Area(s)',
    'weight' => '20',
    'children' => array(
      0 => 'field_academic_area_single',
      1 => 'field_academic_area_unlimited',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_academic_areas|node|faculty|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_academic_information|node|faculty|form';
  $field_group->group_name = 'group_academic_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'faculty';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Academic Information',
    'weight' => '1',
    'children' => array(
      0 => 'field_awards_honors',
      1 => 'field_body',
      2 => 'field_professional_experience',
      3 => 'field_research_interests',
      4 => 'field_research_statement',
      5 => 'field_title_position_unlimited',
      6 => 'field_academic_aptmts_unlimited',
      7 => 'field_academic_degrees_unlimited',
      8 => 'field_link_unlimited',
      9 => 'field_teaching_statement',
      10 => 'field_non_degree_course',
      11 => 'group_academic_areas',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_academic_information|node|faculty|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_leave_information|node|faculty|form';
  $field_group->group_name = 'group_leave_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'faculty';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_personal_information';
  $field_group->data = array(
    'label' => 'Leave Information',
    'weight' => '16',
    'children' => array(
      0 => 'field_leave_status',
      1 => 'field_leave_date',
      2 => 'field_leave_statement',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_leave_information|node|faculty|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_personal_information|node|faculty|form';
  $field_group->group_name = 'group_personal_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'faculty';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Personal Information',
    'weight' => '0',
    'children' => array(
      0 => 'field_email',
      1 => 'field_file_single_public',
      2 => 'field_first_name',
      3 => 'field_image_single_public',
      4 => 'field_last_name',
      5 => 'field_link_blog',
      6 => 'field_link_google_scholar',
      7 => 'field_link_website',
      8 => 'field_middle_name',
      9 => 'field_phone',
      10 => 'field_rank',
      11 => 'field_salutation',
      12 => 'field_sunetid',
      13 => 'field_link_linkedin',
      14 => 'field_link_other_social',
      15 => 'field_link_twitter',
      16 => 'field_suffix_name',
      17 => 'title',
      18 => 'group_leave_information',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_personal_information|node|faculty|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_professional_information|node|faculty|form';
  $field_group->group_name = 'group_professional_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'faculty';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Professional Information',
    'weight' => '2',
    'children' => array(
      0 => 'field_conf_presentations_section',
      1 => 'field_service_profession_section',
      2 => 'field_link_podcast_unlimited',
      3 => 'field_link_video_unlimited',
      4 => 'group_stanford_gsb_affiliations',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_professional_information|node|faculty|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_stanford_gsb_affiliations|node|faculty|form';
  $field_group->group_name = 'group_stanford_gsb_affiliations';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'faculty';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_professional_information';
  $field_group->data = array(
    'label' => 'Stanford GSB Affiliations',
    'weight' => '28',
    'children' => array(
      0 => 'field_greater_univ_aff_unlimited',
      1 => 'field_stanford_gsb_affiliation',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_stanford_gsb_affiliations|node|faculty|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tags_wrapper|node|faculty|default';
  $field_group->group_name = 'group_tags_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'faculty';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tags wrapper',
    'weight' => '25',
    'children' => array(
      0 => 'field_academic_area_unlimited',
    ),
    'format_type' => 'gsb_field_formatter_group_comma_separator',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'show_label' => 1,
        'label_element' => 'h3',
        'classes' => '',
      ),
    ),
  );
  $export['group_tags_wrapper|node|faculty|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_academic|node|faculty|default';
  $field_group->group_name = 'group_wrapper_academic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'faculty';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Academic wrapper',
    'weight' => '8',
    'children' => array(
      0 => 'field_awards_honors',
      1 => 'field_body',
      2 => 'field_professional_experience',
      3 => 'field_academic_aptmts_unlimited',
      4 => 'field_academic_degrees_unlimited',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Academic wrapper',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_wrapper_academic|node|faculty|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_affiliation|node|faculty|default';
  $field_group->group_name = 'group_wrapper_affiliation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'faculty';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Stanford University Affiliations',
    'weight' => '15',
    'children' => array(
      0 => 'field_greater_univ_aff_unlimited',
      1 => 'field_stanford_gsb_affiliation',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Stanford University Affiliations',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_wrapper_affiliation|node|faculty|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_contact|node|faculty|default';
  $field_group->group_name = 'group_wrapper_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'faculty';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_wrapper_information';
  $field_group->data = array(
    'label' => 'Contact wrapper',
    'weight' => '53',
    'children' => array(
      0 => 'field_email',
      1 => 'field_phone',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Contact wrapper',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_wrapper_contact|node|faculty|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_information|node|faculty|default';
  $field_group->group_name = 'group_wrapper_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'faculty';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Information wrapper',
    'weight' => '2',
    'children' => array(
      0 => 'group_wrapper_contact',
      1 => 'group_wrapper_scholar',
      2 => 'group_wrapper_social',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Information wrapper',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_wrapper_information|node|faculty|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_name|node|faculty|default';
  $field_group->group_name = 'group_wrapper_name';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'faculty';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Name wrapper',
    'weight' => '3',
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
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_wrapper_name|node|faculty|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_name|node|faculty|people_fpp';
  $field_group->group_name = 'group_wrapper_name';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'faculty';
  $field_group->mode = 'people_fpp';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Name wrapper',
    'weight' => '1',
    'children' => array(
      0 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Name wrapper',
      'instance_settings' => array(
        'classes' => 'person-name',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_wrapper_name|node|faculty|people_fpp'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_name|node|faculty|teaser';
  $field_group->group_name = 'group_wrapper_name';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'faculty';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Name wrapper',
    'weight' => '1',
    'children' => array(
      0 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Name wrapper',
      'instance_settings' => array(
        'classes' => 'person-name',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_wrapper_name|node|faculty|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_position|node|faculty|people_fpp';
  $field_group->group_name = 'group_wrapper_position';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'faculty';
  $field_group->mode = 'people_fpp';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Position wrapper',
    'weight' => '2',
    'children' => array(
      0 => 'field_academic_area_single',
      1 => 'field_rank',
    ),
    'format_type' => 'gsb_field_formatter_group_comma_separator',
    'format_settings' => array(
      'label' => 'Position wrapper',
      'instance_settings' => array(
        'classes' => 'person-position',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_wrapper_position|node|faculty|people_fpp'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_position|node|faculty|teaser';
  $field_group->group_name = 'group_wrapper_position';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'faculty';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Position wrapper',
    'weight' => '10',
    'children' => array(
      0 => 'field_title_position_unlimited',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Position wrapper',
      'instance_settings' => array(
        'classes' => 'person-position',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_wrapper_position|node|faculty|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_research|node|faculty|default';
  $field_group->group_name = 'group_wrapper_research';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'faculty';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Research wrapper',
    'weight' => '7',
    'children' => array(
      0 => 'field_research_interests',
      1 => 'field_research_statement',
      2 => 'field_teaching_statement',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Research wrapper',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_wrapper_research|node|faculty|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_scholar|node|faculty|default';
  $field_group->group_name = 'group_wrapper_scholar';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'faculty';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_wrapper_information';
  $field_group->data = array(
    'label' => 'Scholar wrapper',
    'weight' => '56',
    'children' => array(
      0 => 'field_file_single_public',
      1 => 'field_link_google_scholar',
      2 => 'field_link_website',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Scholar wrapper',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_wrapper_scholar|node|faculty|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_social|node|faculty|default';
  $field_group->group_name = 'group_wrapper_social';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'faculty';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_wrapper_information';
  $field_group->data = array(
    'label' => 'Social wrapper',
    'weight' => '60',
    'children' => array(
      0 => 'field_link_blog',
      1 => 'field_link_linkedin',
      2 => 'field_link_other_social',
      3 => 'field_link_twitter',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Social wrapper',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_wrapper_social|node|faculty|default'] = $field_group;

  return $export;
}
