<?php

/**
 * Helper to implementation of hook_views_default_views().
 */
function _transition_people_views_default_views() {
  $views = array();

  // Exported view: people_directory
  $view = new view;
  $view->name = 'people_directory';
  $view->description = 'People directory';
  $view->tag = 'People';
  $view->view_php = '';
  $view->base_table = 'node';
  $view->is_cacheable = FALSE;
  $view->api_version = 2;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'defaults', 'default');
  $handler->override_option('fields', array(
    'title' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '[title]',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'strip_tags' => 0,
        'html' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 1,
      'exclude' => 0,
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('sorts', array(
    'changed' => array(
      'order' => 'ASC',
      'granularity' => 'second',
      'id' => 'changed',
      'table' => 'node',
      'field' => 'changed',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('filters', array(
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'profile' => 'profile',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'relationship' => 'none',
    ),
    'status' => array(
      'operator' => '=',
      'value' => '1',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'status',
      'table' => 'node',
      'field' => 'status',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'none',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('title', 'People');
  $handler->override_option('use_pager', '1');
  $handler->override_option('style_plugin', 'list');
  $handler->override_option('style_options', array(
    'grouping' => '',
    'type' => 'ul',
  ));
  $handler->override_option('row_options', array(
    'inline' => array(
      'title' => 'title',
      'province' => 'province',
      'country' => 'country',
      'field_status_value' => 'field_status_value',
    ),
    'separator' => '-',
    'hide_empty' => 1,
  ));
  $handler = $view->new_display('page', 'Directory Page', 'page_1');
  $handler->override_option('sorts', array(
    'title' => array(
      'order' => 'ASC',
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('arguments', array(
    'title' => array(
      'default_action' => 'ignore',
      'style_plugin' => 'default_summary',
      'style_options' => array(),
      'wildcard' => 'all',
      'wildcard_substitution' => 'All',
      'title' => '',
      'breadcrumb' => '',
      'default_argument_type' => 'fixed',
      'default_argument' => '',
      'validate_type' => 'none',
      'validate_fail' => 'not found',
      'glossary' => 1,
      'limit' => '1',
      'case' => 'none',
      'path_case' => 'none',
      'transform_dash' => 0,
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'validate_user_argument_type' => 'uid',
      'validate_user_roles' => array(
        '2' => 0,
        '5' => 0,
        '7' => 0,
        '6' => 0,
        '4' => 0,
        '8' => 0,
        '3' => 0,
      ),
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
      'default_options_div_prefix' => '',
      'default_argument_user' => 0,
      'default_argument_fixed' => '',
      'default_argument_php' => '',
      'validate_argument_node_type' => array(
        'blog' => 0,
        'event' => 0,
        'movement_news' => 0,
        'network_news' => 0,
        'topic' => 0,
        'forum' => 0,
        'panel' => 0,
        'initiative_group' => 0,
        'initiative_profile' => 0,
        'page' => 0,
        'profile' => 0,
        'project_profile' => 0,
      ),
      'validate_argument_node_access' => 0,
      'validate_argument_nid_type' => 'nid',
      'validate_argument_vocabulary' => array(
        '3' => 0,
        '2' => 0,
        '1' => 0,
      ),
      'validate_argument_type' => 'tid',
      'validate_argument_transform' => 0,
      'validate_user_restrict_roles' => 0,
      'validate_argument_is_member' => 0,
      'validate_argument_php' => '',
    ),
  ));
  $handler->override_option('filters', array(
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'profile' => 'profile',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Use default',
      ),
    ),
    'status' => array(
      'operator' => '=',
      'value' => '1',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'status',
      'table' => 'node',
      'field' => 'status',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
    'field_themes_nid' => array(
      'operator' => 'or',
      'value' => array(),
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'field_themes_nid_op',
        'identifier' => 'field_themes_nid',
        'label' => 'Show people interested in',
        'optional' => 1,
        'single' => 1,
        'remember' => 0,
        'reduce' => 0,
      ),
      'id' => 'field_themes_nid',
      'table' => 'node_data_field_themes',
      'field' => 'field_themes_nid',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
      'reduce_duplicates' => 1,
    ),
  ));
  $handler->override_option('title', 'Transition People Directory');
  $handler->override_option('header', '<p>[Views Header] All Transition Initiatives are listed in the directory below. You filter the list to show only \'Official\' or \'Mulling\' initiatives, or by the type of initiative like \'village\', \'island\', \'town etc. You may also see only the initiatives starting with a certain letter by clicking the appropriate button below.</p>
<h4>People Index</h4>
<ul class="links directory-tabs">
<?php
print "<li>" . l(t(\'All\'), \'people\') . "</li>";
for ($char = ord(\'a\'); $char <= ord(\'z\'); $char++) {
  print "<li>" . l(strtoupper(chr($char)), \'people\' . \'/\' . chr($char)) . "</li>";
} // A-Z pager @bro
?>
</ul>');
  $handler->override_option('header_format', '5');
  $handler->override_option('header_empty', 1);
  $handler->override_option('empty', '<p>No Transition Initiatives found, please try changing the filter settings above or views <a href="/initiatives">all the initiatives</a> to find the ones you are looking for.</p>');
  $handler->override_option('empty_format', '4');
  $handler->override_option('items_per_page', 30);
  $handler->override_option('style_plugin', 'table');
  $handler->override_option('style_options', array());
  $handler->override_option('path', 'people');
  $handler->override_option('menu', array(
    'type' => 'normal',
    'title' => 'People Directory',
    'description' => 'A list of public member\'s profiles',
    'weight' => '0',
    'name' => 'primary-links',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
  ));
  $handler = $view->new_display('block', 'Recently Updated block', 'block_1');
  $handler->override_option('sorts', array(
    'changed' => array(
      'order' => 'ASC',
      'granularity' => 'minute',
      'id' => 'changed',
      'table' => 'node',
      'field' => 'changed',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('title', 'Latest Initiatives');
  $handler->override_option('items_per_page', 5);
  $handler->override_option('block_description', '');
  $handler->override_option('block_caching', -1);
  $handler = $view->new_display('feed', 'All Recent feed', 'feed_1');
  $handler->override_option('title', 'All Latest Transition Initiatives');
  $handler->override_option('items_per_page', 25);
  $handler->override_option('style_plugin', 'rss');
  $handler->override_option('style_options', array(
    'mission_description' => FALSE,
    'description' => '',
  ));
  $handler->override_option('row_plugin', 'node_rss');
  $handler->override_option('row_options', array(
    'relationship' => 'none',
    'item_length' => 'teaser',
  ));
  $handler->override_option('path', 'people/feed/all');
  $handler->override_option('menu', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
  ));
  $handler->override_option('displays', array());
  $handler->override_option('sitename_title', 0);
  $handler = $view->new_display('page', 'By Country page', 'page_2');
  $handler->override_option('sorts', array(
    'title' => array(
      'order' => 'ASC',
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('arguments', array(
    'country' => array(
      'default_action' => 'ignore',
      'style_plugin' => 'default_summary',
      'style_options' => array(),
      'wildcard' => 'all',
      'wildcard_substitution' => 'All',
      'title' => 'Tranistion Initiatives in %1',
      'breadcrumb' => '',
      'default_argument_type' => 'fixed',
      'default_argument' => '',
      'validate_type' => 'none',
      'validate_fail' => 'not found',
      'id' => 'country',
      'table' => 'location',
      'field' => 'country',
      'validate_user_argument_type' => 'uid',
      'validate_user_roles' => array(
        '2' => 0,
        '5' => 0,
        '7' => 0,
        '6' => 0,
        '4' => 0,
        '8' => 0,
        '3' => 0,
      ),
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
      'default_options_div_prefix' => '',
      'default_argument_user' => 0,
      'default_argument_fixed' => '',
      'default_argument_php' => '',
      'validate_argument_node_type' => array(
        'blog' => 0,
        'event' => 0,
        'initiative_event' => 0,
        'initiative_profile' => 0,
        'movement_news' => 0,
        'network_news' => 0,
        'topic' => 0,
        'forum' => 0,
        'panel' => 0,
        'initiative_group' => 0,
        'page' => 0,
        'profile' => 0,
        'project_profile' => 0,
      ),
      'validate_argument_node_access' => 0,
      'validate_argument_nid_type' => 'nid',
      'validate_argument_vocabulary' => array(
        '3' => 0,
        '2' => 0,
        '1' => 0,
      ),
      'validate_argument_type' => 'tid',
      'validate_argument_transform' => 0,
      'validate_user_restrict_roles' => 0,
      'validate_argument_is_member' => 0,
      'validate_argument_php' => '',
    ),
  ));
  $handler->override_option('title', 'Transition Initiatives by Country');
  $handler->override_option('items_per_page', 30);
  $handler->override_option('style_plugin', 'table');
  $handler->override_option('style_options', array(
    'grouping' => '',
    'override' => 1,
    'sticky' => 0,
    'order' => 'asc',
    'columns' => array(
      'title' => 'title',
      'province' => 'province',
      'country' => 'country',
      'field_status_value' => 'field_status_value',
    ),
    'info' => array(
      'title' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'province' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'country' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'field_status_value' => array(
        'sortable' => 0,
        'separator' => '',
      ),
    ),
    'default' => '-1',
  ));
  $handler->override_option('path', 'people/country');
  $handler->override_option('menu', array(
    'type' => 'tab',
    'title' => 'By Country',
    'description' => 'View Transition Initiatives by country of origin',
    'weight' => '0',
    'name' => 'navigation',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
  ));

  $views[$view->name] = $view;

  return $views;
}
