<?php
/**
 * @file
 * codedrill_slider.features.inc
 */

/**
 * Implements hook_views_api().
 */
function codedrill_slider_views_api($module = NULL, $api = NULL) {
return array(
    'api' => "3.0",
    'path' => drupal_get_path('module', 'codedrill_slider'),
    'template path' => drupal_get_path('module', 'codedrill_slider'),
  );	
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
