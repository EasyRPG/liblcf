#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.68])
AC_INIT([easyrpg-readers], [0.1], [https://github.com/EasyRPG/Readers/issues])

AM_INIT_AUTOMAKE([1.11])
AM_MAINTAINER_MODE([enable])
AM_SILENT_RULES([yes])

AC_CONFIG_MACRO_DIR([m4])
AC_CONFIG_HEADERS([config.h])


# Checks for programs.
AC_PROG_CXX
AC_PROG_RANLIB

# Checks for libraries.
AM_ICONV
AC_CHECK_LIB([expat],[XML_ParserCreate],[],[AC_MSG_ERROR(['expat' is required but it doesn't seem to be installed on this system.])])

# Checks for header files.
AC_CHECK_HEADERS([stdint.h],[],[AC_MSG_ERROR([cannot find stdint.h, bailing out])])
AC_CHECK_HEADERS([expat.h],[],[AC_MSG_ERROR([cannot find expat.h, bailing out])])

# Checks for typedefs, structures, and compiler characteristics.
AC_HEADER_STDBOOL
AC_TYPE_INT16_T
AC_TYPE_INT32_T
AC_TYPE_SIZE_T
AC_TYPE_UINT16_T
AC_TYPE_UINT32_T
AC_TYPE_UINT8_T

# Checks for library functions.
AC_FUNC_ERROR_AT_LINE
AC_CHECK_FUNCS([floor strrchr strtol])

AC_CONFIG_FILES([Makefile
                 include/Makefile
                 src/Makefile])

AC_OUTPUT
