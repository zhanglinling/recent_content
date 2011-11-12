<?php
/**
 * @file
 * recent_content.features.inc
 */

/**
 * Implements hook_node_info().
 */
function recent_content_node_info() {
  $items = array(
    'link' => array(
      'name' => t('Link'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
