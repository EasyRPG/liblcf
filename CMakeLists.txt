cmake_minimum_required(VERSION 3.7)
cmake_policy(SET CMP0048 NEW)

project(liblcf VERSION 0.5.4 LANGUAGES CXX)

option(BUILD_SHARED_LIBS "Build shared library, disable for building the static library" ON)
option(DISABLE_ICU "Disable ICU encoding detection (fallback to iconv, not recommended)" OFF)
option(DISABLE_XML "Disable XML reading support (expat)" OFF)

set(DEBUG_POSTFIX "d")
mark_as_advanced(DEBUG_POSTFIX)

set(CMAKE_DEBUG_POSTFIX ${DEBUG_POSTFIX} CACHE STRING "Override CMAKE_DEBUG_POSTFIX.")

list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/builds/cmake/Modules)

include(ConfigureWindows)

# Doxygen
find_package(Doxygen)
if(DOXYGEN_FOUND)
	add_custom_target(liblcf_doc
		${DOXYGEN_EXECUTABLE} ${CMAKE_CURRENT_SOURCE_DIR}/builds/Doxyfile
		DEPENDS lcf
		WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/builds
		COMMENT "Generating API documentation with Doxygen" VERBATIM)
endif()

# lcf library files
add_library(lcf
	src/reader_struct.cpp
	src/data.cpp
	src/ini.cpp
	src/inireader.cpp
	src/ldb_equipment.cpp
	src/ldb_eventcommand.cpp
	src/ldb_parameters.cpp
	src/ldb_reader.cpp
	src/lmt_reader.cpp
	src/lmt_rect.cpp
	src/lmt_treemap.cpp
	src/lmu_movecommand.cpp
	src/lmu_reader.cpp
	src/lsd_reader.cpp
	src/reader_flags.cpp
	src/reader_lcf.cpp
	src/reader_util.cpp
	src/reader_xml.cpp
	src/rpg_fixup.cpp
	src/rpg_setup.cpp
	src/writer_lcf.cpp
	src/writer_xml.cpp
	src/generated/ldb_actor.cpp
	src/generated/ldb_animationcelldata.cpp
	src/generated/ldb_animation.cpp
	src/generated/ldb_animationframe.cpp
	src/generated/ldb_animationtiming.cpp
	src/generated/ldb_attribute.cpp
	src/generated/ldb_battlecommand.cpp
	src/generated/ldb_battlecommands.cpp
	src/generated/ldb_battleranimation.cpp
	src/generated/ldb_battleranimationdata.cpp
	src/generated/ldb_battleranimationextension.cpp
	src/generated/ldb_chipset.cpp
	src/generated/ldb_class.cpp
	src/generated/ldb_commonevent.cpp
	src/generated/ldb_database.cpp
	src/generated/ldb_enemyaction.cpp
	src/generated/ldb_enemy.cpp
	src/generated/ldb_itemanimation.cpp
	src/generated/ldb_item.cpp
	src/generated/ldb_learning.cpp
	src/generated/ldb_music.cpp
	src/generated/ldb_skill.cpp
	src/generated/ldb_sound.cpp
	src/generated/ldb_state.cpp
	src/generated/ldb_switch.cpp
	src/generated/ldb_system.cpp
	src/generated/ldb_terms.cpp
	src/generated/ldb_terrain.cpp
	src/generated/ldb_testbattler.cpp
	src/generated/ldb_troop.cpp
	src/generated/ldb_troopmember.cpp
	src/generated/ldb_trooppagecondition.cpp
	src/generated/ldb_trooppage.cpp
	src/generated/ldb_variable.cpp
	src/generated/lmt_encounter.cpp
	src/generated/lmt_mapinfo.cpp
	src/generated/lmt_start.cpp
	src/generated/lmu_event.cpp
	src/generated/lmu_eventpagecondition.cpp
	src/generated/lmu_eventpage.cpp
	src/generated/lmu_map.cpp
	src/generated/lmu_moveroute.cpp
	src/generated/lsd_saveactor.cpp
	src/generated/lsd_savecommonevent.cpp
	src/generated/lsd_save.cpp
	src/generated/lsd_saveeventcommands.cpp
	src/generated/lsd_saveeventdata.cpp
	src/generated/lsd_saveinventory.cpp
	src/generated/lsd_savemapevent.cpp
	src/generated/lsd_savemapinfo.cpp
	src/generated/lsd_savepanorama.cpp
	src/generated/lsd_savepartylocation.cpp
	src/generated/lsd_savepicture.cpp
	src/generated/lsd_savescreen.cpp
	src/generated/lsd_savesystem.cpp
	src/generated/lsd_savetarget.cpp
	src/generated/lsd_savetitle.cpp
	src/generated/lsd_savevehiclelocation.cpp
	src/generated/rpg_chipset.cpp
	src/generated/rpg_enums.cpp
	src/generated/rpg_system.cpp
)

# C++11 is required
target_compile_features(lcf PUBLIC cxx_std_11)

# includes
target_include_directories(
	lcf PUBLIC
	${CMAKE_CURRENT_SOURCE_DIR}/src
	${CMAKE_CURRENT_SOURCE_DIR}/src/generated
)

# endianess checking
if(NOT DEFINED CMAKE_TOOLCHAIN_FILE)
	include(TestBigEndian)
	test_big_endian(WORDS_BIGENDIAN)
	if(WORDS_BIGENDIAN)
		target_compile_definitions(lcf PRIVATE WORDS_BIGENDIAN=1)
	endif()
endif()

# Add optional library name postfix
set_property(TARGET lcf PROPERTY DEBUG_POSTFIX "${CMAKE_DEBUG_POSTFIX}")

# Export symbols for DLL
set_property(TARGET lcf PROPERTY WINDOWS_EXPORT_ALL_SYMBOLS ON)

if(MSVC)
	# bigobj for reader_struct
	set_property(TARGET lcf PROPERTY COMPILE_FLAGS "/bigobj")
endif()

# icu or fallback to iconv
if(DISABLE_ICU)
	find_package(Iconv REQUIRED)
	target_link_libraries(lcf Iconv::Iconv)
else()
	find_package(ICU COMPONENTS i18n uc data REQUIRED)
	target_link_libraries(lcf ICU::i18n ICU::uc ICU::data)
	target_compile_definitions(lcf PRIVATE LCF_SUPPORT_ICU=1)
	list(APPEND LIBLCF_DEPS "icu-i18n")
endif()

# expat
if(NOT DISABLE_XML)
	find_package(EXPAT)
	target_link_libraries(lcf EXPAT::EXPAT)
	target_compile_definitions(lcf PRIVATE LCF_SUPPORT_XML=1)
	list(APPEND LIBLCF_DEPS "expat")
endif()

# .so version
set_property(TARGET lcf PROPERTY SOVERSION 0)

# pkg-config file generation
set(PACKAGE_TARNAME ${PROJECT_NAME})
set(PACKAGE_VERSION ${PROJECT_VERSION})
set(prefix "${CMAKE_INSTALL_PREFIX}")
set(exec_prefix "\${prefix}")
set(libdir "\${exec_prefix}/${CMAKE_INSTALL_LIBDIR}")
set(includedir "\${prefix}/${CMAKE_INSTALL_INCLUDEDIR}")
string(REPLACE ";" " " AX_PACKAGE_REQUIRES_PRIVATE "${LIBLCF_DEPS}")
configure_file(builds/${PROJECT_NAME}.pc.in builds/${PROJECT_NAME}.pc @ONLY)

# Cmake-config file generation
configure_file(builds/${PROJECT_NAME}-config.cmake.in builds/${PROJECT_NAME}-config.cmake @ONLY)

# installation
include(GNUInstallDirs)

install(
	TARGETS lcf
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR})

file(GLOB includefiles "${CMAKE_CURRENT_SOURCE_DIR}/src/*.h"
	"${CMAKE_CURRENT_SOURCE_DIR}/src/generated/*.h")

install(
	FILES ${includefiles}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/liblcf)

install(
	FILES ${CMAKE_CURRENT_BINARY_DIR}/builds/${PROJECT_NAME}.pc
	DESTINATION ${CMAKE_INSTALL_LIBDIR}/pkgconfig
)

install(
	FILES
	  ${CMAKE_CURRENT_BINARY_DIR}/builds/liblcf-config.cmake
	  ${CMAKE_CURRENT_SOURCE_DIR}/builds/cmake/Modules/FindEXPAT.cmake
	  ${CMAKE_CURRENT_SOURCE_DIR}/builds/cmake/Modules/FindICU.cmake
	DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/liblcf)

# tests
file(GLOB TEST_FILES ${CMAKE_CURRENT_SOURCE_DIR}/tests/*.cpp)
add_executable(test_runner EXCLUDE_FROM_ALL ${TEST_FILES})
target_link_libraries(test_runner lcf)
add_custom_target(check COMMAND ${PROJECT_BINARY_DIR}/test_runner)
add_dependencies(check test_runner)
