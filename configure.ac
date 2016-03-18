#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
AC_INIT([liblcf],[0.4.1],[https://github.com/EasyRPG/liblcf/issues],[liblcf],[https://easy-rpg.org/])

AC_CONFIG_AUX_DIR([builds/autoconf])
AM_INIT_AUTOMAKE([1.11.4 foreign subdir-objects -Wall -Werror])
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

# Checks for libraries.
AC_ARG_ENABLE([icu],[AS_HELP_STRING([--disable-icu],[Disable ICU encoding detection (fallback to iconv)])])
AS_IF([test "x$enable_icu" != "xno"],[
	AX_PKG_CHECK_MODULES([ICU],[],[icu-i18n],[AC_DEFINE([LCF_SUPPORT_ICU],[1],[Enable encoding detection (ICU)])])
])

AC_ARG_ENABLE([xml],[AS_HELP_STRING([--disable-xml],[Disable XML reading support (expat)])])
AS_IF([test "x$enable_xml" != "xno"],[
	AX_PKG_CHECK_MODULES([EXPAT],[],[expat >= 2.1],[AC_DEFINE([LCF_SUPPORT_XML],[1],[Enable XML reading support (expat)])])
])

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

# Files to generate
AC_CONFIG_FILES([Makefile
                 builds/liblcf.pc])

AC_OUTPUT
