<?php
/**
 * @file
 * codedrill_slider.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function codedrill_slider_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'slider_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Slider View';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Slider block';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'revolution-mch-1';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['wrapper_class'] = 'cd-banner';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['label'] = '';
  $handler->display->display_options['fields']['field_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
  /* Field: Content: Slidershow Image */
  $handler->display->display_options['fields']['field_slider_image']['id'] = 'field_slider_image';
  $handler->display->display_options['fields']['field_slider_image']['table'] = 'field_data_field_slider_image';
  $handler->display->display_options['fields']['field_slider_image']['field'] = 'field_slider_image';
  $handler->display->display_options['fields']['field_slider_image']['label'] = '';
  $handler->display->display_options['fields']['field_slider_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slider_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slider_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_slider_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_slider_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Button */
  $handler->display->display_options['fields']['field_button']['id'] = 'field_button';
  $handler->display->display_options['fields']['field_button']['table'] = 'field_data_field_button';
  $handler->display->display_options['fields']['field_button']['field'] = 'field_button';
  $handler->display->display_options['fields']['field_button']['label'] = '';
  $handler->display->display_options['fields']['field_button']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_button']['element_default_classes'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '  [field_slider_image] 
<div class="cd-caption re-title-v1 sft start"
                        data-x="center"
                        data-hoffset="0"
                        data-y="100"
                        data-speed="1500"
                        data-start="500"
                        data-easing="Back.easeInOut"
                        data-endeasing="Power1.easeIn"
                        data-endspeed="300">   
                      [field_description]
                    </div>
                     <div class="cd-caption re-text-v1 sft"
                        data-x="center"
                        data-hoffset="0"
                        data-y="200"
                        data-speed="1400"
                        data-start="2000"
                        data-easing="Power4.easeOut"
                        data-endspeed="300"
                        data-endeasing="Power1.easeIn"
                        data-captionhidden="off"
                        style="z-index: 6">
                        Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer vulputate, erat non euismod scelerisque,. <br>
                        We minimize the gap between technology and its audience.
</div>
 <div class="cd-caption sft"
                        data-x="center"
                        data-hoffset="0"
                        data-y="320"
                        data-speed="1600"
                        data-start="2800"
                        data-easing="Power4.easeOut"
                        data-endspeed="300"
                        data-endeasing="Power1.easeIn"
                        data-captionhidden="off"
                        style="z-index: 6">
                        <a href="#" class="btn-u btn-u-lg re-btn-brd margin-right-5">Read About Us</a>
                        <a href="#" class="btn-u btn-u-lg">Visit Our Work</a>
                    </div>
                  ';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'banner_custom_slider' => 'banner_custom_slider',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $export['slider_view'] = $view;

  return $export;
}
