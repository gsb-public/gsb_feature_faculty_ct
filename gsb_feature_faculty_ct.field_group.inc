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
  $field_group->identifier = 'group_about|node|faculty|form';
  $field_group->group_name = 'group_about';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'faculty';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main';
  $field_group->data = array(
    'label' => 'About',
    'weight' => '46',
    'children' => array(
      0 => 'field_body',
      1 => 'field_file_single_public',
      2 => 'field_research_interests',
      3 => 'field_research_statement',
      4 => 'field_teaching_statement',
      5 => 'group_contact_info',
      6 => 'group_personal_information',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_about|node|faculty|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_administration|node|faculty|form';
  $field_group->group_name = 'group_administration';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'faculty';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main';
  $field_group->data = array(
    'label' => 'Administration',
    'weight' => '52',
    'children' => array(
      0 => 'field_academic_area_single',
      1 => 'field_academic_area_unlimited',
      2 => 'field_rank',
      3 => 'field_sunetid',
      4 => 'field_title_position_unlimited',
      5 => 'field_centers_research_programs',
      6 => 'field_tag',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_administration|node|faculty|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_affiliations|node|faculty|form';
  $field_group->group_name = 'group_affiliations';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'faculty';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main';
  $field_group->data = array(
    'label' => 'Affiliations',
    'weight' => '49',
    'children' => array(
      0 => 'field_service_profession_section',
      1 => 'field_greater_univ_aff_unlimited',
      2 => 'field_stanford_gsb_affiliation',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_affiliations|node|faculty|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_books|node|faculty|form';
  $field_group->group_name = 'group_books';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'faculty';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_publications';
  $field_group->data = array(
    'label' => 'Books',
    'weight' => '10',
    'children' => array(
      0 => 'gsb_book_listing_eva_field_form',
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
  $export['group_books|node|faculty|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cases|node|faculty|form';
  $field_group->group_name = 'group_cases';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'faculty';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_publications';
  $field_group->data = array(
    'label' => 'Cases',
    'weight' => '12',
    'children' => array(
      0 => 'gsb_case_listing_eva_field_form',
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
  $export['group_cases|node|faculty|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact_info|node|faculty|form';
  $field_group->group_name = 'group_contact_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'faculty';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_about';
  $field_group->data = array(
    'label' => 'Contact Info',
    'weight' => '64',
    'children' => array(
      0 => 'field_email',
      1 => 'field_link_blog',
      2 => 'field_link_google_scholar',
      3 => 'field_link_website',
      4 => 'field_phone',
      5 => 'field_link_linkedin',
      6 => 'field_link_other_social',
      7 => 'field_link_twitter',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Contact Info',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_contact_info|node|faculty|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_courses_taught|node|faculty|default';
  $field_group->group_name = 'group_courses_taught';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'faculty';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Courses Taught',
    'weight' => '11',
    'children' => array(
      0 => 'field_non_degree_course',
      1 => 'gsb_course_listing_entity_view_1',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Courses Taught',
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
  $export['group_courses_taught|node|faculty|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_experience|node|faculty|form';
  $field_group->group_name = 'group_experience';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'faculty';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main';
  $field_group->data = array(
    'label' => 'Experience',
    'weight' => '47',
    'children' => array(
      0 => 'field_awards_honors',
      1 => 'field_professional_experience',
      2 => 'field_academic_aptmts_unlimited',
      3 => 'field_academic_degrees_unlimited',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_experience|node|faculty|form'] = $field_group;

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
    'weight' => '59',
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
  $field_group->identifier = 'group_main_news|node|faculty|form';
  $field_group->group_name = 'group_main_news';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'faculty';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_manage_news';
  $field_group->data = array(
    'label' => 'Main News',
    'weight' => '65',
    'children' => array(
      0 => 'group_media_mentions',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_main_news|node|faculty|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_publications|node|faculty|form';
  $field_group->group_name = 'group_main_publications';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'faculty';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_manage_publications';
  $field_group->data = array(
    'label' => 'Main Publications',
    'weight' => '8',
    'children' => array(
      0 => 'group_books',
      1 => 'group_cases',
      2 => 'group_publications',
      3 => 'group_working_papers',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_main_publications|node|faculty|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main|node|faculty|form';
  $field_group->group_name = 'group_main';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'faculty';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Main',
    'weight' => '1',
    'children' => array(
      0 => 'group_about',
      1 => 'group_administration',
      2 => 'group_affiliations',
      3 => 'group_experience',
      4 => 'group_manage_news',
      5 => 'group_manage_publications',
      6 => 'group_teaching_and_talks',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_main|node|faculty|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_manage_news|node|faculty|form';
  $field_group->group_name = 'group_manage_news';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'faculty';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main';
  $field_group->data = array(
    'label' => 'Manage News',
    'weight' => '51',
    'children' => array(
      0 => 'group_main_news',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_manage_news|node|faculty|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_manage_publications|node|faculty|form';
  $field_group->group_name = 'group_manage_publications';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'faculty';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main';
  $field_group->data = array(
    'label' => 'Manage Publications',
    'weight' => '50',
    'children' => array(
      0 => 'group_main_publications',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_manage_publications|node|faculty|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media_mentions|node|faculty|form';
  $field_group->group_name = 'group_media_mentions';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'faculty';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_news';
  $field_group->data = array(
    'label' => 'Media Mentions',
    'weight' => '65',
    'children' => array(
      0 => 'gsb_media_mentions_eva_field_form',
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
  $export['group_media_mentions|node|faculty|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_personal_information|node|faculty|form';
  $field_group->group_name = 'group_personal_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'faculty';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_about';
  $field_group->data = array(
    'label' => 'Personal Information',
    'weight' => '63',
    'children' => array(
      0 => 'field_first_name',
      1 => 'field_image_single_public',
      2 => 'field_last_name',
      3 => 'field_middle_name',
      4 => 'field_salutation',
      5 => 'field_suffix_name',
      6 => 'group_leave_information',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Personal Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_personal_information|node|faculty|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_publications|node|faculty|default';
  $field_group->group_name = 'group_publications';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'faculty';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Publications',
    'weight' => '9',
    'children' => array(
      0 => 'gsb_book_listing_entity_view_1',
      1 => 'gsb_publications_listing_publications_listing_entity_view',
      2 => 'gsb_publications_listing_entity_view_1',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Publications',
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
  $export['group_publications|node|faculty|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_publications|node|faculty|form';
  $field_group->group_name = 'group_publications';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'faculty';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_publications';
  $field_group->data = array(
    'label' => 'Publications',
    'weight' => '9',
    'children' => array(
      0 => 'field_featured_publication_ref',
      1 => 'gsb_publications_listing_eva_field_form',
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
  $export['group_publications|node|faculty|form'] = $field_group;

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
    'weight' => '27',
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
  $field_group->identifier = 'group_teaching_and_talks|node|faculty|form';
  $field_group->group_name = 'group_teaching_and_talks';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'faculty';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main';
  $field_group->data = array(
    'label' => 'Teaching & Talks',
    'weight' => '48',
    'children' => array(
      0 => 'field_conf_presentations_section',
      1 => 'field_link_podcast_unlimited',
      2 => 'field_link_unlimited',
      3 => 'field_link_video_unlimited',
      4 => 'field_non_degree_course',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Teaching & Talks',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_teaching_and_talks|node|faculty|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_working_papers|node|faculty|form';
  $field_group->group_name = 'group_working_papers';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'faculty';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_publications';
  $field_group->data = array(
    'label' => 'Working Papers',
    'weight' => '11',
    'children' => array(
      0 => 'gsb_working_paper_listing_eva_field_form',
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
  $export['group_working_papers|node|faculty|form'] = $field_group;

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
    'weight' => '18',
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
    'label' => 'Contact Info',
    'weight' => '2',
    'children' => array(
      0 => 'group_wrapper_contact',
      1 => 'group_wrapper_scholar',
      2 => 'group_wrapper_social',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Contact Info',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
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
  $field_group->identifier = 'group_wrapper_photolabel|node|faculty|default';
  $field_group->group_name = 'group_wrapper_photolabel';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'faculty';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Photo label',
    'weight' => '1',
    'children' => array(
      0 => 'field_rank',
      1 => 'faculty_rank_academic_area',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Photo label',
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
  $export['group_wrapper_photolabel|node|faculty|default'] = $field_group;

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
