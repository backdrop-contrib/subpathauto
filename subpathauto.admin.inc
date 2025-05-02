<?php

/**
 * @file
 * Admin page callbacks for the subpathauto module.
 */

/**
 * Form builder; Configure the sub-path URL alias settings.
 *
 * @ingroup forms
 * @see system_settings_form()
 */
function subpathauto_settings_form($form, &$form_state) {
  $config = config('subpathauto.settings');
  $form['#config'] = 'subpathauto.settings';
  $form['depth'] = array(
    '#type' => 'select',
    '#title' => t('Maximum depth of sub-paths to alias'),
    '#options' => array_merge(array(0 => t('Disabled')), range(1, MENU_MAX_DEPTH - 1)),
    '#default_value' => $config->get('depth'),
    '#description' => t('Increasing this value may decrease performance.'),
  );

  $form['ignore_admin'] = array(
    '#type' => 'checkbox',
    '#title' => t('Skip administration paths from sub-path processing.'),
    '#default_value' => $config->get('ignore_admin'),
  );

  return system_settings_form($form);
}
