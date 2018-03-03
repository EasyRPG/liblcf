cmake_minimum_required(VERSION 2.8)

project(liblcf CXX)
set(PACKAGE_VERSION 0.5.3)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_BINARY_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${CMAKE_CURRENT_BINARY_DIR}/lib)
list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/builds/cmake/Modules)

# Doxygen
find_package(Doxygen)
if(DOXYGEN_FOUND)
  add_custom_target(liblcf_doc
    ${DOXYGEN_EXECUTABLE} ${CMAKE_CURRENT_SOURCE_DIR}/builds/Doxyfile
    DEPENDS ${SRCS}
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/builds
    COMMENT "Generating API documentation with Doxygen" VERBATIM)
endif()

# endianess checking
if(NOT DEFINED CMAKE_TOOLCHAIN_FILE)
  include(TestBigEndian)
  test_big_endian(WORDS_BIGENDIAN)
  if(WORDS_BIGENDIAN)
    add_definitions(-DWORDS_BIGENDIAN)
  endif()
endif()

# C++11 support is needed
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# source -> library
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/src SRCS)
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/src/generated GEN_SRCS)
add_library(lcf ${GEN_SRCS} ${SRCS})

# icu
# Remove the following lines and uncomment the next line to remove the
# pkg-config dependency.
find_package(PkgConfig REQUIRED)
PKG_CHECK_MODULES(ICU REQUIRED icu-i18n)
#find_package(ICU REQUIRED)
add_definitions(-DLCF_SUPPORT_ICU)
include_directories(${ICU_INCLUDE_DIRS})
target_link_libraries(lcf ${ICU_LIBRARIES})
list(APPEND LIBLCF_DEPS "icu-i18n")

# expat
find_package(Expat)
if (${EXPAT_FOUND})
  add_definitions(-DLCF_SUPPORT_XML)
  include_directories(${EXPAT_INCLUDE_DIR})
  target_link_libraries(lcf ${EXPAT_LIBRARY})
  list(APPEND LIBLCF_DEPS "expat")
endif()

# includes
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src/generated)

# installation
set(LIB_INSTALL_DIR "lib" CACHE STRING "The install directory for libraries")
set(INCLUDE_INSTALL_DIR "include/liblcf" CACHE STRING "The install directory for headers")
mark_as_advanced(LIB_INSTALL_DIR INCLUDE_INSTALL_DIR)
file(GLOB includefiles "${CMAKE_CURRENT_SOURCE_DIR}/src/*.h"
  "${CMAKE_CURRENT_SOURCE_DIR}/src/generated/*.h")
install(FILES ${includefiles} DESTINATION ${INCLUDE_INSTALL_DIR})
install(TARGETS lcf DESTINATION ${LIB_INSTALL_DIR})

# pkg-config file generation
set(PACKAGE_TARNAME ${PROJECT_NAME})
set(prefix "${CMAKE_INSTALL_PREFIX}")
set(exec_prefix "\${prefix}")
set(libdir "\${exec_prefix}/${LIB_INSTALL_DIR}")
set(includedir "\${prefix}/${INCLUDE_INSTALL_DIR}")
string(REPLACE ";" " " AX_PACKAGE_REQUIRES_PRIVATE "${LIBLCF_DEPS}")
configure_file(builds/liblcf.pc.in ${CMAKE_BINARY_DIR}/liblcf.pc @ONLY)
install(FILES ${CMAKE_BINARY_DIR}/liblcf.pc DESTINATION ${LIB_INSTALL_DIR}/pkgconfig)

# tests
file(GLOB TEST_FILES ${CMAKE_CURRENT_SOURCE_DIR}/tests/*.cpp)
add_executable(test_runner EXCLUDE_FROM_ALL ${TEST_FILES})
target_link_libraries(test_runner lcf ${ICU_LIBRARIES} ${EXPAT_LIBRARY})
add_custom_target(check COMMAND ${EXECUTABLE_OUTPUT_PATH}/test_runner)
add_dependencies(check test_runner)
