<?php // vim: et
/* The format is:
 * array(
 *     "major release number" => array(
 *         "release" => array(
 *             "source/windows" => array(
 *                 "filename" => "filename.tar.bz2",
 *                 "name"     => "package name",
 *                 "md5"      => "crc32, right?",
 *                 "date"     => "this files release date",
 *                 "note"     => "this file was updated 29feb due to broken phar files..",
 *             ),
 *             "announcement" => "bool, release announcement exists in releases/?"
 *         ),
 *     ),
 * );
 */

/* PHP 5.4 Release */
$PHP_5_4_RC = ''; // set to false when there is no RC
$PHP_5_4_RC_DATE = '';

$PHP_5_4_VERSION         = "5.4.6";
$PHP_5_4_DATE            = "16 Aug 2012";

$PHP_5_4_MD5     = array(
                       "tar.bz2"       => "c9aa0f4996d1b91ee9e45afcfaeb5d2e",
                       "tar.gz"        => "efe59afb73190c9bd6d50614998ffceb",
);

/* PHP 5.3 Release */
$PHP_5_3_RC      = '';
$PHP_5_3_RC_DATE = '';

$PHP_5_3_VERSION         = "5.3.16";
$PHP_5_3_DATE            = "16 Aug 2012";

$PHP_5_3_MD5     = array(
                       "tar.bz2"       => "99cfd78531643027f60c900e792d21be",
                       "tar.gz"        => "59b776edeac2897ebe3712dcc94b6706",
);

$RELEASES = array(
    5 => array(
        $PHP_5_4_VERSION => array(
            "announcement" => true,
            "source" => array(
                array(
                    "filename" => "php-$PHP_5_4_VERSION.tar.bz2",
                    "name"     => "PHP $PHP_5_4_VERSION (tar.bz2)",
                    "md5"      => $PHP_5_4_MD5["tar.bz2"],
                    "date"     => $PHP_5_4_DATE,
                ),
                array(
                    "filename" => "php-$PHP_5_4_VERSION.tar.gz",
                    "name"     => "PHP $PHP_5_4_VERSION (tar.gz)",
                    "md5"      => $PHP_5_4_MD5["tar.gz"],
                    "date"     => $PHP_5_4_DATE,
                ),
                array(
                    "link"  => 'http://windows.php.net/download/#php-5.4',
                    "name"  => "Windows $PHP_5_4_VERSION binaries and source",
                ),
            ),
        ),
        $PHP_5_3_VERSION => array(
            "announcement" => true,
            "source" => array(
                array(
                    "filename" => "php-$PHP_5_3_VERSION.tar.bz2",
                    "name"     => "PHP $PHP_5_3_VERSION (tar.bz2)",
                    "md5"      => $PHP_5_3_MD5["tar.bz2"],
                    "date"     => $PHP_5_3_DATE,
                ),
                array(
                    "filename" => "php-$PHP_5_3_VERSION.tar.gz",
                    "name"     => "PHP $PHP_5_3_VERSION (tar.gz)",
                    "md5"      => $PHP_5_3_MD5["tar.gz"],
                    "date"     => $PHP_5_3_DATE,
                ),
                array(
                    "link"  => 'http://windows.php.net/download/#php-5.3',
                    "name"  => "Windows $PHP_5_3_VERSION binaries and source",
                ),
            ),
        ),
    ),
);

$PHP_5_VERSION = $PHP_5_4_VERSION; // Some scripts require this set
$PHP_5_DATE    = $PHP_5_4_DATE; // Used by buumpRelease script
$PHP_5_RC_DATE = $PHP_5_4_RC_DATE; // Used by master

