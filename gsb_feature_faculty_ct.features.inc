<?php
/**
 * @file
 * gsb_feature_faculty_ct.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gsb_feature_faculty_ct_ctools_plugin_api($module = NULL, $api = NULL) {
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
 * Implements hook_image_default_styles().
 */
function gsb_feature_faculty_ct_image_default_styles() {
  $styles = array();

  // Exported image style: 270x270.
  $styles['270x270'] = array(
    'label' => '270x270',
    'effects' => array(
      2 => array(
        'name' => 'tinypng',
        'data' => array(),
        'weight' => -10,
      ),
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 270,
          'height' => 270,
        ),
        'weight' => -9,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function gsb_feature_faculty_ct_node_info() {
  $items = array(
    'faculty' => array(
      'name' => t('Faculty'),
      'base' => 'node_content',
      'description' => t('Add a Faculty Member.'),
      'has_title' => '1',
      'title_label' => t('Full Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
