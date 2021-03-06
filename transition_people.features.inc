<?php

/**
 * Implementation of hook_content_default_fields().
 */
function transition_people_content_default_fields() {
  module_load_include('inc', 'transition_people', 'transition_people.defaults');
  $args = func_get_args();
  return call_user_func_array('_transition_people_content_default_fields', $args);
}

/**
 * Implementation of hook_node_info().
 */
function transition_people_node_info() {
  module_load_include('inc', 'transition_people', 'transition_people.features.node');
  $args = func_get_args();
  return call_user_func_array('_transition_people_node_info', $args);
}

/**
 * Implementation of hook_user_default_permissions().
 */
function transition_people_user_default_permissions() {
  module_load_include('inc', 'transition_people', 'transition_people.defaults');
  $args = func_get_args();
  return call_user_func_array('_transition_people_user_default_permissions', $args);
}

/**
 * Implementation of hook_views_default_views().
 */
function transition_people_views_default_views() {
  module_load_include('inc', 'transition_people', 'transition_people.features.views');
  $args = func_get_args();
  return call_user_func_array('_transition_people_views_default_views', $args);
}
