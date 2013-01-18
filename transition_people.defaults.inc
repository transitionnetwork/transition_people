<?php

/**
 * Helper to implementation of hook_content_default_fields().
 */
function _transition_people_content_default_fields() {
  $fields = array();

  // Exported field: field_initiative
  $fields[] = array(
    'field_name' => 'field_initiative',
    'type_name' => 'profile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '0',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'initiative_profile' => 'initiative_profile',
      'blog' => 0,
      'forum' => 0,
      'imported_event' => 0,
      'imported_news' => 0,
      'initiative_group' => 0,
      'initiative_event' => 0,
      'movement_news' => 0,
      'page' => 0,
      'panel' => 0,
      'project_profile' => 0,
      'topic' => 0,
      'event' => 0,
      'network_news' => 0,
      'profile' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => 60,
      'default_value' => NULL,
      'default_value_php' => NULL,
      'label' => 'Initiative',
      'weight' => '34',
      'description' => 'The Transition Initiative you are involved in, if applicable.',
      'type' => 'nodereference_select',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_name_first
  $fields[] = array(
    'field_name' => 'field_name_first',
    'type_name' => 'profile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '20',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '20',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_name_first][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'First name',
      'weight' => '23',
      'description' => 'Your first or given name.',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_name_last
  $fields[] = array(
    'field_name' => 'field_name_last',
    'type_name' => 'profile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '25',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '25',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_name_last][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Last name',
      'weight' => '25',
      'description' => 'Your last or family name.',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_name_middle
  $fields[] = array(
    'field_name' => 'field_name_middle',
    'type_name' => 'profile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '20',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '20',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_name_middle][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Middle name',
      'weight' => '24',
      'description' => 'Your middle name, if you have one and it is commonly used.',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_neighbourhood_years
  $fields[] = array(
    'field_name' => 'field_neighbourhood_years',
    'type_name' => 'profile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_integer',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => 'years',
    'min' => '',
    'max' => '',
    'allowed_values' => '3|0 to 5
7|6 to 10
15|11 to 20
20|More than 20',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'How long lived in neighbourhood',
      'weight' => '36',
      'description' => 'The rough length of time you have lived in your current area.',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_other_websites
  $fields[] = array(
    'field_name' => 'field_other_websites',
    'type_name' => 'profile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'link',
    'required' => '0',
    'multiple' => '1',
    'module' => 'link',
    'active' => '1',
    'attributes' => array(
      'target' => 'default',
      'rel' => 'nofollow',
      'class' => '',
    ),
    'display' => array(
      'url_cutoff' => '80',
    ),
    'url' => 0,
    'title' => 'optional',
    'title_value' => '',
    'enable_tokens' => 0,
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'title' => '',
          'url' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Other web identities',
      'weight' => '39',
      'description' => 'The URLs (addresses) of any other web presences or profiles you might have with an optional title. These could include Flickr, YouTube, Facebook, Twitter, School of Everything, MySpace, StumbleUpon etc.',
      'type' => 'link',
      'module' => 'link',
    ),
  );

  // Exported field: field_themes
  $fields[] = array(
    'field_name' => 'field_themes',
    'type_name' => 'profile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '1',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'topic' => 'topic',
      'blog' => 0,
      'forum' => 0,
      'page_group' => 0,
      'imported_event' => 0,
      'imported_news' => 0,
      'initiative_group' => 0,
      'initiative_profile' => 0,
      'initiative_event' => 0,
      'movement_news' => 0,
      'simplenews' => 0,
      'page' => 0,
      'panel' => 0,
      'project_profile' => 0,
      'reference' => 0,
      'event' => 0,
      'network_news' => 0,
      'profile' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'nid' => NULL,
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Interests',
      'weight' => '35',
      'description' => 'The <em>Transition Themes</em> you are interested in. Check all that apply.',
      'type' => 'nodereference_buttons',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_training_attended
  $fields[] = array(
    'field_name' => 'field_training_attended',
    'type_name' => 'profile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'Transition Training
Weaving Magic
Train the trainers
Chris Martenson\'s Crash Course
Permaculture (not Transition Network)',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Transition Network trainings attended',
      'weight' => '37',
      'description' => 'The Transition Network training events you have attended. Check all that apply.',
      'type' => 'optionwidgets_buttons',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_training_other
  $fields[] = array(
    'field_name' => 'field_training_other',
    'type_name' => 'profile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '60',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_training_other][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Other Transition Training atteneded',
      'weight' => '38',
      'description' => 'Any other Transition Training events you have attended that are not covered above.',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_user_feed
  $fields[] = array(
    'field_name' => 'field_user_feed',
    'type_name' => 'profile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'link',
    'required' => '0',
    'multiple' => '0',
    'module' => 'link',
    'active' => '1',
    'attributes' => array(
      'target' => 'default',
      'rel' => 'nofollow',
      'class' => '',
    ),
    'display' => array(
      'url_cutoff' => '80',
    ),
    'url' => 0,
    'title' => 'value',
    'title_value' => '\'[field_user_website-title]\' feed',
    'enable_tokens' => 0,
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'url' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Blog feed',
      'weight' => '38',
      'description' => 'The URL (address) of your blog feed. Must be an Atom or RSS feed.',
      'type' => 'link',
      'module' => 'link',
    ),
  );

  // Exported field: field_user_location
  $fields[] = array(
    'field_name' => 'field_user_location',
    'type_name' => 'profile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'location',
    'required' => '1',
    'multiple' => '0',
    'module' => 'location_cck',
    'active' => '1',
    'location_settings' => array(
      'form' => array(
        'fields' => array(
          'country' => array(
            'collect' => '2',
            'default' => 'uk',
            'weight' => '-100',
          ),
          'postal_code' => array(
            'collect' => '1',
            'default' => '',
            'weight' => '-99',
          ),
          'province' => array(
            'collect' => '1',
            'default' => '',
            'weight' => '-98',
          ),
          'city' => array(
            'collect' => '0',
            'default' => '',
            'weight' => '-97',
          ),
          'name' => array(
            'collect' => '0',
            'default' => '',
            'weight' => '-96',
          ),
          'street' => array(
            'collect' => '0',
            'default' => '',
            'weight' => '-95',
          ),
          'additional' => array(
            'collect' => '0',
            'default' => '',
            'weight' => '-94',
          ),
          'locpick' => array(
            'collect' => '0',
            'weight' => '-93',
          ),
        ),
      ),
      'display' => array(
        'hide' => array(
          'name' => 'name',
          'street' => 'street',
          'additional' => 'additional',
          'city' => 'city',
          'province' => 'province',
          'postal_code' => 'postal_code',
          'locpick' => 'locpick',
          'province_name' => 'province_name',
          'country_name' => 'country_name',
          'map_link' => 'map_link',
          'coords' => 'coords',
          'country' => 0,
        ),
      ),
    ),
    'gmap_macro' => '[gmap ]',
    'gmap_marker' => 'small bred',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'country' => 'uk',
          'postal_code' => '',
          'province' => '',
          'cck_preview_in_progress' => TRUE,
          'location_settings' => array(
            'form' => array(
              'fields' => array(
                'country' => array(
                  'default' => 'uk',
                  'collect' => 1,
                  'weight' => '-100',
                ),
                'postal_code' => array(
                  'default' => '',
                  'collect' => '1',
                  'weight' => '-99',
                ),
                'province' => array(
                  'default' => '',
                  'collect' => '1',
                  'weight' => '-98',
                ),
                'city' => array(
                  'default' => '',
                  'collect' => '0',
                  'weight' => '-97',
                ),
                'name' => array(
                  'default' => '',
                  'collect' => '0',
                  'weight' => '-96',
                ),
                'street' => array(
                  'default' => '',
                  'collect' => '0',
                  'weight' => '-95',
                ),
                'additional' => array(
                  'default' => '',
                  'collect' => '0',
                  'weight' => '-94',
                ),
                'locpick' => array(
                  'default' => FALSE,
                  'collect' => '0',
                  'weight' => '-93',
                  'nodiff' => TRUE,
                ),
                'cck_preview_in_progress' => array(
                  'default' => TRUE,
                ),
                'location_settings' => array(
                  'default' => array(
                    'form' => array(
                      'fields' => array(
                        'country' => array(
                          'default' => 'uk',
                          'collect' => 1,
                          'weight' => '-100',
                        ),
                        'postal_code' => array(
                          'default' => '',
                          'collect' => '1',
                          'weight' => '-99',
                        ),
                        'province' => array(
                          'default' => '',
                          'collect' => '1',
                          'weight' => '-98',
                        ),
                        'city' => array(
                          'default' => '',
                          'collect' => '1',
                          'weight' => '-97',
                        ),
                        'name' => array(
                          'default' => '',
                          'collect' => '0',
                          'weight' => '-96',
                        ),
                        'street' => array(
                          'default' => '',
                          'collect' => '0',
                          'weight' => '-95',
                        ),
                        'additional' => array(
                          'default' => '',
                          'collect' => '0',
                          'weight' => '-94',
                        ),
                        'locpick' => array(
                          'default' => array(
                            'user_latitude' => '',
                            'user_longitude' => '',
                          ),
                          'collect' => '0',
                          'weight' => '-93',
                          'nodiff' => TRUE,
                        ),
                        'cck_preview_in_progress' => array(
                          'default' => TRUE,
                        ),
                        'location_settings' => array(
                          'default' => array(
                            'form' => array(
                              'fields' => array(
                                'country' => array(
                                  'default' => 'uk',
                                  'collect' => 1,
                                  'weight' => '-100',
                                ),
                                'postal_code' => array(
                                  'default' => '',
                                  'collect' => '1',
                                  'weight' => '-99',
                                ),
                                'province' => array(
                                  'default' => '',
                                  'collect' => '1',
                                  'weight' => '-98',
                                ),
                                'city' => array(
                                  'default' => '',
                                  'collect' => '1',
                                  'weight' => '-97',
                                ),
                                'name' => array(
                                  'default' => '',
                                  'collect' => '0',
                                  'weight' => '-96',
                                ),
                                'street' => array(
                                  'default' => '',
                                  'collect' => '0',
                                  'weight' => '-95',
                                ),
                                'additional' => array(
                                  'default' => '',
                                  'collect' => '0',
                                  'weight' => '-94',
                                ),
                                'locpick' => array(
                                  'default' => array(
                                    'user_latitude' => '',
                                    'user_longitude' => '',
                                  ),
                                  'collect' => '1',
                                  'weight' => '-93',
                                  'nodiff' => TRUE,
                                ),
                                'cck_preview_in_progress' => array(
                                  'default' => TRUE,
                                ),
                                'location_settings' => array(
                                  'default' => array(
                                    'form' => array(
                                      'fields' => array(
                                        'lid' => array(
                                          'default' => FALSE,
                                        ),
                                        'name' => array(
                                          'default' => '',
                                          'collect' => 1,
                                          'weight' => 2,
                                        ),
                                        'street' => array(
                                          'default' => '',
                                          'collect' => 1,
                                          'weight' => 4,
                                        ),
                                        'additional' => array(
                                          'default' => '',
                                          'collect' => 1,
                                          'weight' => 6,
                                        ),
                                        'city' => array(
                                          'default' => '',
                                          'collect' => 0,
                                          'weight' => 8,
                                        ),
                                        'province' => array(
                                          'default' => '',
                                          'collect' => 0,
                                          'weight' => 10,
                                        ),
                                        'postal_code' => array(
                                          'default' => '',
                                          'collect' => 0,
                                          'weight' => 12,
                                        ),
                                        'country' => array(
                                          'default' => 'uk',
                                          'collect' => 1,
                                          'weight' => 14,
                                        ),
                                        'locpick' => array(
                                          'default' => FALSE,
                                          'collect' => 1,
                                          'weight' => 20,
                                          'nodiff' => TRUE,
                                        ),
                                        'latitude' => array(
                                          'default' => 0,
                                        ),
                                        'longitude' => array(
                                          'default' => 0,
                                        ),
                                        'source' => array(
                                          'default' => 0,
                                        ),
                                        'is_primary' => array(
                                          'default' => 0,
                                        ),
                                        'delete_location' => array(
                                          'default' => FALSE,
                                          'nodiff' => TRUE,
                                        ),
                                      ),
                                    ),
                                  ),
                                ),
                                'lid' => array(
                                  'default' => FALSE,
                                ),
                                'latitude' => array(
                                  'default' => 0,
                                ),
                                'longitude' => array(
                                  'default' => 0,
                                ),
                                'source' => array(
                                  'default' => 0,
                                ),
                                'is_primary' => array(
                                  'default' => 0,
                                ),
                                'delete_location' => array(
                                  'default' => FALSE,
                                  'nodiff' => TRUE,
                                ),
                              ),
                            ),
                            'display' => array(
                              'hide' => array(
                                'name' => 'name',
                                'street' => 'street',
                                'additional' => 'additional',
                                'city' => 'city',
                                'province' => 'province',
                                'postal_code' => 'postal_code',
                                'locpick' => 'locpick',
                                'province_name' => 'province_name',
                                'country_name' => 'country_name',
                                'map_link' => 'map_link',
                                'coords' => 'coords',
                                'country' => 0,
                              ),
                            ),
                          ),
                        ),
                        'lid' => array(
                          'default' => FALSE,
                        ),
                        'latitude' => array(
                          'default' => 0,
                        ),
                        'longitude' => array(
                          'default' => 0,
                        ),
                        'source' => array(
                          'default' => 0,
                        ),
                        'is_primary' => array(
                          'default' => 0,
                        ),
                        'delete_location' => array(
                          'default' => FALSE,
                          'nodiff' => TRUE,
                        ),
                      ),
                    ),
                    'display' => array(
                      'hide' => array(
                        'name' => 'name',
                        'street' => 'street',
                        'additional' => 'additional',
                        'city' => 'city',
                        'province' => 'province',
                        'postal_code' => 'postal_code',
                        'locpick' => 'locpick',
                        'province_name' => 'province_name',
                        'country_name' => 'country_name',
                        'map_link' => 'map_link',
                        'coords' => 'coords',
                        'country' => 0,
                      ),
                    ),
                  ),
                ),
                'lid' => array(
                  'default' => FALSE,
                ),
                'latitude' => array(
                  'default' => 0,
                ),
                'longitude' => array(
                  'default' => 0,
                ),
                'source' => array(
                  'default' => 0,
                ),
                'is_primary' => array(
                  'default' => 0,
                ),
                'delete_location' => array(
                  'default' => FALSE,
                  'nodiff' => TRUE,
                ),
              ),
            ),
            'display' => array(
              'hide' => array(
                'name' => 'name',
                'street' => 'street',
                'additional' => 'additional',
                'city' => 'city',
                'province' => 'province',
                'postal_code' => 'postal_code',
                'locpick' => 'locpick',
                'province_name' => 'province_name',
                'country_name' => 'country_name',
                'map_link' => 'map_link',
                'coords' => 'coords',
                'country' => 0,
              ),
            ),
          ),
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Your location',
      'weight' => '27',
      'description' => '<p>To get the best from this site, please enter your country and any or all of your postal code or state/province.</p>
<p><strong>Note:</strong> This information is used to help people on the site find people near them to work with. Only the Country is shown publicly if you change the little \'stop\' symbol to and \'eye\', Your postcode and state/province is always hidden from view.</p>',
      'type' => 'location',
      'module' => 'location_cck',
    ),
  );

  // Exported field: field_user_types
  $fields[] = array(
    'field_name' => 'field_user_types',
    'type_name' => 'profile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '1',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'staff|Transition Network Staff
trainer|Trainer
speaker|Speaker
consultant|Consultant
technologist|Technologist
web-contact|Web point of contact
ext-voice|External Voice (respected blogger not hosted here)
int-voice|Internal Voice (respected blogger with blog hosted here)
',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => NULL,
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'User Types',
      'weight' => '22',
      'description' => '<strong>Admin Only: </strong>The types of activities this user engages in within the Transition Network and on this site. Not to be confused with Drupal\'s roles.',
      'type' => 'optionwidgets_buttons',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_user_website
  $fields[] = array(
    'field_name' => 'field_user_website',
    'type_name' => 'profile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'link',
    'required' => '0',
    'multiple' => '0',
    'module' => 'link',
    'active' => '1',
    'attributes' => array(
      'target' => '_blank',
      'rel' => 'nofollow',
      'class' => '',
    ),
    'display' => array(
      'url_cutoff' => '80',
    ),
    'url' => 0,
    'title' => 'optional',
    'title_value' => '',
    'enable_tokens' => 0,
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'title' => '',
          'url' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Website address',
      'weight' => '37',
      'description' => 'The URL (address) of your website, blog or other web presence, plus optional title.',
      'type' => 'link',
      'module' => 'link',
    ),
  );

  // Translatables
  array(
    t('Blog feed'),
    t('First name'),
    t('How long lived in neighbourhood'),
    t('Initiative'),
    t('Interests'),
    t('Last name'),
    t('Middle name'),
    t('Other Transition Training atteneded'),
    t('Other web identities'),
    t('Transition Network trainings attended'),
    t('User Types'),
    t('Website address'),
    t('Your location'),
  );

  return $fields;
}

/**
 * Helper to implementation of hook_user_default_permissions().
 */
function _transition_people_user_default_permissions() {
  $permissions = array();

  // Exported permission: access user profiles
  $permissions[] = array(
    'name' => 'access user profiles',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'developer',
      '2' => 'site administrator',
      '3' => 'site editor',
    ),
  );

  // Exported permission: change own username
  $permissions[] = array(
    'name' => 'change own username',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'developer',
      '2' => 'pre-authorised',
      '3' => 'site administrator',
      '4' => 'site editor',
    ),
  );

  // Exported permission: create profile content
  $permissions[] = array(
    'name' => 'create profile content',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'developer',
      '2' => 'pre-authorised',
      '3' => 'site administrator',
      '4' => 'site editor',
    ),
  );

  // Exported permission: delete any profile content
  $permissions[] = array(
    'name' => 'delete any profile content',
    'roles' => array(
      '0' => 'developer',
      '1' => 'site administrator',
      '2' => 'site editor',
    ),
  );

  // Exported permission: delete own profile content
  $permissions[] = array(
    'name' => 'delete own profile content',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'developer',
      '2' => 'pre-authorised',
      '3' => 'site administrator',
      '4' => 'site editor',
    ),
  );

  // Exported permission: edit any profile content
  $permissions[] = array(
    'name' => 'edit any profile content',
    'roles' => array(
      '0' => 'developer',
      '1' => 'site administrator',
      '2' => 'site editor',
    ),
  );

  // Exported permission: edit field_initiative
  $permissions[] = array(
    'name' => 'edit field_initiative',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'developer',
      '3' => 'pre-authorised',
      '4' => 'site administrator',
      '5' => 'site editor',
    ),
  );

  // Exported permission: edit field_name_first
  $permissions[] = array(
    'name' => 'edit field_name_first',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'developer',
      '3' => 'pre-authorised',
      '4' => 'site administrator',
      '5' => 'site editor',
    ),
  );

  // Exported permission: edit field_name_last
  $permissions[] = array(
    'name' => 'edit field_name_last',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'developer',
      '3' => 'pre-authorised',
      '4' => 'site administrator',
      '5' => 'site editor',
    ),
  );

  // Exported permission: edit field_name_middle
  $permissions[] = array(
    'name' => 'edit field_name_middle',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'developer',
      '3' => 'pre-authorised',
      '4' => 'site administrator',
      '5' => 'site editor',
    ),
  );

  // Exported permission: edit field_neighbourhood_years
  $permissions[] = array(
    'name' => 'edit field_neighbourhood_years',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'developer',
      '2' => 'pre-authorised',
      '3' => 'site administrator',
      '4' => 'site editor',
    ),
  );

  // Exported permission: edit field_other_websites
  $permissions[] = array(
    'name' => 'edit field_other_websites',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'developer',
      '2' => 'pre-authorised',
      '3' => 'site administrator',
      '4' => 'site editor',
    ),
  );

  // Exported permission: edit field_training_attended
  $permissions[] = array(
    'name' => 'edit field_training_attended',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'developer',
      '2' => 'pre-authorised',
      '3' => 'site administrator',
      '4' => 'site editor',
    ),
  );

  // Exported permission: edit field_training_other
  $permissions[] = array(
    'name' => 'edit field_training_other',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'developer',
      '2' => 'pre-authorised',
      '3' => 'site administrator',
      '4' => 'site editor',
    ),
  );

  // Exported permission: edit field_user_feed
  $permissions[] = array(
    'name' => 'edit field_user_feed',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'developer',
      '2' => 'pre-authorised',
      '3' => 'site administrator',
      '4' => 'site editor',
    ),
  );

  // Exported permission: edit field_user_types
  $permissions[] = array(
    'name' => 'edit field_user_types',
    'roles' => array(
      '0' => 'developer',
      '1' => 'site administrator',
      '2' => 'site editor',
    ),
  );

  // Exported permission: edit field_user_website
  $permissions[] = array(
    'name' => 'edit field_user_website',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'developer',
      '2' => 'pre-authorised',
      '3' => 'site administrator',
      '4' => 'site editor',
    ),
  );

  // Exported permission: edit field_website
  $permissions[] = array(
    'name' => 'edit field_website',
    'roles' => array(
      '0' => 'developer',
      '1' => 'group admin',
      '2' => 'site administrator',
      '3' => 'site editor',
    ),
  );

  // Exported permission: edit own profile content
  $permissions[] = array(
    'name' => 'edit own profile content',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'developer',
      '2' => 'pre-authorised',
      '3' => 'site administrator',
      '4' => 'site editor',
    ),
  );

  // Exported permission: edit privacy options for field field_initiative
  $permissions[] = array(
    'name' => 'edit privacy options for field field_initiative',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'pre-authorised',
      '3' => 'site administrator',
    ),
  );

  // Exported permission: view field_initiative
  $permissions[] = array(
    'name' => 'view field_initiative',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'developer',
      '3' => 'site administrator',
      '4' => 'site editor',
    ),
  );

  // Exported permission: view field_name_first
  $permissions[] = array(
    'name' => 'view field_name_first',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'developer',
      '3' => 'pre-authorised',
      '4' => 'site administrator',
      '5' => 'site editor',
    ),
  );

  // Exported permission: view field_name_last
  $permissions[] = array(
    'name' => 'view field_name_last',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'developer',
      '3' => 'site administrator',
      '4' => 'site editor',
    ),
  );

  // Exported permission: view field_name_middle
  $permissions[] = array(
    'name' => 'view field_name_middle',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'developer',
      '3' => 'site administrator',
      '4' => 'site editor',
    ),
  );

  // Exported permission: view field_other_websites
  $permissions[] = array(
    'name' => 'view field_other_websites',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'developer',
      '3' => 'pre-authorised',
      '4' => 'site administrator',
      '5' => 'site editor',
    ),
  );

  // Exported permission: view field_training_attended
  $permissions[] = array(
    'name' => 'view field_training_attended',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'developer',
      '3' => 'site administrator',
      '4' => 'site editor',
    ),
  );

  // Exported permission: view field_training_other
  $permissions[] = array(
    'name' => 'view field_training_other',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'developer',
      '3' => 'pre-authorised',
      '4' => 'site administrator',
      '5' => 'site editor',
    ),
  );

  // Exported permission: view field_user_feed
  $permissions[] = array(
    'name' => 'view field_user_feed',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'developer',
      '3' => 'pre-authorised',
      '4' => 'site administrator',
      '5' => 'site editor',
    ),
  );

  // Exported permission: view field_user_types
  $permissions[] = array(
    'name' => 'view field_user_types',
    'roles' => array(
      '0' => 'developer',
      '1' => 'site administrator',
      '2' => 'site editor',
    ),
  );

  // Exported permission: view field_user_website
  $permissions[] = array(
    'name' => 'view field_user_website',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'developer',
      '3' => 'pre-authorised',
      '4' => 'site administrator',
      '5' => 'site editor',
    ),
  );

  // Exported permission: view private data for field field_initiative
  $permissions[] = array(
    'name' => 'view private data for field field_initiative',
    'roles' => array(
      '0' => 'site administrator',
    ),
  );

  return $permissions;
}
