<?php
/**
 * @file
 * stanford_slides.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function stanford_slides_field_default_fields() {
  $fields = array();

  // Exported field: 'node-stanford_slide-field_s_image_info'.
  $fields['node-stanford_slide-field_s_image_info'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_s_image_info',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'field_collection',
      'settings' => array(
        'path' => '',
      ),
      'translatable' => '0',
      'type' => 'field_collection',
    ),
    'field_instance' => array(
      'bundle' => 'stanford_slide',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'field_collection',
          'settings' => array(
            'add' => '',
            'delete' => '',
            'description' => 0,
            'edit' => '',
            'view_mode' => 'stanford_9_col_banner',
          ),
          'type' => 'field_collection_view',
          'weight' => '0',
        ),
        'stanford_12_col_banner' => array(
          'label' => 'hidden',
          'module' => 'field_collection',
          'settings' => array(
            'add' => '',
            'delete' => '',
            'description' => 0,
            'edit' => '',
            'view_mode' => 'stanford_12_col_banner',
          ),
          'type' => 'field_collection_view',
          'weight' => '0',
        ),
        'stanford_6_col_banner' => array(
          'label' => 'hidden',
          'module' => 'field_collection',
          'settings' => array(
            'view_mode' => 'stanford_6_col_banner',
          ),
          'type' => 'field_collection_fields',
          'weight' => '0',
        ),
        'stanford_8_col_banner' => array(
          'label' => 'hidden',
          'module' => 'field_collection',
          'settings' => array(
            'add' => '',
            'delete' => '',
            'description' => 0,
            'edit' => '',
            'view_mode' => 'stanford_8_col_banner',
          ),
          'type' => 'field_collection_view',
          'weight' => '0',
        ),
        'stanford_9_col_banner' => array(
          'label' => 'hidden',
          'module' => 'field_collection',
          'settings' => array(
            'add' => '',
            'delete' => '',
            'description' => 0,
            'edit' => '',
            'view_mode' => 'stanford_9_col_banner',
          ),
          'type' => 'field_collection_view',
          'weight' => '0',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'field_collection',
          'settings' => array(
            'add' => '',
            'delete' => '',
            'description' => 0,
            'edit' => '',
            'view_mode' => 'stanford_thumbnail',
          ),
          'type' => 'field_collection_view',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_s_image_info',
      'label' => 'Image',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'field_collection',
        'settings' => array(),
        'type' => 'field_collection_embed',
        'weight' => '1',
      ),
    ),
  );

  // Exported field: 'node-stanford_slide-field_s_slide_category'.
  $fields['node-stanford_slide-field_s_slide_category'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_s_slide_category',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => '0',
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'stanford_slide_category',
            'parent' => '0',
          ),
        ),
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'stanford_slide',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '1',
        ),
        'stanford_12_col_banner' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '1',
        ),
        'stanford_6_col_banner' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '1',
        ),
        'stanford_8_col_banner' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '1',
        ),
        'stanford_9_col_banner' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '1',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '4',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_s_slide_category',
      'label' => 'Category',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'taxonomy',
        'settings' => array(
          'autocomplete_path' => 'taxonomy/autocomplete',
          'size' => 60,
        ),
        'type' => 'taxonomy_autocomplete',
        'weight' => '5',
      ),
    ),
  );

  // Exported field: 'node-stanford_slide-field_s_slide_group'.
  $fields['node-stanford_slide-field_s_slide_group'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_s_slide_group',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'home' => 'Home page slideshow',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'stanford_slide',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Identifies the group in which this slide belongs.',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '3',
        ),
        'stanford_12_col_banner' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '3',
        ),
        'stanford_6_col_banner' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '3',
        ),
        'stanford_8_col_banner' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '3',
        ),
        'stanford_9_col_banner' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '3',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '1',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_s_slide_group',
      'label' => 'Group',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'node-stanford_slide-field_s_slide_link'.
  $fields['node-stanford_slide-field_s_slide_link'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_s_slide_link',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'link',
      'settings' => array(
        'attributes' => array(
          'class' => '',
          'rel' => '',
          'target' => 'default',
        ),
        'display' => array(
          'url_cutoff' => 80,
        ),
        'enable_tokens' => 1,
        'title' => 'optional',
        'title_maxlength' => 128,
        'title_value' => '',
        'url' => 0,
      ),
      'translatable' => '0',
      'type' => 'link_field',
    ),
    'field_instance' => array(
      'bundle' => 'stanford_slide',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'link',
          'settings' => array(),
          'type' => 'link_default',
          'weight' => '2',
        ),
        'stanford_12_col_banner' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '2',
        ),
        'stanford_6_col_banner' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '2',
        ),
        'stanford_8_col_banner' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '2',
        ),
        'stanford_9_col_banner' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '2',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '2',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_s_slide_link',
      'label' => 'Link',
      'required' => 0,
      'settings' => array(
        'attributes' => array(
          'class' => 'more-link',
          'configurable_title' => 0,
          'rel' => '',
          'target' => 'default',
          'title' => '',
        ),
        'display' => array(
          'url_cutoff' => '80',
        ),
        'enable_tokens' => 1,
        'title' => 'optional',
        'title_maxlength' => '128',
        'title_value' => '',
        'url' => 0,
        'user_register_form' => FALSE,
        'validate_url' => 1,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_field',
        'weight' => '3',
      ),
    ),
  );

  // Exported field: 'node-stanford_slide-field_s_slide_weight'.
  $fields['node-stanford_slide-field_s_slide_weight'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_s_slide_weight',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'number',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'number_integer',
    ),
    'field_instance' => array(
      'bundle' => 'stanford_slide',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'If this image is part of a group, the weight helps determine the sorting order.  ',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 0,
            'thousand_separator' => ' ',
          ),
          'type' => 'number_integer',
          'weight' => '4',
        ),
        'stanford_12_col_banner' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '4',
        ),
        'stanford_6_col_banner' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '4',
        ),
        'stanford_8_col_banner' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '4',
        ),
        'stanford_9_col_banner' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '4',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '3',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_s_slide_weight',
      'label' => 'Weight',
      'required' => 0,
      'settings' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => '4',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Caption');
  t('Category');
  t('Credits');
  t('Enter the original name, if changed, and other information to aid in finding the original image.');
  t('Enter the photographer or organization credits.');
  t('Group');
  t('Identifies the group in which this slide belongs.');
  t('If this image is part of a group, the weight helps determine the sorting order.  ');
  t('Image');
  t('Link');
  t('Optionally enter information to appear as a caption for this image. This text may be trimmed to 180 characters.');
  t('Source Info');
  t('Weight');

  return $fields;
}
