# - Try to find Iconv
# Once done this will define
# 
#  ICONV_FOUND - system has Iconv
#  ICONV_INCLUDE_DIR - the Iconv include directory
#  ICONV_LIBRARIES - Link these to use Iconv
#  ICONV_VERSION - Iconv version string
#  ICONV_SECOND_ARGUMENT_IS_CONST - the second argument for iconv() is const
# 

include(CheckCSourceCompiles)

find_path(ICONV_INCLUDE_DIR iconv.h)
find_library(ICONV_LIBRARIES NAMES iconv libiconv libiconv-2 c)

# handle the QUIETLY and REQUIRED arguments and set ICONV_FOUND to TRUE if
# all listed variables are TRUE
include(FindPackageHandleStandardArgs)
FIND_PACKAGE_HANDLE_STANDARD_ARGS(ICONV REQUIRED_VARS ICONV_LIBRARIES ICONV_INCLUDE_DIR
                                          VERSION_VAR ICONV_VERSION)

if (ICONV_FOUND)
  set(CMAKE_REQUIRED_INCLUDES ${ICONV_INCLUDE_DIR})
  set(CMAKE_REQUIRED_LIBRARIES ${ICONV_LIBRARIES})

  check_c_source_compiles("
  #include <iconv.h>
  int main(){
    iconv_t conv = 0;
    const char* in = 0;
    size_t ilen = 0;
    char* out = 0;
    size_t olen = 0;
    iconv(conv, &in, &ilen, &out, &olen);
    return 0;
  }
" ICONV_SECOND_ARGUMENT_IS_CONST )

  set(CMAKE_REQUIRED_INCLUDES)
  set(CMAKE_REQUIRED_LIBRARIES)
endif(ICONV_FOUND)

mark_as_advanced(
  ICONV_INCLUDE_DIR
  ICONV_LIBRARIES
  ICONV_SECOND_ARGUMENT_IS_CONST
)
