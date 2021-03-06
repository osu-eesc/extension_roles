<?php

/**
 * Implementation of hook_user_default_roles().
 */
function extension_roles_user_default_roles() {
  $roles = array();

  // Exported role: administrator
  $roles['administrator'] = array(
    'name' => 'administrator',
  );

  // Exported role: content editor
  $roles['content editor'] = array(
    'name' => 'content editor',
  );

  // Exported role: site manager
  $roles['site manager'] = array(
    'name' => 'site manager',
  );

  return $roles;
}
