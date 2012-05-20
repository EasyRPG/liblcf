CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

PROJECT(EasyRPG_Reader CXX C)

SET(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/../../bin)
SET(LIBRARY_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/../../lib)
LINK_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR}/../../lib)

INCLUDE_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR}/../../include)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/Modules")

# Doxygen
FIND_PACKAGE(Doxygen)
ADD_CUSTOM_TARGET(reader_doc
  ${DOXYGEN_EXECUTABLE} ${CMAKE_CURRENT_SOURCE_DIR}/../Doxyfile
  DEPENDS ${SRCS}
  WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/..
  COMMENT "Generating API documentation with Doxygen" VERBATIM)

# endianess checking
INCLUDE(TestBigEndian)
TEST_BIG_ENDIAN(IS_BIG_ENDIAN)
IF(IS_BIG_ENDIAN)
  ADD_DEFINITIONS(-D READER_BIG_ENDIAN=1)
ENDIF()

find_package(PythonInterp)
set(GENERATED_OUTPUT_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../../src/generated)
if(PYTHONINTERP_FOUND)
  set(GENERATE_PY "${CMAKE_CURRENT_SOURCE_DIR}/../../generate.py")

  file(GLOB tmpl "${CMAKE_CURRENT_SOURC_DIR}/../../templates/*.tmpl")
  file(GLOB csv "${CMAKE_CURRENT_SOURC_DIR}/../../csv/*.csv")

  execute_process(
    COMMAND ${PYTHON_EXECUTABLE} ${GENERATE_PY} -l
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
    COMMAND ${PYTHON_EXECUTABLE} ${GENERATE_PY}
    MAIN_DEPENDENCT ${GENERATE_PY}
    DEPENDS ${GENERATE_PY} ${tmpl} ${csv}
    WORKING_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/../..")
else()
  AUX_SOURCE_DIRECTORY(${GENERATED_OUTPUT_DIR} GEN_SRCS)
endif()

AUX_SOURCE_DIRECTORY("${CMAKE_CURRENT_SOURCE_DIR}/../../src" SRCS)
ADD_LIBRARY(${PROJECT_NAME} STATIC ${GEN_SRCS} ${SRCS})

# expat
find_package(Expat)
include_directories(${EXPAT_INCLUDE_DIR})
target_link_libraries(${PROJECT_NAME} ${EXPAT_LIBRARY})

# iconv
find_package(Iconv REQUIRED)
include_directories(${ICONV_INCLUDE_DIR})
target_link_libraries(${PROJECT_NAME} ${ICONV_LIBRARY})

# test
ENABLE_TESTING()

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../../src)

FUNCTION(CXX_TEST target libs)
  get_filename_component(name ${target} NAME_WE)
  ADD_EXECUTABLE(test_${name} ${target})
  TARGET_LINK_LIBRARIES(test_${name} ${PROJECT_NAME} ${libs})
  ADD_TEST(
    NAME test_${name}
    WORKING_DIRECTORY ${EXECUTABLE_OUTPUT_PATH}
    COMMAND ${EXECUTABLE_OUTPUT_PATH}/test_${name})
  ADD_DEPENDENCIES(test_${name} ${PROJECT_NAME})
ENDFUNCTION()

file(GLOB TEST_FILES ${CMAKE_CURRENT_SOURCE_DIR}/../../test/*.cpp)
FOREACH(i ${TEST_FILES})
  CXX_TEST(${i} ${ICONV_LIBRARY} ${EXPAT_LIBRARY})
ENDFOREACH()
