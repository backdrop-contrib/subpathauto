# Sub-path Auto

Backdrop matches only full URLs when creating SEO-friendly aliases. This module
extends that behavior by also matching known sub-paths and replacing them with
their respective alias.

For example, if user/1 is aliased to users/admin, this module rewrites the link
to the user contact page user/1/contact to use the aliased URL
users/admin/contact instead. This also includes Views URLs taking a node as
argument (e.g. node/%/yourview), in short, every URL that is based on, or
extends, an existing alias. In combination with the Pathauto module it is
possible to get rid of all remaining exposed internal non-administrative URLs.

## Installation

- Install this module using the [official Backdrop CMS instructions](https://backdropcms.org/guide/modules).

## Issues

    - While Sub-pathauto works when `backdrop_get_normal_path()` is called, if
      `backdrop_get_path_alias()` is called, the hook to alter URLs is not
      invoked. Functionality that uses this function to compare things like page
      visibility settings will not match the sub-path processed URL. This is due
      to [a core bug](https://github.com/backdrop/backdrop-issues/issues/1419).
    - Bugs and Feature requests should be reported in the [Issue Queue](https://github.com/backdrop-contrib/subpathauto/issues)

## Current Maintainers

- [Laryn Kragt Bakker](https://github.com/laryn)

## Credits

- Ported to Backdrop by [Laryn Kragt Bakker](https://github.com/laryn)
- Maintained for Drupal 7 by [dave reid](https://www.drupal.org/u/dave-reid),
  [nickdickinsonwilde](https://www.drupal.org/u/nickdickinsonwilde), and
  [lauriii](https://www.drupal.org/u/lauriii).
- Original module (Subpath URL alias) written by [Stefan M. Kudwien](https://www.drupal.org/u/smk-ka)

## License

This project is GPL v2 software. See the LICENSE.txt file in this directory for
complete text.
