cmake_minimum_required(VERSION 3.7)
cmake_policy(SET CMP0048 NEW)

project(liblcf VERSION 0.6.1 LANGUAGES CXX)

option(BUILD_SHARED_LIBS "Build shared library, disable for building the static library" ON)
option(DISABLE_ICU "Disable ICU encoding detection (fallback to iconv, not recommended)" OFF)
option(DISABLE_XML "Disable XML reading support (expat)" OFF)
option(DISABLE_UPDATE_MIMEDB "Do not run update-mime-database after install" OFF)

set(CMAKE_DEBUG_POSTFIX "d" CACHE STRING "Override CMAKE_DEBUG_POSTFIX.")

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

# C++14 is required
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# lcf library files
add_library(lcf
	src/command_codes.h
	src/data.cpp
	src/data.h
	src/encoder.cpp
	src/encoder.h
	src/enum_tags.h
	src/flag_set.h
	src/ini.cpp
	src/ini.h
	src/inireader.cpp
	src/inireader.h
	src/lcf_options.h
	src/lcf_saveopt.h
	src/ldb_equipment.cpp
	src/ldb_eventcommand.cpp
	src/ldb_parameters.cpp
	src/ldb_reader.cpp
	src/ldb_reader.h
	src/lmt_reader.cpp
	src/lmt_reader.h
	src/lmt_rect.cpp
	src/lmt_treemap.cpp
	src/lmu_movecommand.cpp
	src/lmu_reader.cpp
	src/lmu_reader.h
	src/lsd_reader.cpp
	src/lsd_reader.h
	src/reader_flags.cpp
	src/reader_lcf.cpp
	src/reader_lcf.h
	src/reader_struct.h
	src/reader_struct_impl.h
	src/reader_util.cpp
	src/reader_util.h
	src/reader_xml.cpp
	src/reader_xml.h
	src/rpg_fixup.cpp
	src/rpg_setup.cpp
	src/scope_guard.h
	src/writer_lcf.cpp
	src/writer_lcf.h
	src/writer_xml.cpp
	src/writer_xml.h
	src/generated/fwd_struct_impl.h
	src/generated/ldb_actor.cpp
	src/generated/ldb_animation.cpp
	src/generated/ldb_animationcelldata.cpp
	src/generated/ldb_animationframe.cpp
	src/generated/ldb_animationtiming.cpp
	src/generated/ldb_attribute.cpp
	src/generated/ldb_battlecommand.cpp
	src/generated/ldb_battlecommands.cpp
	src/generated/ldb_battleranimation.cpp
	src/generated/ldb_battleranimationdata.cpp
	src/generated/ldb_battleranimationextension.cpp
	src/generated/ldb_chipset.cpp
	src/generated/ldb_chunks.h
	src/generated/ldb_class.cpp
	src/generated/ldb_commonevent.cpp
	src/generated/ldb_database.cpp
	src/generated/ldb_enemy.cpp
	src/generated/ldb_enemyaction.cpp
	src/generated/ldb_item.cpp
	src/generated/ldb_itemanimation.cpp
	src/generated/ldb_learning.cpp
	src/generated/ldb_music.cpp
	src/generated/ldb_skill.cpp
	src/generated/ldb_sound.cpp
	src/generated/ldb_state.cpp
	src/generated/ldb_switch.cpp
	src/generated/ldb_system.cpp
	src/generated/ldb_terms.cpp
	src/generated/ldb_terrain.cpp
	src/generated/ldb_terrain_flags.h
	src/generated/ldb_testbattler.cpp
	src/generated/ldb_troop.cpp
	src/generated/ldb_troopmember.cpp
	src/generated/ldb_trooppage.cpp
	src/generated/ldb_trooppagecondition.cpp
	src/generated/ldb_trooppagecondition_flags.h
	src/generated/ldb_variable.cpp
	src/generated/lmt_chunks.h
	src/generated/lmt_encounter.cpp
	src/generated/lmt_mapinfo.cpp
	src/generated/lmt_start.cpp
	src/generated/lmu_chunks.h
	src/generated/lmu_event.cpp
	src/generated/lmu_eventpage.cpp
	src/generated/lmu_eventpagecondition.cpp
	src/generated/lmu_eventpagecondition_flags.h
	src/generated/lmu_map.cpp
	src/generated/lmu_moveroute.cpp
	src/generated/lsd_chunks.h
	src/generated/lsd_save.cpp
	src/generated/lsd_saveactor.cpp
	src/generated/lsd_savecommonevent.cpp
	src/generated/lsd_saveeasyrpgdata.cpp
	src/generated/lsd_saveeventexecframe.cpp
	src/generated/lsd_saveeventexecstate.cpp
	src/generated/lsd_saveinventory.cpp
	src/generated/lsd_savemapevent.cpp
	src/generated/lsd_savemapeventbase.cpp
	src/generated/lsd_savemapinfo.cpp
	src/generated/lsd_savepanorama.cpp
	src/generated/lsd_savepartylocation.cpp
	src/generated/lsd_savepicture.cpp
	src/generated/lsd_savepicture_flags.h
	src/generated/lsd_savescreen.cpp
	src/generated/lsd_savesystem.cpp
	src/generated/lsd_savetarget.cpp
	src/generated/lsd_savetitle.cpp
	src/generated/lsd_savevehiclelocation.cpp
	src/generated/rpg_actor.h
	src/generated/rpg_animation.h
	src/generated/rpg_animationcelldata.h
	src/generated/rpg_animationframe.h
	src/generated/rpg_animationtiming.h
	src/generated/rpg_attribute.h
	src/generated/rpg_battlecommand.h
	src/generated/rpg_battlecommands.h
	src/generated/rpg_battleranimation.h
	src/generated/rpg_battleranimationdata.h
	src/generated/rpg_battleranimationextension.h
	src/generated/rpg_chipset.cpp
	src/generated/rpg_chipset.h
	src/generated/rpg_class.h
	src/generated/rpg_commonevent.h
	src/generated/rpg_database.h
	src/generated/rpg_encounter.h
	src/generated/rpg_enemy.h
	src/generated/rpg_enemyaction.h
	src/generated/rpg_enums.cpp
	src/generated/rpg_equipment.h
	src/generated/rpg_event.h
	src/generated/rpg_eventcommand.h
	src/generated/rpg_eventpage.h
	src/generated/rpg_eventpagecondition.h
	src/generated/rpg_item.h
	src/generated/rpg_itemanimation.h
	src/generated/rpg_learning.h
	src/generated/rpg_map.h
	src/generated/rpg_mapinfo.h
	src/generated/rpg_movecommand.h
	src/generated/rpg_moveroute.h
	src/generated/rpg_music.h
	src/generated/rpg_parameters.h
	src/generated/rpg_rect.h
	src/generated/rpg_save.h
	src/generated/rpg_saveactor.h
	src/generated/rpg_savecommonevent.h
	src/generated/rpg_saveeasyrpgdata.h
	src/generated/rpg_saveeventexecframe.h
	src/generated/rpg_saveeventexecstate.h
	src/generated/rpg_saveinventory.h
	src/generated/rpg_savemapevent.h
	src/generated/rpg_savemapeventbase.h
	src/generated/rpg_savemapinfo.h
	src/generated/rpg_savepanorama.h
	src/generated/rpg_savepartylocation.cpp
	src/generated/rpg_savepartylocation.h
	src/generated/rpg_savepicture.h
	src/generated/rpg_savescreen.h
	src/generated/rpg_savesystem.h
	src/generated/rpg_savetarget.h
	src/generated/rpg_savetitle.h
	src/generated/rpg_savevehiclelocation.h
	src/generated/rpg_skill.h
	src/generated/rpg_sound.h
	src/generated/rpg_start.h
	src/generated/rpg_state.cpp
	src/generated/rpg_state.h
	src/generated/rpg_switch.h
	src/generated/rpg_system.cpp
	src/generated/rpg_system.h
	src/generated/rpg_terms.h
	src/generated/rpg_terrain.h
	src/generated/rpg_testbattler.h
	src/generated/rpg_treemap.h
	src/generated/rpg_troop.h
	src/generated/rpg_troopmember.h
	src/generated/rpg_trooppage.h
	src/generated/rpg_trooppagecondition.h
	src/generated/rpg_variable.h
)

# IDE source grouping
foreach(SG LDB LMT LMU LSD RPG)
	string(TOLOWER ${SG} LSG)
	source_group("Source Files\\generated\\${SG}" REGULAR_EXPRESSION "generated/${LSG}_.*\\.cpp")
	source_group("Header Files\\generated\\${SG}" REGULAR_EXPRESSION "generated/${LSG}_.*\\.h")
	source_group("Source Files\\${SG}" REGULAR_EXPRESSION "${LSG}_.*\\.cpp")
	source_group("Header Files\\${SG}" REGULAR_EXPRESSION "${LSG}_.*\\.h")
endforeach()

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

# mime types
if(NOT DISABLE_UPDATE_MIMEDB AND NOT CMAKE_CROSSCOMPILING)
	find_program(UPDATE_MIME_DATABASE update-mime-database)
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

# mime types
install(
	FILES ${CMAKE_CURRENT_SOURCE_DIR}/mime/${PROJECT_NAME}.xml
	DESTINATION ${CMAKE_INSTALL_DATADIR}/mime/packages
)
if(NOT DISABLE_UPDATE_MIMEDB AND UPDATE_MIME_DATABASE)
	install(CODE
		"execute_process(COMMAND ${UPDATE_MIME_DATABASE}
			\$ENV{DESTDIR}\${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_DATADIR}/mime)"
	)
endif()

# tests
file(GLOB TEST_FILES ${CMAKE_CURRENT_SOURCE_DIR}/tests/*.cpp)
add_executable(test_runner_lcf EXCLUDE_FROM_ALL ${TEST_FILES})
set_target_properties(test_runner_lcf PROPERTIES OUTPUT_NAME "test_runner")
target_link_libraries(test_runner_lcf lcf)
add_custom_target(check_lcf COMMAND test_runner_lcf)
if(NOT TARGET check)
	add_custom_target(check)
endif()
add_dependencies(check_lcf test_runner_lcf)
add_dependencies(check check_lcf)

# benchmarks
file(GLOB BENCH_FILES ${CMAKE_CURRENT_SOURCE_DIR}/bench/*.cpp)
foreach(i ${BENCH_FILES})
	get_filename_component(name "${i}" NAME_WE)
	add_executable(bench_${name} ${i})
	target_link_libraries(bench_${name} lcf)
endforeach()
