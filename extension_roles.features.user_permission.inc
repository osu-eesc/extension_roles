<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function extension_roles_user_default_permissions() {
  $permissions = array();

  // Exported permission: Use PHP input for field settings (dangerous - grant with care)
  $permissions['Use PHP input for field settings (dangerous - grant with care)'] = array(
    'name' => 'Use PHP input for field settings (dangerous - grant with care)',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: access administration menu
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'site manager',
    ),
  );

  // Exported permission: access administration pages
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'site manager',
    ),
  );

  // Exported permission: access all views
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'content editor',
      '2' => 'site manager',
    ),
  );

  // Exported permission: access content
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'content editor',
      '4' => 'site manager',
    ),
  );

  // Exported permission: access extension settings blocks
  $permissions['access extension settings blocks'] = array(
    'name' => 'access extension settings blocks',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'content editor',
      '2' => 'site manager',
    ),
  );

  // Exported permission: access news feeds
  $permissions['access news feeds'] = array(
    'name' => 'access news feeds',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'content editor',
      '4' => 'site manager',
    ),
  );

  // Exported permission: access printer-friendly version
  $permissions['access printer-friendly version'] = array(
    'name' => 'access printer-friendly version',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'content editor',
      '4' => 'site manager',
    ),
  );

  // Exported permission: access site map
  $permissions['access site map'] = array(
    'name' => 'access site map',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'content editor',
      '4' => 'site manager',
    ),
  );

  // Exported permission: access site reports
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'site manager',
    ),
  );

  // Exported permission: access skinr
  $permissions['access skinr'] = array(
    'name' => 'access skinr',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: access skinr classes
  $permissions['access skinr classes'] = array(
    'name' => 'access skinr classes',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: access user profiles
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'site manager',
    ),
  );

  // Exported permission: add content to books
  $permissions['add content to books'] = array(
    'name' => 'add content to books',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'content editor',
      '2' => 'site manager',
    ),
  );

  // Exported permission: administer AaE settings
  $permissions['administer AaE settings'] = array(
    'name' => 'administer AaE settings',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer actions
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer addtoany
  $permissions['administer addtoany'] = array(
    'name' => 'administer addtoany',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer blocks
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'site manager',
    ),
  );

  // Exported permission: administer book outlines
  $permissions['administer book outlines'] = array(
    'name' => 'administer book outlines',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'content editor',
      '2' => 'site manager',
    ),
  );

  // Exported permission: administer content types
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer date tools
  $permissions['administer date tools'] = array(
    'name' => 'administer date tools',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer extension banners
  $permissions['administer extension banners'] = array(
    'name' => 'administer extension banners',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'site manager',
    ),
  );

  // Exported permission: administer extension global content
  $permissions['administer extension global content'] = array(
    'name' => 'administer extension global content',
    'roles' => array(),
  );

  // Exported permission: administer extension settings
  $permissions['administer extension settings'] = array(
    'name' => 'administer extension settings',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer features
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(),
  );

  // Exported permission: administer feeds
  $permissions['administer feeds'] = array(
    'name' => 'administer feeds',
    'roles' => array(),
  );

  // Exported permission: administer files
  $permissions['administer files'] = array(
    'name' => 'administer files',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'site manager',
    ),
  );

  // Exported permission: administer filters
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer google analytics
  $permissions['administer google analytics'] = array(
    'name' => 'administer google analytics',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer imageapi
  $permissions['administer imageapi'] = array(
    'name' => 'administer imageapi',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer imagecache
  $permissions['administer imagecache'] = array(
    'name' => 'administer imagecache',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer lightbox2
  $permissions['administer lightbox2'] = array(
    'name' => 'administer lightbox2',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer linkit
  $permissions['administer linkit'] = array(
    'name' => 'administer linkit',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer menu
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'content editor',
    ),
  );

  // Exported permission: administer news feeds
  $permissions['administer news feeds'] = array(
    'name' => 'administer news feeds',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'site manager',
    ),
  );

  // Exported permission: administer nodes
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'content editor',
      '2' => 'site manager',
    ),
  );

  // Exported permission: administer page titles
  $permissions['administer page titles'] = array(
    'name' => 'administer page titles',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer pathauto
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer permissions
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer redirects
  $permissions['administer redirects'] = array(
    'name' => 'administer redirects',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer search
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer site configuration
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer skinr
  $permissions['administer skinr'] = array(
    'name' => 'administer skinr',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer taxonomy
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'site manager',
    ),
  );

  // Exported permission: administer url aliases
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer users
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'site manager',
    ),
  );

  // Exported permission: administer views
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'site manager',
    ),
  );

  // Exported permission: administer xmlsitemap
  $permissions['administer xmlsitemap'] = array(
    'name' => 'administer xmlsitemap',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: clear faculty_staff_import feeds
  $permissions['clear faculty_staff_import feeds'] = array(
    'name' => 'clear faculty_staff_import feeds',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: clear group_location_import feeds
  $permissions['clear group_location_import feeds'] = array(
    'name' => 'clear group_location_import feeds',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: collapse format fieldset by default
  $permissions['collapse format fieldset by default'] = array(
    'name' => 'collapse format fieldset by default',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'site manager',
    ),
  );

  // Exported permission: collapsible format selection
  $permissions['collapsible format selection'] = array(
    'name' => 'collapsible format selection',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'site manager',
    ),
  );

  // Exported permission: create new books
  $permissions['create new books'] = array(
    'name' => 'create new books',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'content editor',
      '2' => 'site manager',
    ),
  );

  // Exported permission: create page content
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'content editor',
      '2' => 'site manager',
    ),
  );

  // Exported permission: create site_announcement content
  $permissions['create site_announcement content'] = array(
    'name' => 'create site_announcement content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'content editor',
      '2' => 'site manager',
    ),
  );

  // Exported permission: create url aliases
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'content editor',
      '2' => 'site manager',
    ),
  );

  // Exported permission: delete any page content
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'content editor',
      '2' => 'site manager',
    ),
  );

  // Exported permission: delete any site_announcement content
  $permissions['delete any site_announcement content'] = array(
    'name' => 'delete any site_announcement content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'content editor',
      '2' => 'site manager',
    ),
  );

  // Exported permission: delete own page content
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'content editor',
      '2' => 'site manager',
    ),
  );

  // Exported permission: delete own site_announcement content
  $permissions['delete own site_announcement content'] = array(
    'name' => 'delete own site_announcement content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'content editor',
      '2' => 'site manager',
    ),
  );

  // Exported permission: delete revisions
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'content editor',
      '2' => 'site manager',
    ),
  );

  // Exported permission: display drupal links
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(),
  );

  // Exported permission: edit any page content
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'content editor',
      '2' => 'site manager',
    ),
  );

  // Exported permission: edit any site_announcement content
  $permissions['edit any site_announcement content'] = array(
    'name' => 'edit any site_announcement content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'content editor',
      '2' => 'site manager',
    ),
  );

  // Exported permission: edit own page content
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'content editor',
      '2' => 'site manager',
    ),
  );

  // Exported permission: edit own site_announcement content
  $permissions['edit own site_announcement content'] = array(
    'name' => 'edit own site_announcement content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'content editor',
      '2' => 'site manager',
    ),
  );

  // Exported permission: flush imagecache
  $permissions['flush imagecache'] = array(
    'name' => 'flush imagecache',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: grant content access
  $permissions['grant content access'] = array(
    'name' => 'grant content access',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: import faculty_staff_import feeds
  $permissions['import faculty_staff_import feeds'] = array(
    'name' => 'import faculty_staff_import feeds',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: import group_location_import feeds
  $permissions['import group_location_import feeds'] = array(
    'name' => 'import group_location_import feeds',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: manage features
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: revert revisions
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'content editor',
      '2' => 'site manager',
    ),
  );

  // Exported permission: search content
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'content editor',
      '2' => 'site manager',
    ),
  );

  // Exported permission: select different theme
  $permissions['select different theme'] = array(
    'name' => 'select different theme',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: set page title
  $permissions['set page title'] = array(
    'name' => 'set page title',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: show format selection for blocks
  $permissions['show format selection for blocks'] = array(
    'name' => 'show format selection for blocks',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: show format selection for comments
  $permissions['show format selection for comments'] = array(
    'name' => 'show format selection for comments',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: show format selection for nodes
  $permissions['show format selection for nodes'] = array(
    'name' => 'show format selection for nodes',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: show format tips
  $permissions['show format tips'] = array(
    'name' => 'show format tips',
    'roles' => array(),
  );

  // Exported permission: show more format tips link
  $permissions['show more format tips link'] = array(
    'name' => 'show more format tips link',
    'roles' => array(),
  );

  // Exported permission: upload files
  $permissions['upload files'] = array(
    'name' => 'upload files',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'content editor',
      '2' => 'site manager',
    ),
  );

  // Exported permission: use PHP for block visibility
  $permissions['use PHP for block visibility'] = array(
    'name' => 'use PHP for block visibility',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: use advanced search
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: use views exporter
  $permissions['use views exporter'] = array(
    'name' => 'use views exporter',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: view advanced help index
  $permissions['view advanced help index'] = array(
    'name' => 'view advanced help index',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'content editor',
      '2' => 'site manager',
    ),
  );

  // Exported permission: view advanced help popup
  $permissions['view advanced help popup'] = array(
    'name' => 'view advanced help popup',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'content editor',
      '2' => 'site manager',
    ),
  );

  // Exported permission: view advanced help topic
  $permissions['view advanced help topic'] = array(
    'name' => 'view advanced help topic',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'content editor',
      '2' => 'site manager',
    ),
  );

  // Exported permission: view date repeats
  $permissions['view date repeats'] = array(
    'name' => 'view date repeats',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'content editor',
      '4' => 'site manager',
    ),
  );

  // Exported permission: view imagecache page_image
  $permissions['view imagecache page_image'] = array(
    'name' => 'view imagecache page_image',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'content editor',
      '4' => 'site manager',
    ),
  );

  // Exported permission: view imagecache page_lightbox
  $permissions['view imagecache page_lightbox'] = array(
    'name' => 'view imagecache page_lightbox',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'content editor',
      '4' => 'site manager',
    ),
  );

  // Exported permission: view imagecache preview_500
  $permissions['view imagecache preview_500'] = array(
    'name' => 'view imagecache preview_500',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'content editor',
      '4' => 'site manager',
    ),
  );

  // Exported permission: view imagecache thumbnail_100
  $permissions['view imagecache thumbnail_100'] = array(
    'name' => 'view imagecache thumbnail_100',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'content editor',
      '4' => 'site manager',
    ),
  );

  // Exported permission: view revisions
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'content editor',
      '2' => 'site manager',
    ),
  );

  // Exported permission: view uploaded files
  $permissions['view uploaded files'] = array(
    'name' => 'view uploaded files',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'content editor',
      '2' => 'site manager',
    ),
  );

  return $permissions;
}
