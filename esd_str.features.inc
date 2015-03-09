<?php
/**
 * @file
 * esd_str.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function esd_str_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "boxes" && $api == "box") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_entity_boxes_type().
 */
function esd_str_default_entity_boxes_type() {
  $items = array();
  $items['dyk_box'] = entity_import('entity_boxes_type', '{ "type" : "dyk_box", "label" : "dyk_box", "weight" : "0", "data" : "" }');
  $items['rich_box'] = entity_import('entity_boxes_type', '{ "type" : "rich_box", "label" : "rich_box", "weight" : "0", "data" : "" }');
  return $items;
}

/**
 * Implements hook_image_default_styles().
 */
function esd_str_image_default_styles() {
  $styles = array();

  // Exported image style: 340w211h.
  $styles['340w211h'] = array(
    'name' => '340w211h',
    'effects' => array(
      3 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'imageinfo_cache_effect_router',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '340',
          'height' => '211',
          '#imageinfo_cache_effect_callback' => 'imageinfo_cache_effect_router',
        ),
        'weight' => '1',
      ),
    ),
    'label' => '340w211h',
  );

  // Exported image style: 340wNh.
  $styles['340wNh'] = array(
    'name' => '340wNh',
    'effects' => array(
      1 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'imageinfo_cache_effect_router',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '340',
          'height' => '',
          'upscale' => 0,
          '#imageinfo_cache_effect_callback' => 'imageinfo_cache_effect_router',
        ),
        'weight' => '1',
      ),
    ),
    'label' => '340wNh',
  );

  // Exported image style: 580w360h.
  $styles['580w360h'] = array(
    'name' => '580w360h',
    'effects' => array(
      2 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'imageinfo_cache_effect_router',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '580',
          'height' => '360',
          '#imageinfo_cache_effect_callback' => 'imageinfo_cache_effect_router',
        ),
        'weight' => '1',
      ),
    ),
    'label' => '580w360h',
  );

  // Exported image style: 580wNh.
  $styles['580wNh'] = array(
    'name' => '580wNh',
    'effects' => array(
      1 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'imageinfo_cache_effect_router',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '580',
          'height' => '',
          'upscale' => 0,
          '#imageinfo_cache_effect_callback' => 'imageinfo_cache_effect_router',
        ),
        'weight' => '1',
      ),
    ),
    'label' => '580wNh',
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function esd_str_node_info() {
  $items = array(
    'blog_entry' => array(
      'name' => t('Blog Entry'),
      'base' => 'node_content',
      'description' => t('Blog entries share time-sensitive updates on education, ESD’s work, and the coalition’s relationships in the community.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'front_page_slide' => array(
      'name' => t('Front Page Slide'),
      'base' => 'node_content',
      'description' => t('Slide for the slideshow block on the front page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'media_hit' => array(
      'name' => t('Media Hit'),
      'base' => 'node_content',
      'description' => t('Each media hit records a piece of earned media (which could be online, in print, or broadcast). The content of the original piece should be included along with a link to the publisher’s website.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Page'),
      'base' => 'node_content',
      'description' => t('Most pieces of content on the site are basic Pages.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'weekly_update' => array(
      'name' => t('Weekly Update'),
      'base' => 'node_content',
      'description' => t('Use when a Weekly Education News & Policy Update is sent in MailChimp. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
