<?php
/**
 * @file
 * gsb_feature_faculty_ct.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function gsb_feature_faculty_ct_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_node_faculty';
  $strongarm->value = '1';
  $export['auto_entitylabel_node_faculty'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_pattern_node_faculty';
  $strongarm->value = '[node:field-first-name] [node:field-middle-name] [node:field-last-name]';
  $export['auto_entitylabel_pattern_node_faculty'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_php_node_faculty';
  $strongarm->value = 0;
  $export['auto_entitylabel_php_node_faculty'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__faculty';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'ical' => array(
        'custom_settings' => TRUE,
      ),
      'tiny' => array(
        'custom_settings' => TRUE,
      ),
      'featured' => array(
        'custom_settings' => TRUE,
      ),
      'people_fpp' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'megamenu' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'business_insight' => array(
        'custom_settings' => FALSE,
      ),
      'event_listing' => array(
        'custom_settings' => FALSE,
      ),
      'media_contact' => array(
        'custom_settings' => FALSE,
      ),
      'event_upcoming' => array(
        'custom_settings' => FALSE,
      ),
      'phd_job_market_candidate' => array(
        'custom_settings' => FALSE,
      ),
      'teaser_listing' => array(
        'custom_settings' => FALSE,
      ),
      'views_content_pane' => array(
        'custom_settings' => FALSE,
      ),
      'idea_story_latest_stories' => array(
        'custom_settings' => FALSE,
      ),
      'idea_story_related' => array(
        'custom_settings' => FALSE,
      ),
      'idea_story_top_stories' => array(
        'custom_settings' => FALSE,
      ),
      'insight_featured_card' => array(
        'custom_settings' => FALSE,
      ),
      'news_listing' => array(
        'custom_settings' => FALSE,
      ),
      'act_project_by_criteria' => array(
        'custom_settings' => FALSE,
      ),
      'act_project_listing' => array(
        'custom_settings' => FALSE,
      ),
      'alumni_name' => array(
        'custom_settings' => FALSE,
      ),
      'alumni_reunion_agenda_list' => array(
        'custom_settings' => FALSE,
      ),
      'compact' => array(
        'custom_settings' => FALSE,
      ),
      'expanded' => array(
        'custom_settings' => FALSE,
      ),
      'event_contacts' => array(
        'custom_settings' => FALSE,
      ),
      'alumni_featured_content' => array(
        'custom_settings' => FALSE,
      ),
      'main_list' => array(
        'custom_settings' => FALSE,
      ),
      'faculty_leadership' => array(
        'custom_settings' => TRUE,
      ),
      'faculty_one' => array(
        'custom_settings' => TRUE,
      ),
      'faculty_two' => array(
        'custom_settings' => TRUE,
      ),
      'guest_speakers_advisors' => array(
        'custom_settings' => TRUE,
      ),
      'field_program_faculty' => array(
        'custom_settings' => FALSE,
      ),
      'field_program_ctas' => array(
        'custom_settings' => FALSE,
      ),
      'field_program_curriculum' => array(
        'custom_settings' => FALSE,
      ),
      'field_program_curriculum_one' => array(
        'custom_settings' => FALSE,
      ),
      'field_program_curriculum_two' => array(
        'custom_settings' => FALSE,
      ),
      'field_program_director' => array(
        'custom_settings' => FALSE,
      ),
      'field_program_related' => array(
        'custom_settings' => FALSE,
      ),
      'featured_program' => array(
        'custom_settings' => FALSE,
      ),
      'program_director' => array(
        'custom_settings' => FALSE,
      ),
      'program_contact' => array(
        'custom_settings' => FALSE,
      ),
      'faculty_teaching_programs' => array(
        'custom_settings' => TRUE,
      ),
      'field_program_participants_desc' => array(
        'custom_settings' => FALSE,
      ),
      'field_program_participants_intro' => array(
        'custom_settings' => FALSE,
      ),
      'program_explore_other' => array(
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'field_program_who_should_attend' => array(
        'custom_settings' => FALSE,
      ),
      'seed_research_project' => array(
        'custom_settings' => FALSE,
      ),
      'page_featured_programs' => array(
        'custom_settings' => FALSE,
      ),
      'homepage_school_news' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '7',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '6',
        ),
        'workbench_access' => array(
          'weight' => '1',
        ),
        'redirect' => array(
          'weight' => '5',
        ),
        'gsb_book_listing_eva_field_form' => array(
          'weight' => '95',
        ),
        'gsb_case_listing_eva_field_form' => array(
          'weight' => '99',
        ),
        'gsb_publications_listing_eva_field_form' => array(
          'weight' => '93',
        ),
        'gsb_working_paper_listing_eva_field_form' => array(
          'weight' => '99',
        ),
        'gsb_media_mentions_eva_field_form' => array(
          'weight' => '99',
        ),
        'gsb_insights_stanford_business_eva_field_form' => array(
          'weight' => '69',
        ),
        'gsb_school_news_entity_field_form' => array(
          'weight' => '69',
        ),
        'xmlsitemap' => array(
          'weight' => '8',
        ),
      ),
      'display' => array(
        'gsb_case_listing_case_listing_entity_view' => array(
          'default' => array(
            'weight' => '16',
            'visible' => TRUE,
          ),
          'people_fpp' => array(
            'weight' => '64',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'faculty_leadership' => array(
            'weight' => '35',
            'visible' => FALSE,
          ),
          'faculty_one' => array(
            'weight' => '35',
            'visible' => FALSE,
          ),
          'faculty_two' => array(
            'weight' => '35',
            'visible' => FALSE,
          ),
          'guest_speakers_advisors' => array(
            'weight' => '35',
            'visible' => FALSE,
          ),
          'faculty_teaching_programs' => array(
            'weight' => '36',
            'visible' => FALSE,
          ),
        ),
        'gsb_working_paper_listing_case_listing_entity_view' => array(
          'default' => array(
            'weight' => '14',
            'visible' => TRUE,
          ),
          'people_fpp' => array(
            'weight' => '65',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'faculty_leadership' => array(
            'weight' => '33',
            'visible' => FALSE,
          ),
          'faculty_one' => array(
            'weight' => '33',
            'visible' => FALSE,
          ),
          'faculty_two' => array(
            'weight' => '33',
            'visible' => FALSE,
          ),
          'guest_speakers_advisors' => array(
            'weight' => '33',
            'visible' => FALSE,
          ),
          'faculty_teaching_programs' => array(
            'weight' => '33',
            'visible' => FALSE,
          ),
        ),
        'gsb_book_listing_entity_view_1' => array(
          'default' => array(
            'weight' => '19',
            'visible' => TRUE,
          ),
          'people_fpp' => array(
            'weight' => '60',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'faculty_leadership' => array(
            'weight' => '30',
            'visible' => FALSE,
          ),
          'faculty_one' => array(
            'weight' => '30',
            'visible' => FALSE,
          ),
          'faculty_two' => array(
            'weight' => '30',
            'visible' => FALSE,
          ),
          'guest_speakers_advisors' => array(
            'weight' => '30',
            'visible' => FALSE,
          ),
          'faculty_teaching_programs' => array(
            'weight' => '30',
            'visible' => FALSE,
          ),
        ),
        'gsb_course_listing_entity_view_1' => array(
          'default' => array(
            'weight' => '14',
            'visible' => TRUE,
          ),
          'people_fpp' => array(
            'weight' => '61',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'faculty_leadership' => array(
            'weight' => '23',
            'visible' => FALSE,
          ),
          'faculty_one' => array(
            'weight' => '23',
            'visible' => FALSE,
          ),
          'faculty_two' => array(
            'weight' => '23',
            'visible' => FALSE,
          ),
          'guest_speakers_advisors' => array(
            'weight' => '23',
            'visible' => FALSE,
          ),
          'faculty_teaching_programs' => array(
            'weight' => '25',
            'visible' => FALSE,
          ),
        ),
        'gsb_publications_listing_publications_listing_entity_view' => array(
          'default' => array(
            'weight' => '18',
            'visible' => TRUE,
          ),
          'people_fpp' => array(
            'weight' => '63',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'faculty_leadership' => array(
            'weight' => '29',
            'visible' => FALSE,
          ),
          'faculty_one' => array(
            'weight' => '29',
            'visible' => FALSE,
          ),
          'faculty_two' => array(
            'weight' => '29',
            'visible' => FALSE,
          ),
          'guest_speakers_advisors' => array(
            'weight' => '29',
            'visible' => FALSE,
          ),
          'faculty_teaching_programs' => array(
            'weight' => '29',
            'visible' => FALSE,
          ),
        ),
        'gsb_publications_listing_eva_field_form' => array(
          'default' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'faculty_leadership' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'faculty_one' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'faculty_two' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'guest_speakers_advisors' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'faculty_teaching_programs' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
        ),
        'gsb_media_mentions_media_mention_listing_entity_view' => array(
          'default' => array(
            'weight' => '21',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'people_fpp' => array(
            'weight' => '58',
            'visible' => FALSE,
          ),
          'faculty_leadership' => array(
            'weight' => '44',
            'visible' => FALSE,
          ),
          'faculty_one' => array(
            'weight' => '44',
            'visible' => FALSE,
          ),
          'faculty_two' => array(
            'weight' => '44',
            'visible' => FALSE,
          ),
          'guest_speakers_advisors' => array(
            'weight' => '44',
            'visible' => FALSE,
          ),
          'faculty_teaching_programs' => array(
            'weight' => '44',
            'visible' => FALSE,
          ),
        ),
        'gsb_publications_listing_publications_book_chapter_listing_entity_view' => array(
          'teaser' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'people_fpp' => array(
            'weight' => '67',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '20',
            'visible' => TRUE,
          ),
          'faculty_leadership' => array(
            'weight' => '32',
            'visible' => FALSE,
          ),
          'faculty_one' => array(
            'weight' => '32',
            'visible' => FALSE,
          ),
          'faculty_two' => array(
            'weight' => '32',
            'visible' => FALSE,
          ),
          'guest_speakers_advisors' => array(
            'weight' => '32',
            'visible' => FALSE,
          ),
          'faculty_teaching_programs' => array(
            'weight' => '32',
            'visible' => FALSE,
          ),
        ),
        'gsb_publications_listing_publications_other_listing_entity_view' => array(
          'teaser' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'people_fpp' => array(
            'weight' => '66',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '21',
            'visible' => TRUE,
          ),
          'faculty_leadership' => array(
            'weight' => '34',
            'visible' => FALSE,
          ),
          'faculty_one' => array(
            'weight' => '34',
            'visible' => FALSE,
          ),
          'faculty_two' => array(
            'weight' => '34',
            'visible' => FALSE,
          ),
          'guest_speakers_advisors' => array(
            'weight' => '34',
            'visible' => FALSE,
          ),
          'faculty_teaching_programs' => array(
            'weight' => '34',
            'visible' => FALSE,
          ),
        ),
        'gsb_school_news_entity_view_1' => array(
          'default' => array(
            'weight' => '23',
            'visible' => TRUE,
          ),
          'people_fpp' => array(
            'weight' => '62',
            'visible' => FALSE,
          ),
          'faculty_leadership' => array(
            'weight' => '46',
            'visible' => FALSE,
          ),
          'faculty_one' => array(
            'weight' => '46',
            'visible' => FALSE,
          ),
          'faculty_two' => array(
            'weight' => '46',
            'visible' => FALSE,
          ),
          'guest_speakers_advisors' => array(
            'weight' => '46',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'faculty_teaching_programs' => array(
            'weight' => '46',
            'visible' => FALSE,
          ),
        ),
        'gsb_insights_stanford_business_entity_view_1' => array(
          'default' => array(
            'weight' => '22',
            'visible' => TRUE,
          ),
          'people_fpp' => array(
            'weight' => '59',
            'visible' => FALSE,
          ),
          'faculty_leadership' => array(
            'weight' => '45',
            'visible' => FALSE,
          ),
          'faculty_one' => array(
            'weight' => '45',
            'visible' => FALSE,
          ),
          'faculty_two' => array(
            'weight' => '45',
            'visible' => FALSE,
          ),
          'guest_speakers_advisors' => array(
            'weight' => '45',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'faculty_teaching_programs' => array(
            'weight' => '45',
            'visible' => FALSE,
          ),
        ),
        'gsb_program_faculty_courses' => array(
          'default' => array(
            'weight' => '15',
            'visible' => TRUE,
          ),
          'faculty_leadership' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'faculty_teaching_programs' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
          'people_fpp' => array(
            'weight' => '29',
            'visible' => FALSE,
          ),
          'faculty_one' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'faculty_two' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'guest_speakers_advisors' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
        ),
        'gsb_program_faculty_director_titles' => array(
          'default' => array(
            'weight' => '15',
            'visible' => TRUE,
          ),
          'faculty_leadership' => array(
            'weight' => '6',
            'visible' => TRUE,
          ),
          'faculty_teaching_programs' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'people_fpp' => array(
            'weight' => '28',
            'visible' => FALSE,
          ),
          'faculty_one' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'faculty_two' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'guest_speakers_advisors' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__faculty'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_faculty';
  $strongarm->value = array();
  $export['menu_options_faculty'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_faculty';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_faculty'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_faculty';
  $strongarm->value = array(
    0 => 'moderation',
    1 => 'revision',
  );
  $export['node_options_faculty'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_faculty';
  $strongarm->value = '0';
  $export['node_preview_faculty'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_faculty';
  $strongarm->value = 0;
  $export['node_submitted_faculty'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_faculty_pattern';
  $strongarm->value = 'faculty-research/faculty/[node:title]';
  $export['pathauto_node_faculty_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_access_node_type_faculty';
  $strongarm->value = 0;
  $export['workbench_access_node_type_faculty'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_moderation_default_state_faculty';
  $strongarm->value = 'draft';
  $export['workbench_moderation_default_state_faculty'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_node_faculty';
  $strongarm->value = array(
    'status' => '1',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_node_faculty'] = $strongarm;

  return $export;
}
