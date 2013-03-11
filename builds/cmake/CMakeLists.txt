cmake_minimum_required(VERSION 2.8)

project(EasyRPG_Reader CXX C)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/../../bin)
set(LIBRARY_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/../../lib)
link_directories(${CMAKE_CURRENT_SOURCE_DIR}/../../lib)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../../include)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/Modules")

# Doxygen
find_package(Doxygen)
if(DOXYGEN_FOUND)
  add_custom_target(reader_doc
    ${DOXYGEN_EXECUTABLE} ${CMAKE_CURRENT_SOURCE_DIR}/../Doxyfile
    DEPENDS ${SRCS}
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/..
    COMMENT "Generating API documentation with Doxygen" VERBATIM)
endif(DOXYGEN_FOUND)

# endianess checking
if(NOT DEFINED CMAKE_TOOLCHAIN_FILE)
  include(TestBigEndian)
  test_big_endian(IS_BIG_ENDIAN)
  if(IS_BIG_ENDIAN)
    add_definitions(-D READER_BIG_ENDIAN=1)
  endif()
endif()

find_program(PYTHON2_EXECUTABLE python2)
set(GENERATED_OUTPUT_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../../src/generated)
if(PYTHON2_EXECUTABLE)
  set(GENERATE_PY "${CMAKE_CURRENT_SOURCE_DIR}/../../generate.py")

  file(GLOB tmpl "${CMAKE_CURRENT_SOURC_DIR}/../../templates/*.tmpl")
  file(GLOB csv "${CMAKE_CURRENT_SOURC_DIR}/../../csv/*.csv")

  execute_process(
    COMMAND ${PYTHON2_EXECUTABLE} ${GENERATE_PY} -l
    OUTPUT_VARIABLE outputs
    WORKING_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/../..")
  string(REPLACE "\n" ";" outputs ${outputs})
  foreach(i ${outputs})
    if(${i} MATCHES "\\.cpp")
      list(APPEND GEN_SRCS ${GENERATED_OUTPUT_DIR}/${i})
    endif()
  endforeach()

  add_custom_command(
    OUTPUT ${GEN_SRCS}
    COMMAND ${PYTHON2_EXECUTABLE} ${GENERATE_PY}
    MAIN_DEPENDENCT ${GENERATE_PY}
    DEPENDS ${GENERATE_PY} ${tmpl} ${csv}
    WORKING_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/../..")
else()
  aux_source_directory(${GENERATED_OUTPUT_DIR} GEN_SRCS)
endif()

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}/../../src" SRCS)
add_library(${PROJECT_NAME} STATIC ${GEN_SRCS} ${SRCS})

if(WIN32)
  set(ICONV_LIBRARY "")
else()
  # iconv
  find_package(Iconv REQUIRED)
  include_directories(BEFORE ${ICONV_INCLUDE_DIR})
  target_link_libraries(${PROJECT_NAME} ${ICONV_LIBRARY})

  # Boost
  find_package(Boost REQUIRED)
  include_directories(${Boost_INCLUDE_DIRS})
endif()

# expat
find_package(Expat)
include_directories(${EXPAT_INCLUDE_DIR})
target_link_libraries(${PROJECT_NAME} ${EXPAT_LIBRARY})

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

file(GLOB TEST_FILES ${CMAKE_CURRENT_SOURCE_DIR}/../../test/*.cpp)
foreach(i ${TEST_FILES})
  cxx_test(${i} ${ICONV_LIBRARY} ${EXPAT_LIBRARY})
endforeach()
