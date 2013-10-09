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
    'name' => '270x270',
    'effects' => array(
      6 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 270,
          'height' => 270,
        ),
        'weight' => 1,
      ),
    ),
    'label' => '270x270',
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
  return $items;
}
