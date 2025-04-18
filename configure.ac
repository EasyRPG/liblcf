#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
AC_INIT([liblcf],[0.8.1],[https://github.com/EasyRPG/liblcf/issues],[liblcf],[https://easyrpg.org/])

AC_CONFIG_AUX_DIR([builds/autoconf])
AM_INIT_AUTOMAKE([1.11.4 foreign subdir-objects -Wall dist-xz])
AM_MAINTAINER_MODE([enable])
AM_SILENT_RULES([yes])

AC_CONFIG_MACRO_DIR([builds/autoconf/m4])
AC_CONFIG_SRCDIR([src/ldb_reader.cpp])
AC_LANG([C++])

# Checks for programs.
AM_PROG_AR
AC_PROG_CXXCPP
AC_PROG_CXX
LT_INIT([win32-dll])
AM_CONDITIONAL(CROSS_COMPILING,[test "x$cross_compiling" = "xyes"])

# Checks for libraries.
AC_SUBST([LCF_SUPPORT_ICU],[0])
AC_ARG_ENABLE([icu],[AS_HELP_STRING([--disable-icu],[Disable ICU encoding handling (only windows-1252 supported) [default=no]])])
AS_IF([test "x$enable_icu" != "xno"],[
	AX_PKG_CHECK_MODULES([ICU],[],[icu-i18n],[LCF_SUPPORT_ICU=1])
])

AC_SUBST([LCF_SUPPORT_XML],[0])
AC_ARG_ENABLE([xml],[AS_HELP_STRING([--disable-xml],[Disable XML reading support (expat) [default=no]])])
AS_IF([test "x$enable_xml" != "xno"],[
	AX_PKG_CHECK_MODULES([EXPAT],[],[expat >= 2.1],[LCF_SUPPORT_XML=1])
])
AM_CONDITIONAL(SUPPORT_XML,[test $LCF_SUPPORT_XML == 1])

AC_SUBST([LCF_SUPPORT_INI],[0])
AC_ARG_ENABLE([ini],[AS_HELP_STRING([--disable-ini],[Disable INI reading support (inih) [default=no]])])
AS_IF([test "x$enable_ini" != "xno"],[
	AX_PKG_CHECK_MODULES([INIH],[],[inih],[LCF_SUPPORT_INI=1])
])
AM_CONDITIONAL(SUPPORT_INI,[test $LCF_SUPPORT_INI == 1])

# Tools
AC_ARG_ENABLE([tools],[AS_HELP_STRING([--disable-tools],[Do not build and install the tools [default=no]])])
AM_CONDITIONAL(ENABLE_TOOLS,[test "x$enable_tools" != "xno"])

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

# Files to generate
AC_CONFIG_FILES([Makefile
		builds/liblcf.pc
		builds/autoconf/liblcf-config.cmake
		builds/autoconf/liblcf-config-version.cmake
		src/lcf/config.h:builds/config.h.in])

AC_OUTPUT
