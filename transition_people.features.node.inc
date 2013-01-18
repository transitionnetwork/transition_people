<?php

/**
 * Helper to implementation of hook_node_info().
 */
function _transition_people_node_info() {
  $items = array(
    'profile' => array(
      'name' => t('User Profile'),
      'module' => 'features',
      'description' => t('A <em>user profile</em> built as content.'),
      'has_title' => '1',
      'title_label' => t('Username'),
      'has_body' => '1',
      'body_label' => t('Short biography'),
      'min_word_count' => '0',
      'help' => t('[instructions to follow]'),
    ),
  );
  return $items;
}
