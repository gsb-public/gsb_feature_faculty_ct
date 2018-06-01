<?php
/**
 * @file
 * gsb_feature_faculty_ct.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gsb_feature_faculty_ct_field_group_info() {
  $field_groups = array();

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
      1 => 'field_email',
      2 => 'field_file_single_public',
      3 => 'field_first_name',
      4 => 'field_image_single_public',
      5 => 'field_last_name',
      6 => 'field_link_blog',
      7 => 'field_link_website',
      8 => 'field_middle_name',
      9 => 'field_phone',
      10 => 'field_research_interests',
      11 => 'field_research_statement',
      12 => 'field_salutation',
      13 => 'field_link_linkedin',
      14 => 'field_link_other_social',
      15 => 'field_link_twitter',
      16 => 'field_suffix_name',
      17 => 'field_teaching_statement',
      18 => 'field_has_twitter_handle',
      19 => 'field_has_blog',
      20 => 'field_twitter_handle',
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
  $field_groups['group_about|node|faculty|form'] = $field_group;

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
      4 => 'field_centers_research_programs',
      5 => 'field_tag',
      6 => 'group_leave_information',
      7 => 'group_other_titles',
      8 => 'group_titles_and_appointments',
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
  $field_groups['group_administration|node|faculty|form'] = $field_group;

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
      1 => 'field_stanford_gsb_affiliation',
      2 => 'field_greater_university_affil',
      3 => 'field_affiliations_help',
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
  $field_groups['group_affiliations|node|faculty|form'] = $field_group;

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
    'weight' => '96',
    'children' => array(
      0 => 'field_books_help',
      1 => 'gsb_book_listing_eva_field_form',
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
  $field_groups['group_books|node|faculty|form'] = $field_group;

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
    'weight' => '98',
    'children' => array(
      0 => 'gsb_case_listing_eva_field_form',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Cases',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '<p><strong>Cases are added to the site by the Case Writing office. Contact them to edit or add a new case to your profile.</strong></p>',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_cases|node|faculty|form'] = $field_group;

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
    'label' => 'Teaching',
    'weight' => '17',
    'children' => array(
      0 => 'field_non_degree_course',
      1 => 'gsb_course_listing_entity_view_1',
      2 => 'gsb_program_faculty_courses',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Teaching',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-courses-taught field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_courses_taught|node|faculty|default'] = $field_group;

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
      4 => 'field_order_help_text',
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
  $field_groups['group_experience|node|faculty|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_help|node|faculty|form';
  $field_group->group_name = 'group_help';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'faculty';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main';
  $field_group->data = array(
    'label' => 'Help',
    'weight' => '53',
    'children' => array(
      0 => 'field_deleting_items',
      1 => 'field_formatting_help',
      2 => 'field_introduction',
      3 => 'field_required_fields',
      4 => 'field_saving_your_changes',
      5 => 'field_update_your_photo',
      6 => 'field_upload_pdfs',
      7 => 'field_who_to_contact',
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
  $field_groups['group_help|node|faculty|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_insights_by_stanford|node|faculty|form';
  $field_group->group_name = 'group_insights_by_stanford';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'faculty';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_news';
  $field_group->data = array(
    'label' => 'Insights by Stanford Business',
    'weight' => '66',
    'children' => array(
      0 => 'field_insights_tab_help',
      1 => 'gsb_insights_stanford_business_eva_field_form',
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
  $field_groups['group_insights_by_stanford|node|faculty|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_leave_information|node|faculty|form';
  $field_group->group_name = 'group_leave_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'faculty';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_administration';
  $field_group->data = array(
    'label' => 'Leave Information',
    'weight' => '60',
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
  $field_groups['group_leave_information|node|faculty|form'] = $field_group;

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
      0 => 'group_insights_by_stanford',
      1 => 'group_media_mentions',
      2 => 'group_school_news',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $field_groups['group_main_news|node|faculty|form'] = $field_group;

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
    'weight' => '97',
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
  $field_groups['group_main_publications|node|faculty|form'] = $field_group;

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
    'weight' => '2',
    'children' => array(
      0 => 'group_about',
      1 => 'group_administration',
      2 => 'group_affiliations',
      3 => 'group_experience',
      4 => 'group_help',
      5 => 'group_manage_news',
      6 => 'group_manage_publications',
      7 => 'group_teaching_and_talks',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $field_groups['group_main|node|faculty|form'] = $field_group;

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
    'label' => 'News',
    'weight' => '51',
    'children' => array(
      0 => 'group_main_news',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'News',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_manage_news|node|faculty|form'] = $field_group;

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
    'label' => 'Publications',
    'weight' => '50',
    'children' => array(
      0 => 'field_publications_tab_help',
      1 => 'group_main_publications',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Publications',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_manage_publications|node|faculty|form'] = $field_group;

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
    'label' => 'Media Items',
    'weight' => '65',
    'children' => array(
      0 => 'field_medias_item_tab_help',
      1 => 'gsb_media_mentions_eva_field_form',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Media Items',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_media_mentions|node|faculty|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_other_titles|node|faculty|form';
  $field_group->group_name = 'group_other_titles';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'faculty';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_administration';
  $field_group->data = array(
    'label' => 'Other Titles',
    'weight' => '66',
    'children' => array(
      0 => 'field_faculty_director_positions',
      1 => 'field_other_titles',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Other Titles',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-other-titles field-group-fieldset',
        'description' => 'Titles entered into these fields display only on the faculty member\'s profile.',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_other_titles|node|faculty|form'] = $field_group;

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
    'weight' => '15',
    'children' => array(
      0 => 'gsb_book_listing_entity_view_1',
      1 => 'gsb_publications_listing_publications_listing_entity_view',
      2 => 'gsb_publications_listing_publications_book_chapter_listing_entity_view',
      3 => 'gsb_publications_listing_publications_other_listing_entity_view',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Publications',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-publications field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_publications|node|faculty|default'] = $field_group;

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
    'label' => 'Journal Articles, Book Chapters, Others',
    'weight' => '95',
    'children' => array(
      0 => 'field_publications_help',
      1 => 'gsb_publications_listing_eva_field_form',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Journal Articles, Book Chapters, Others',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_publications|node|faculty|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_school_news|node|faculty|form';
  $field_group->group_name = 'group_school_news';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'faculty';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main_news';
  $field_group->data = array(
    'label' => 'School News',
    'weight' => '67',
    'children' => array(
      0 => 'field_school_news_tab_help',
      1 => 'gsb_school_news_entity_field_form',
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
  $field_groups['group_school_news|node|faculty|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_subname_wrapper|node|faculty|people_fpp';
  $field_group->group_name = 'group_subname_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'faculty';
  $field_group->mode = 'people_fpp';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'SubName wrapper',
    'weight' => '86',
    'children' => array(
      0 => 'field_link_blog',
      1 => 'field_twitter_handle',
      2 => 'group_wrapper_position',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'SubName wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'person-subname',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_subname_wrapper|node|faculty|people_fpp'] = $field_group;

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
    'weight' => '34',
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
  $field_groups['group_tags_wrapper|node|faculty|default'] = $field_group;

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
      1 => 'field_non_degree_course',
      2 => 'field_teaching_materials',
      3 => 'field_teaching_talks_help',
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
  $field_groups['group_teaching_and_talks|node|faculty|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_titles_and_appointments|node|faculty|form';
  $field_group->group_name = 'group_titles_and_appointments';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'faculty';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_administration';
  $field_group->data = array(
    'label' => 'Title & Appointments',
    'weight' => '65',
    'children' => array(
      0 => 'field_joint_appointment',
      1 => 'field_sad',
      2 => 'field_endowed_title_appointment',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Title & Appointments',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-titles-and-appointments field-group-fieldset',
        'description' => 'Titles entered in these fields display throughout the site.',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_titles_and_appointments|node|faculty|form'] = $field_group;

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
    'weight' => '97',
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
  $field_groups['group_working_papers|node|faculty|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_aat|node|faculty|default';
  $field_group->group_name = 'group_wrapper_aat';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'faculty';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Additional Administrative Titles',
    'weight' => '11',
    'children' => array(
      0 => 'field_faculty_director_positions',
      1 => 'gsb_program_faculty_director_titles',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Additional Administrative Titles',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-wrapper-aat field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_wrapper_aat|node|faculty|default'] = $field_group;

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
    'weight' => '14',
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
        'id' => '',
        'classes' => 'group-wrapper-academic field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_wrapper_academic|node|faculty|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_affiliation_commas|field_collection_item|field_greater_university_affil|default';
  $field_group->group_name = 'group_wrapper_affiliation_commas';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_greater_university_affil';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Affiliation commas wrapper',
    'weight' => '0',
    'children' => array(
      0 => 'field_role',
      1 => 'field_years',
      2 => 'field_link_single',
    ),
    'format_type' => 'gsb_field_formatter_group_comma_separator',
    'format_settings' => array(
      'label' => 'Affiliation commas wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-wrapper-affiliation-commas field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_wrapper_affiliation_commas|field_collection_item|field_greater_university_affil|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_affiliation_commas|field_collection_item|field_stanford_gsb_affiliation|default';
  $field_group->group_name = 'group_wrapper_affiliation_commas';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_stanford_gsb_affiliation';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Affiliation commas wrapper',
    'weight' => '0',
    'children' => array(
      0 => 'field_role',
      1 => 'field_years',
      2 => 'field_link_single',
    ),
    'format_type' => 'gsb_field_formatter_group_comma_separator',
    'format_settings' => array(
      'label' => 'Affiliation commas wrapper',
      'instance_settings' => array(
        'item_count' => '0',
        'classes' => 'group-wrapper-affiliation-commas field-group-div',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_wrapper_affiliation_commas|field_collection_item|field_stanford_gsb_affiliation|default'] = $field_group;

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
    'weight' => '21',
    'children' => array(
      0 => 'field_stanford_gsb_affiliation',
      1 => 'field_greater_university_affil',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Stanford University Affiliations',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-wrapper-affiliation field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_wrapper_affiliation|node|faculty|default'] = $field_group;

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
        'id' => '',
        'classes' => 'group-wrapper-contact field-group-div field-group-format',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_wrapper_contact|node|faculty|default'] = $field_group;

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
        'classes' => 'group-wrapper-information field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_wrapper_information|node|faculty|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_info|node|faculty|faculty_leadership';
  $field_group->group_name = 'group_wrapper_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'faculty';
  $field_group->mode = 'faculty_leadership';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Info wrapper',
    'weight' => '1',
    'children' => array(
      0 => 'field_joint_appointment',
      1 => 'field_title_appointment',
      2 => 'gsb_program_faculty_director_titles',
      3 => 'senior_associate_dean_title',
      4 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Info wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-wrapper-info field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_wrapper_info|node|faculty|faculty_leadership'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_info|node|faculty|faculty_one';
  $field_group->group_name = 'group_wrapper_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'faculty';
  $field_group->mode = 'faculty_one';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Info wrapper',
    'weight' => '2',
    'children' => array(
      0 => 'field_joint_appointment',
      1 => 'field_title_appointment',
      2 => 'senior_associate_dean_title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Info wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-wrapper-info field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_wrapper_info|node|faculty|faculty_one'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_info|node|faculty|faculty_two';
  $field_group->group_name = 'group_wrapper_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'faculty';
  $field_group->mode = 'faculty_two';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Info wrapper',
    'weight' => '1',
    'children' => array(
      0 => 'field_joint_appointment',
      1 => 'field_title_appointment',
      2 => 'senior_associate_dean_title',
      3 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Info wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-wrapper-info field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_wrapper_info|node|faculty|faculty_two'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_info|node|faculty|guest_speakers_advisors';
  $field_group->group_name = 'group_wrapper_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'faculty';
  $field_group->mode = 'guest_speakers_advisors';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Info wrapper',
    'weight' => '1',
    'children' => array(
      0 => 'field_joint_appointment',
      1 => 'field_title_appointment',
      2 => 'senior_associate_dean_title',
      3 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Info wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-wrapper-info field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_wrapper_info|node|faculty|guest_speakers_advisors'] = $field_group;

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
  $field_groups['group_wrapper_name|node|faculty|default'] = $field_group;

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
  $field_groups['group_wrapper_name|node|faculty|people_fpp'] = $field_group;

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
        'id' => '',
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
  $field_groups['group_wrapper_name|node|faculty|teaser'] = $field_group;

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
        'id' => '',
        'classes' => 'group-wrapper-photolabel field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_wrapper_photolabel|node|faculty|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_position|node|faculty|people_fpp';
  $field_group->group_name = 'group_wrapper_position';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'faculty';
  $field_group->mode = 'people_fpp';
  $field_group->parent_name = 'group_subname_wrapper';
  $field_group->data = array(
    'label' => 'Position wrapper',
    'weight' => '16',
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
  $field_groups['group_wrapper_position|node|faculty|people_fpp'] = $field_group;

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
  $field_groups['group_wrapper_position|node|faculty|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_rank_and_area|node|faculty|faculty_teaching_programs';
  $field_group->group_name = 'group_wrapper_rank_and_area';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'faculty';
  $field_group->mode = 'faculty_teaching_programs';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Rank and Area',
    'weight' => '2',
    'children' => array(
      0 => 'field_academic_area_single',
      1 => 'field_rank',
    ),
    'format_type' => 'gsb_field_formatter_group_comma_separator',
    'format_settings' => array(
      'label' => 'Rank and Area',
      'instance_settings' => array(
        'item_count' => '0',
        'classes' => 'group-wrapper-rank-and-area field-group-gsb_field_formatter_group_comma_separator',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_wrapper_rank_and_area|node|faculty|faculty_teaching_programs'] = $field_group;

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
    'weight' => '13',
    'children' => array(
      0 => 'field_research_interests',
      1 => 'field_research_statement',
      2 => 'field_teaching_statement',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Research wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-wrapper-research field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_wrapper_research|node|faculty|default'] = $field_group;

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
      1 => 'field_link_website',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Scholar wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-wrapper-scholar field-group-div field-group-format',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_wrapper_scholar|node|faculty|default'] = $field_group;

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
      4 => 'field_twitter_handle',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Social wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-wrapper-social field-group-div field-group-format',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_wrapper_social|node|faculty|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('About');
  t('Academic wrapper');
  t('Additional Administrative Titles');
  t('Administration');
  t('Affiliation commas wrapper');
  t('Affiliations');
  t('Books');
  t('Cases');
  t('Contact Info');
  t('Contact wrapper');
  t('Experience');
  t('Help');
  t('Info wrapper');
  t('Insights by Stanford Business');
  t('Journal Articles, Book Chapters, Others');
  t('Leave Information');
  t('Main');
  t('Main News');
  t('Main Publications');
  t('Media Items');
  t('Name wrapper');
  t('News');
  t('Other Titles');
  t('Photo label');
  t('Position wrapper');
  t('Publications');
  t('Rank and Area');
  t('Research wrapper');
  t('Scholar wrapper');
  t('School News');
  t('Social wrapper');
  t('Stanford University Affiliations');
  t('SubName wrapper');
  t('Tags wrapper');
  t('Teaching');
  t('Teaching & Talks');
  t('Title & Appointments');
  t('Working Papers');

  return $field_groups;
}
