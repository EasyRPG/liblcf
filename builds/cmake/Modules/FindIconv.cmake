list(REVERSE CMAKE_SYSTEM_PREFIX_PATH)

find_path(ICONV_INCLUDE_DIR iconv.h)
find_library(ICONV_LIBRARY iconv)

list(REVERSE CMAKE_SYSTEM_PREFIX_PATH)

if(EXISTS "${ICONV_LIBRARY}")
	get_filename_component(library_path "${ICONV_LIBRARY}" PATH)
	get_filename_component(library_prefix "${library_path}/.." ABSOLUTE)
	set(ICONV_INCLUDE_DIR "${library_prefix}/include")
else()
	unset(ICONV_LIBRARY CACHE)
endif()

include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(Iconv
	REQUIRED_VARS ICONV_INCLUDE_DIR)
