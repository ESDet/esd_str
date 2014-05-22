<?php
/**
 * @file
 * esd_str.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function esd_str_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ask_us_block';
  $context->description = 'Positioning Ask Us block';
  $context->tag = 'Block';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~node/71' => '~node/71',
        '~node/15' => '~node/15',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-ask_us' => array(
          'module' => 'boxes',
          'delta' => 'ask_us',
          'region' => 'actions',
          'weight' => '-10',
        ),
        'boxes-ask_us_es' => array(
          'module' => 'boxes',
          'delta' => 'ask_us_es',
          'region' => 'actions',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Block');
  t('Positioning Ask Us block');
  $export['ask_us_block'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'front';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-school_score_widget' => array(
          'module' => 'boxes',
          'delta' => 'school_score_widget',
          'region' => 'post_content',
          'weight' => '-10',
        ),
        'boxes-school_score_es' => array(
          'module' => 'boxes',
          'delta' => 'school_score_es',
          'region' => 'post_content',
          'weight' => '-9',
        ),
        'boxes-did_you_know' => array(
          'module' => 'boxes',
          'delta' => 'did_you_know',
          'region' => 'post_content',
          'weight' => '0',
        ),
        'boxes-did_you_know_es' => array(
          'module' => 'boxes',
          'delta' => 'did_you_know_es',
          'region' => 'post_content',
          'weight' => '5',
        ),
        'views-blog-block_1' => array(
          'module' => 'views',
          'delta' => 'blog-block_1',
          'region' => 'actions',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['front'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'google-login';
  $context->description = 'Google Login page';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'node/92' => 'node/92',
        'user/google-login' => 'user/google-login',
        'user' => 'user',
        'user/*' => 'user/*',
        'login' => 'login',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'connector-one_click_block' => array(
          'module' => 'connector',
          'delta' => 'one_click_block',
          'region' => 'content',
          'weight' => '9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Google Login page');
  $export['google-login'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'how_do_schools_stack';
  $context->description = 'score card block';
  $context->tag = 'Page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'how-do-schools-stack' => 'how-do-schools-stack',
        'school-quality-review' => 'school-quality-review',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-school_score_widget' => array(
          'module' => 'boxes',
          'delta' => 'school_score_widget',
          'region' => 'post_content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Page');
  t('score card block');
  $export['how_do_schools_stack'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'learn';
  $context->description = 'Learn Page';
  $context->tag = 'Page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'learn' => 'learn',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-6' => array(
          'module' => 'menu_block',
          'delta' => '6',
          'region' => 'content',
          'weight' => '9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Learn Page');
  t('Page');
  $export['learn'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'learn_es';
  $context->description = 'Learn page ES';
  $context->tag = 'es';
  $context->conditions = array(
    'language' => array(
      'values' => array(
        'es' => 'es',
      ),
    ),
    'path' => array(
      'values' => array(
        'es/aprenda' => 'es/aprenda',
        'aprenda' => 'aprenda',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-8' => array(
          'module' => 'menu_block',
          'delta' => '8',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Learn page ES');
  t('es');
  $export['learn_es'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'learn_section';
  $context->description = 'Learn section';
  $context->tag = 'section';
  $context->conditions = array(
    'menu' => array(
      'values' => array(
        'media' => 'media',
        'node/14' => 'node/14',
        'node/17' => 'node/17',
        'node/21' => 'node/21',
        'node/22' => 'node/22',
        'node/23' => 'node/23',
        'node/24' => 'node/24',
        'node/25' => 'node/25',
        'node/27' => 'node/27',
        'node/28' => 'node/28',
        'node/4' => 'node/4',
        'node/5' => 'node/5',
        'node/6' => 'node/6',
        'weekly-updates' => 'weekly-updates',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'mailchimp_lists-get_email_updates' => array(
          'module' => 'mailchimp_lists',
          'delta' => 'get_email_updates',
          'region' => 'actions',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Learn section');
  t('section');
  $export['learn_section'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'media_hit';
  $context->description = '';
  $context->tag = 'section';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'media_hit' => 'media_hit',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'menu' => 'media',
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('section');
  $export['media_hit'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'not_front';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~<front>' => '~<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'mailchimp_lists-get_email_updates' => array(
          'module' => 'mailchimp_lists',
          'delta' => 'get_email_updates',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['not_front'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'school_leader_page';
  $context->description = 'Additional elements for the school leader resources page';
  $context->tag = 'Page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'school-leaders' => 'school-leaders',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-portal_link' => array(
          'module' => 'boxes',
          'delta' => 'portal_link',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Additional elements for the school leader resources page');
  t('Page');
  $export['school_leader_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-1' => array(
          'module' => 'menu_block',
          'delta' => '1',
          'region' => 'branding',
          'weight' => '-10',
        ),
        'menu_block-2' => array(
          'module' => 'menu_block',
          'delta' => '2',
          'region' => 'branding',
          'weight' => '-9',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-21',
        ),
        'boxes-footer_desc' => array(
          'module' => 'boxes',
          'delta' => 'footer_desc',
          'region' => 'footer_first',
          'weight' => '-10',
        ),
        'boxes-footer_desc_es' => array(
          'module' => 'boxes',
          'delta' => 'footer_desc_es',
          'region' => 'footer_first',
          'weight' => '-9',
        ),
        'menu_block-3' => array(
          'module' => 'menu_block',
          'delta' => '3',
          'region' => 'footer_first',
          'weight' => '-8',
        ),
        'menu_block-4' => array(
          'module' => 'menu_block',
          'delta' => '4',
          'region' => 'footer_first',
          'weight' => '-7',
        ),
        'menu_block-5' => array(
          'module' => 'menu_block',
          'delta' => '5',
          'region' => 'footer_second',
          'weight' => '-9',
        ),
        'boxes-social_share' => array(
          'module' => 'boxes',
          'delta' => 'social_share',
          'region' => 'footer_third',
          'weight' => '-10',
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'footer_fourth',
          'weight' => '-8',
        ),
        'boxes-school_leaders' => array(
          'module' => 'boxes',
          'delta' => 'school_leaders',
          'region' => 'footer_fourth',
          'weight' => '-7',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['sitewide'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide_editor';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'administrator' => 'administrator',
        'editor' => 'editor',
        'super editor' => 'super editor',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-editor-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-editor-menu',
          'region' => 'actions',
          'weight' => '10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['sitewide_editor'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'take_action';
  $context->description = 'Take Action Page';
  $context->tag = 'Page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'take-action' => 'take-action',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-7' => array(
          'module' => 'menu_block',
          'delta' => '7',
          'region' => 'content',
          'weight' => '10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Page');
  t('Take Action Page');
  $export['take_action'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'take_action_es';
  $context->description = 'Take action page ES';
  $context->tag = 'es';
  $context->conditions = array(
    'language' => array(
      'values' => array(
        'es' => 'es',
      ),
    ),
    'path' => array(
      'values' => array(
        'tomar-medidas' => 'tomar-medidas',
        'es/tomar-medidas' => 'es/tomar-medidas',
        'es/node/70' => 'es/node/70',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-9' => array(
          'module' => 'menu_block',
          'delta' => '9',
          'region' => 'content',
          'weight' => '0',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Take action page ES');
  t('es');
  $export['take_action_es'] = $context;

  return $export;
}
