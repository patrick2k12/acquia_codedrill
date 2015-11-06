<?php
/**
 * @file
 * codedrill_slider.features.inc
 */

/**
 * Implements hook_views_api().
 */
function codedrill_slider_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function codedrill_slider_image_default_styles() {
  $styles = array();

  // Exported image style: slider_style.
  $styles['slider_style'] = array(
    'label' => 'slider_style',
    'effects' => array(),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function codedrill_slider_node_info() {
  $items = array(
    'banner_custom_slider' => array(
      'name' => t('Banner Custom Slider'),
      'base' => 'node_content',
      'description' => t('Banner Custom Slider'),
      'has_title' => '1',
      'title_label' => t('Image name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
