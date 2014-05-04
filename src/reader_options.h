/*
 * Copyright (c) 2014 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

#ifndef LCF_OPTIONS_H
#define LCF_OPTIONS_H

/** INI configuration filename. */
#define INI_NAME "RPG_RT.ini"
/** Read game title from ini file. */
#define READ_INI_GAME_TITLE 1
/** Database filename. */
#define DATABASE_NAME "RPG_RT.ldb"
/** Map tree filename. */
#define TREEMAP_NAME "RPG_RT.lmt"

/*
 * Includes GNU Autotools build configuration parameters.
 * This option may have defined LCF_SUPPORT_XML and others.
 */
#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

/**
 * Enables support for XML file reading and writing (deprecated).
 * This option adds libexpat as a dependency.
 */
//#ifndef LCF_SUPPORT_XML
//#  define LCF_SUPPORT_XML
//#endif

/** Enables big endian byte order for Wii port (deprecated). */
#if defined(GEKKO) && !defined(LCF_BIG_ENDIAN)
#  define LCF_BIG_ENDIAN
#endif

/**
 * Outputs information about read chunks on stdout during parsing
 */
//#define LCF_DEBUG_TRACE

#endif
