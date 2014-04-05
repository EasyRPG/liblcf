#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
AC_INIT([liblcf],[0.1.3],[https://github.com/EasyRPG/liblcf/issues],[liblcf],[https://easy-rpg.org/])

AC_CONFIG_AUX_DIR([builds/autoconf])
AM_INIT_AUTOMAKE([1.11.4 foreign subdir-objects -Wall -Werror])
AM_MAINTAINER_MODE([enable])
AM_SILENT_RULES([yes])

AC_CONFIG_MACRO_DIR([builds/autoconf/m4])
AC_CONFIG_SRCDIR([src/data.cpp])
AC_CONFIG_HEADERS([config.h])

# Checks for programs.
AM_PROG_AR
LT_INIT([win32-dll])
AC_PROG_CXX

# Checks for libraries.
AM_ICONV

AC_ARG_ENABLE([xml],[AS_HELP_STRING([--disable-xml],[Disable XML reading support (expat)])])
AS_IF([test "x$enable_xml" != "xno"],[
	PKG_CHECK_MODULES([EXPAT],[expat],[AC_DEFINE([LCF_SUPPORT_XML],[1],[Enable XML reading support (expat)])])
])

# Check for endianess
AC_C_BIGENDIAN
AS_IF([test "x$ac_cv_c_bigendian" = "xyes"],[
	AC_DEFINE([LCF_BIG_ENDIAN],[1],[Define if byte order is big-endian])
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

# Checks for library functions.
AC_CHECK_FUNCS([floor strrchr strtol])

AC_CONFIG_FILES([Makefile
                 src/Makefile
                 tests/Makefile
                 builds/liblcf.pc])

AC_OUTPUT
