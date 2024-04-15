#.rst:
# Findinih
# --------
#
# Find the inih Library
#
# Imported Targets
# ^^^^^^^^^^^^^^^^
#
# This module defines the following :prop_tgt:`IMPORTED` targets:
#
# ``inih::inih``
#   The ``inih`` library, if found.
#
# Result Variables
# ^^^^^^^^^^^^^^^^
#
# This module will set the following variables in your project:
#
# ``INIH_INCLUDE_DIRS``
#   where to find inih headers.
# ``INIH_LIBRARIES``
#   the libraries to link against to use inih.
# ``INIH_FOUND``
#   true if the inih headers and libraries were found.

find_package(PkgConfig QUIET)

pkg_check_modules(PC_INIH QUIET libinih)

# Look for the header file.
find_path(INIH_INCLUDE_DIR
	NAMES ini.h
	HINTS ${PC_INIH_INCLUDE_DIRS})

# Look for the library.
# Allow INIH_LIBRARY to be set manually, as the location of the inih library
if(NOT INIH_LIBRARY)
	find_library(INIH_LIBRARY
		NAMES libinih inih
		HINTS ${PC_INIH_LIBRARY_DIRS})
endif()

include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(inih
	REQUIRED_VARS INIH_LIBRARY INIH_INCLUDE_DIR)

if(INIH_FOUND)
	set(INIH_INCLUDE_DIRS ${INIH_INCLUDE_DIR})

	if(NOT INIH_LIBRARIES)
		set(INIH_LIBRARIES ${INIH_LIBRARIES})
	endif()

	if(NOT TARGET inih::inih)
		add_library(inih::inih UNKNOWN IMPORTED)
		set_target_properties(inih::inih PROPERTIES
			INTERFACE_INCLUDE_DIRECTORIES "${INIH_INCLUDE_DIRS}"
			IMPORTED_LOCATION "${INIH_LIBRARY}")
	endif()
endif()

mark_as_advanced(INIH_INCLUDE_DIR INIH_LIBRARY)
