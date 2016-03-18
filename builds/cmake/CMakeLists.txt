cmake_minimum_required(VERSION 2.8)

project(liblcf C CXX)
set(VERSION 0.4.1)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_BINARY_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${CMAKE_CURRENT_BINARY_DIR}/lib)
#link_directories(lib)
#cmake_policy(CMP0015 NEW)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../../src/generated)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/Modules")

# Doxygen
find_package(Doxygen)
if(DOXYGEN_FOUND)
  add_custom_target(liblcf_doc
    ${DOXYGEN_EXECUTABLE} ${CMAKE_CURRENT_SOURCE_DIR}/../Doxyfile
    DEPENDS ${SRCS}
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/..
    COMMENT "Generating API documentation with Doxygen" VERBATIM)
endif(DOXYGEN_FOUND)

# endianess checking
if(NOT DEFINED CMAKE_TOOLCHAIN_FILE)
  include(TestBigEndian)
  test_big_endian(WORDS_BIGENDIAN)
  if(WORDS_BIGENDIAN)
    add_definitions(-D WORDS_BIGENDIAN=1)
  endif()
endif()

find_package(PythonInterp)
set(GENERATED_OUTPUT_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../../src/generated)
if(PYTHONINTERP_FOUND)
  set(GENERATE_PY "${CMAKE_CURRENT_SOURCE_DIR}/../../generator/generate.py")

  file(GLOB tmpl "${CMAKE_CURRENT_SOURC_DIR}/../../generator/templates/*.tmpl")
  file(GLOB csv "${CMAKE_CURRENT_SOURC_DIR}/../../generator/csv/*.csv")

  execute_process(
    COMMAND "${PYTHON_EXECUTABLE}" "${GENERATE_PY}" "-l"
    WORKING_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/../../generator"
    OUTPUT_VARIABLE gen_list)
  string(REPLACE "\n" ";" gen_list "${gen_list}")
  foreach(i ${gen_list})
    if(${i} MATCHES "\\.cpp")
      list(APPEND GEN_SRCS ${GENERATED_OUTPUT_DIR}/${i})
    endif()
  endforeach()

  add_custom_command(
    OUTPUT ${GEN_SRCS}
    COMMAND ${PYTHON_EXECUTABLE} ${GENERATE_PY}
    MAIN_DEPENDENCT ${GENERATE_PY}
    DEPENDS ${GENERATE_PY} ${tmpl} ${csv}
    WORKING_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/../../generator")
else()
  aux_source_directory(${GENERATED_OUTPUT_DIR} GEN_SRCS)
endif()

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}/../../src" SRCS)
add_library(${PROJECT_NAME} STATIC ${GEN_SRCS} ${SRCS})

include(CheckCXXCompilerFlag)
CHECK_CXX_COMPILER_FLAG("-std=c++11" COMPILER_SUPPORTS_CXX11)
if(COMPILER_SUPPORTS_CXX11)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
else()
    message(STATUS "The compiler ${CMAKE_CXX_COMPILER} has no C++11 support.")
endif()

# icu
# Remove the following lines and uncomment the next line to remove the
# pkg-config dependency.
find_package(PkgConfig REQUIRED)
PKG_CHECK_MODULES(ICU REQUIRED icu-i18n)
#find_package(ICU REQUIRED)
add_definitions(-D LCF_SUPPORT_ICU=1)
include_directories(BEFORE ${ICU_INCLUDE_DIRS})
target_link_libraries(${PROJECT_NAME} ${ICU_LIBRARIES})

# expat
find_package(Expat)
include_directories(${EXPAT_INCLUDE_DIR})
target_link_libraries(${PROJECT_NAME} ${EXPAT_LIBRARY})

# installation
set(LIB_INSTALL_DIR "lib" CACHE STRING "The install directory for libraries")
set(INCLUDE_INSTALL_DIR "include" CACHE STRING "The install directory for headers")
mark_as_advanced(LIB_INSTALL_DIR INCLUDE_INSTALL_DIR)
file(GLOB includefiles "${CMAKE_CURRENT_SOURCE_DIR}/../../src/*.h"
  "${CMAKE_CURRENT_SOURCE_DIR}/../../src/generated/*.h")
install(FILES ${includefiles} DESTINATION ${INCLUDE_INSTALL_DIR})
install(TARGETS ${PROJECT_NAME} ARCHIVE DESTINATION ${LIB_INSTALL_DIR})

# pkg-config file generation
set(PACKAGE_TARNAME ${PROJECT_NAME})
set(PACKAGE_VERSION ${VERSION})
set(prefix "${CMAKE_INSTALL_PREFIX}")
set(exec_prefix "\${prefix}")
set(libdir "\${exec_prefix}/${LIB_INSTALL_DIR}")
set(includedir "\${prefix}/${INCLUDE_INSTALL_DIR}")
configure_file(../liblcf.pc.in ${CMAKE_BINARY_DIR}/liblcf.pc @ONLY)
install(FILES ${CMAKE_BINARY_DIR}/liblcf.pc
  DESTINATION ${LIB_INSTALL_DIR}/pkgconfig)

# test
enable_testing()

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../../src)

function(CXX_TEST target libs)
  get_filename_component(name ${target} NAME_WE)
  add_executable(test_${name} ${target})
  target_link_libraries(test_${name} ${PROJECT_NAME} ${libs})
  add_test(
    NAME test_${name}
    WORKING_DIRECTORY ${EXECUTABLE_OUTPUT_PATH}
    COMMAND ${EXECUTABLE_OUTPUT_PATH}/test_${name})
  add_dependencies(test_${name} ${PROJECT_NAME})
endfunction()

file(GLOB TEST_FILES ${CMAKE_CURRENT_SOURCE_DIR}/../../tests/*.cpp)
foreach(i ${TEST_FILES})
  cxx_test(${i} ${ICU_LIBRARIES} ${EXPAT_LIBRARY})
endforeach()
