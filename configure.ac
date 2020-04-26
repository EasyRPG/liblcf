#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
AC_INIT([liblcf],[0.6.2],[https://github.com/EasyRPG/liblcf/issues],[liblcf],[https://easyrpg.org/])

AC_CONFIG_AUX_DIR([builds/autoconf])
AM_INIT_AUTOMAKE([1.11.4 foreign subdir-objects -Wall dist-xz])
AM_MAINTAINER_MODE([enable])
AM_SILENT_RULES([yes])

AC_CONFIG_MACRO_DIR([builds/autoconf/m4])
AC_CONFIG_SRCDIR([src/data.cpp])
AC_CONFIG_HEADERS([config.h])
AC_LANG([C++])

# Checks for programs.
AM_PROG_AR
AC_PROG_CXXCPP
AC_PROG_CXX
LT_INIT([win32-dll])
AM_CONDITIONAL(CROSS_COMPILING,[test "x$cross_compiling" = "xyes"])

# Checks for libraries.
AC_ARG_ENABLE([icu],[AS_HELP_STRING([--disable-icu],[Disable ICU encoding detection (fallback to iconv) [default=no]])])
AS_IF([test "x$enable_icu" != "xno"],[
	AX_PKG_CHECK_MODULES([ICU],[],[icu-i18n],[AC_DEFINE([LCF_SUPPORT_ICU],[1],[Enable encoding detection (ICU)])])
])

AC_ARG_ENABLE([xml],[AS_HELP_STRING([--disable-xml],[Disable XML reading support (expat) [default=no]])])
AS_IF([test "x$enable_xml" != "xno"],[
	AX_PKG_CHECK_MODULES([EXPAT],[],[expat >= 2.1],[AC_DEFINE([LCF_SUPPORT_XML],[1],[Enable XML reading support (expat)])])
])

# Add mime types
AC_ARG_ENABLE([update-mimedb],[AS_HELP_STRING([--disable-update-mimedb],[Do not run update-mime-database after install [default=no]])])
AS_IF([test "x$enable_update_mimedb" != "xno" && test "x$cross_compiling" = "xno"],[
	AC_PATH_PROG(UPDATE_MIME_DATABASE, update-mime-database, no)
	AS_IF([test "x$UPDATE_MIME_DATABASE" = "xno"],[
		enable_update_mimedb=no
		AC_MSG_WARN(Could not find the update-mime-database program in your PATH. Your mime database will not be updated upon install.)
	])
])
AM_CONDITIONAL(ENABLE_UPDATE_MIMEDB,[test x$enable_update_mimedb != xno])

# Checks for header files.
AC_CHECK_HEADERS([stdint.h],[],[AC_MSG_ERROR([cannot find stdint.h, bailing out])])

# Checks for typedefs, structures, and compiler characteristics.
AC_CHECK_HEADER_STDBOOL
AC_TYPE_INT16_T
AC_TYPE_INT32_T
AC_TYPE_SIZE_T
AC_TYPE_UINT16_T
AC_TYPE_UINT32_T
AC_TYPE_UINT8_T
AC_C_BIGENDIAN

# Checks for library functions.
AC_CHECK_FUNCS([floor strrchr strtol])

# Distribute additional flags among Makefiles
AC_SUBST([AM_CPPFLAGS])
AC_SUBST([AM_CXXFLAGS])
AC_SUBST([AM_LDFLAGS])

# liblcf-config.cmake (use empty postfix)
AC_SUBST([CMAKE_DEBUG_POSTFIX])

# Files to generate
AC_CONFIG_FILES([Makefile
                 builds/liblcf.pc
                 builds/liblcf-config.cmake])

AC_OUTPUT
