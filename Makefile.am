ACLOCAL_AMFLAGS = --install -I builds/autoconf/m4

EXTRA_DIST = AUTHORS.md README.md generator \
	CMakeLists.txt builds/cmake mime builds/Doxyfile

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = builds/liblcf.pc

mimedbdir = $(datadir)/mime/packages
mimedb_DATA = mime/liblcf.xml

cmakeconfigdir = $(libdir)/cmake/liblcf
cmakeconfig_DATA = \
	builds/liblcf-config.cmake \
	builds/cmake/Modules/FindEXPAT.cmake \
	builds/cmake/Modules/FindICU.cmake

lcfincludedir = $(includedir)/lcf

lib_LTLIBRARIES = liblcf.la
liblcf_la_CPPFLAGS = \
	$(AM_CPPFLAGS) \
	-I$(srcdir)/autogen \
	-I$(srcdir)/src \
	-I$(srcdir)/src/generated
liblcf_la_CXXFLAGS = \
	-std=gnu++14 \
	-fno-math-errno \
	$(AM_CXXFLAGS) \
	$(EXPAT_CFLAGS) \
	$(ICU_CFLAGS)
liblcf_la_LIBADD = \
	$(EXPAT_LIBS) \
	$(ICU_LIBS)
liblcf_la_LDFLAGS = \
	$(AM_LDFLAGS) \
	-no-undefined
liblcf_la_SOURCES = \
	src/data.cpp \
	src/encoder.cpp \
	src/ini.cpp \
	src/inireader.cpp \
	src/ldb_equipment.cpp \
	src/ldb_eventcommand.cpp \
	src/ldb_parameters.cpp \
	src/ldb_reader.cpp \
	src/lmt_reader.cpp \
	src/lmt_rect.cpp \
	src/lmt_treemap.cpp \
	src/lmu_movecommand.cpp \
	src/lmu_reader.cpp \
	src/lsd_reader.cpp \
	src/reader_flags.cpp \
	src/reader_lcf.cpp \
	src/reader_util.cpp \
	src/reader_struct.h \
	src/reader_struct_impl.h \
	src/reader_xml.cpp \
	src/rpg_fixup.cpp \
	src/rpg_setup.cpp \
	src/writer_lcf.cpp \
	src/writer_xml.cpp \
	src/generated/fwd_struct_impl.h \
	src/generated/ldb_terrain_flags.h \
	src/generated/ldb_trooppagecondition_flags.h \
	src/generated/lmu_eventpagecondition_flags.h \
	src/generated/lsd_savepicture_flags.h \
	src/generated/ldb_actor.cpp \
	src/generated/ldb_animation.cpp \
	src/generated/ldb_animationcelldata.cpp \
	src/generated/ldb_animationframe.cpp \
	src/generated/ldb_animationtiming.cpp \
	src/generated/ldb_attribute.cpp \
	src/generated/ldb_battlecommand.cpp \
	src/generated/ldb_battlecommands.cpp \
	src/generated/ldb_battleranimation.cpp \
	src/generated/ldb_battleranimationdata.cpp \
	src/generated/ldb_battleranimationextension.cpp \
	src/generated/ldb_chipset.cpp \
	src/generated/ldb_class.cpp \
	src/generated/ldb_commonevent.cpp \
	src/generated/ldb_database.cpp \
	src/generated/ldb_enemy.cpp \
	src/generated/ldb_enemyaction.cpp \
	src/generated/ldb_item.cpp \
	src/generated/ldb_itemanimation.cpp \
	src/generated/ldb_learning.cpp \
	src/generated/ldb_music.cpp \
	src/generated/ldb_skill.cpp \
	src/generated/ldb_sound.cpp \
	src/generated/ldb_state.cpp \
	src/generated/ldb_switch.cpp \
	src/generated/ldb_system.cpp \
	src/generated/ldb_terms.cpp \
	src/generated/ldb_terrain.cpp \
	src/generated/ldb_testbattler.cpp \
	src/generated/ldb_troop.cpp \
	src/generated/ldb_troopmember.cpp \
	src/generated/ldb_trooppage.cpp \
	src/generated/ldb_trooppagecondition.cpp \
	src/generated/ldb_variable.cpp \
	src/generated/lmt_encounter.cpp \
	src/generated/lmt_mapinfo.cpp \
	src/generated/lmt_start.cpp \
	src/generated/lmu_event.cpp \
	src/generated/lmu_eventpage.cpp \
	src/generated/lmu_eventpagecondition.cpp \
	src/generated/lmu_map.cpp \
	src/generated/lmu_moveroute.cpp \
	src/generated/lsd_save.cpp \
	src/generated/lsd_saveactor.cpp \
	src/generated/lsd_savecommonevent.cpp \
	src/generated/lsd_saveeasyrpgdata.cpp \
	src/generated/lsd_saveeventexecframe.cpp \
	src/generated/lsd_saveeventexecstate.cpp \
	src/generated/lsd_saveinventory.cpp \
	src/generated/lsd_savemapevent.cpp \
	src/generated/lsd_savemapeventbase.cpp \
	src/generated/lsd_savemapinfo.cpp \
	src/generated/lsd_savepanorama.cpp \
	src/generated/lsd_savepartylocation.cpp \
	src/generated/lsd_savepicture.cpp \
	src/generated/lsd_savescreen.cpp \
	src/generated/lsd_savesystem.cpp \
	src/generated/lsd_savetarget.cpp \
	src/generated/lsd_savetitle.cpp \
	src/generated/lsd_savevehiclelocation.cpp \
	src/generated/rpg_chipset.cpp \
	src/generated/rpg_enums.cpp \
	src/generated/rpg_savepartylocation.cpp \
	src/generated/rpg_state.cpp \
	src/generated/rpg_system.cpp
lcfinclude_HEADERS = \
	autogen/lcf/config.h \
	src/lcf/data.h \
	src/lcf/encoder.h \
	src/lcf/enum_tags.h \
	src/lcf/flag_set.h \
	src/lcf/ini.h \
	src/lcf/inireader.h \
	src/lcf/saveopt.h \
	src/lcf/ldb/reader.h \
	src/lcf/lmt/reader.h \
	src/lcf/lmu/reader.h \
	src/lcf/lsd/reader.h \
	src/lcf/reader_lcf.h \
	src/lcf/reader_util.h \
	src/lcf/reader_xml.h \
	src/lcf/scope_guard.h \
	src/lcf/writer_lcf.h \
	src/lcf/writer_xml.h \
	src/generated/lcf/ldb/chunks.h \
	src/generated/lcf/lmt/chunks.h \
	src/generated/lcf/lmu/chunks.h \
	src/generated/lcf/lsd/chunks.h \
	src/generated/lcf/rpg/actor.h \
	src/generated/lcf/rpg/animation.h \
	src/generated/lcf/rpg/animationcelldata.h \
	src/generated/lcf/rpg/animationframe.h \
	src/generated/lcf/rpg/animationtiming.h \
	src/generated/lcf/rpg/attribute.h \
	src/generated/lcf/rpg/battlecommand.h \
	src/generated/lcf/rpg/battlecommands.h \
	src/generated/lcf/rpg/battleranimation.h \
	src/generated/lcf/rpg/battleranimationdata.h \
	src/generated/lcf/rpg/battleranimationextension.h \
	src/generated/lcf/rpg/chipset.h \
	src/generated/lcf/rpg/class.h \
	src/generated/lcf/rpg/commonevent.h \
	src/generated/lcf/rpg/database.h \
	src/generated/lcf/rpg/encounter.h \
	src/generated/lcf/rpg/enemy.h \
	src/generated/lcf/rpg/enemyaction.h \
	src/generated/lcf/rpg/equipment.h \
	src/generated/lcf/rpg/event.h \
	src/generated/lcf/rpg/eventcommand.h \
	src/generated/lcf/rpg/eventpage.h \
	src/generated/lcf/rpg/eventpagecondition.h \
	src/generated/lcf/rpg/item.h \
	src/generated/lcf/rpg/itemanimation.h \
	src/generated/lcf/rpg/learning.h \
	src/generated/lcf/rpg/map.h \
	src/generated/lcf/rpg/mapinfo.h \
	src/generated/lcf/rpg/movecommand.h \
	src/generated/lcf/rpg/moveroute.h \
	src/generated/lcf/rpg/music.h \
	src/generated/lcf/rpg/parameters.h \
	src/generated/lcf/rpg/rect.h \
	src/generated/lcf/rpg/save.h \
	src/generated/lcf/rpg/saveactor.h \
	src/generated/lcf/rpg/savecommonevent.h \
	src/generated/lcf/rpg/saveeasyrpgdata.h \
	src/generated/lcf/rpg/saveeventexecframe.h \
	src/generated/lcf/rpg/saveeventexecstate.h \
	src/generated/lcf/rpg/saveinventory.h \
	src/generated/lcf/rpg/savemapevent.h \
	src/generated/lcf/rpg/savemapeventbase.h \
	src/generated/lcf/rpg/savemapinfo.h \
	src/generated/lcf/rpg/savepanorama.h \
	src/generated/lcf/rpg/savepartylocation.h \
	src/generated/lcf/rpg/savepicture.h \
	src/generated/lcf/rpg/savescreen.h \
	src/generated/lcf/rpg/savesystem.h \
	src/generated/lcf/rpg/savetarget.h \
	src/generated/lcf/rpg/savetitle.h \
	src/generated/lcf/rpg/savevehiclelocation.h \
	src/generated/lcf/rpg/skill.h \
	src/generated/lcf/rpg/sound.h \
	src/generated/lcf/rpg/start.h \
	src/generated/lcf/rpg/state.h \
	src/generated/lcf/rpg/switch.h \
	src/generated/lcf/rpg/system.h \
	src/generated/lcf/rpg/terms.h \
	src/generated/lcf/rpg/terrain.h \
	src/generated/lcf/rpg/testbattler.h \
	src/generated/lcf/rpg/treemap.h \
	src/generated/lcf/rpg/troop.h \
	src/generated/lcf/rpg/troopmember.h \
	src/generated/lcf/rpg/trooppage.h \
	src/generated/lcf/rpg/trooppagecondition.h \
	src/generated/lcf/rpg/variable.h

check_PROGRAMS = test_runner
test_runner_SOURCES = \
	tests/doctest.h \
	tests/time_stamp.cpp \
	tests/flag_set.cpp \
	tests/test_main.cpp
test_runner_CPPFLAGS = \
	-I$(srcdir)/src \
	-I$(srcdir)/src/generated
test_runner_CXXFLAGS = \
	-std=gnu++14 \
	$(EXPAT_CXXFLAGS) \
	$(ICU_CXXFLAGS)
test_runner_LDADD = \
	liblcf.la \
	$(EXPAT_LIBS) \
	$(ICU_LIBS)
test_runner_LDFLAGS = -no-install

check-local:
	$(AM_V_at)./test_runner

install-data-hook:
if ENABLE_UPDATE_MIMEDB
if CROSS_COMPILING
	@echo "Cross compiling: Skipping update of mime database"
else
	$(UPDATE_MIME_DATABASE) "$(DESTDIR)$(datadir)/mime"
endif
endif

uninstall-hook:
	rm -f "$(DESTDIR)$(datadir)/mime/application/"*.xml
	for f in aliases generic-icons globs globs2 icons magic mime.cache subclasses treemagic types version XMLnamespaces; do rm -f "$(DESTDIR)$(datadir)/mime/$${f}"; done
