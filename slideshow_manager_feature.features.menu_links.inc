<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function slideshow_manager_feature_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation:admin/slideshows
  $menu_links['navigation:admin/slideshows'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'admin/slideshows',
    'router_path' => 'admin/slideshows',
    'link_title' => 'Slideshows',
    'options' => array(
      'attributes' => array(
        'title' => 'List of slideshows in the CMS',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Slideshows');


  return $menu_links;
}
