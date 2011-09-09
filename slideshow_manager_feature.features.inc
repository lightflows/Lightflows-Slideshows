<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function slideshow_manager_feature_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function slideshow_manager_feature_node_info() {
  $items = array(
    'slide' => array(
      'name' => t('Slide'),
      'module' => 'features',
      'description' => t('Used for creating slides that appear in a slideshow'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'slideshow' => array(
      'name' => t('Slideshow'),
      'module' => 'features',
      'description' => t('A Slideshow is a container that holds a number of slides'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function slideshow_manager_feature_views_api() {
  return array(
    'api' => '2',
  );
}
