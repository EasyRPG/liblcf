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
lcfldbincludedir = $(includedir)/lcf/ldb
lcflmtincludedir = $(includedir)/lcf/lmt
lcflmuincludedir = $(includedir)/lcf/lmu
lcflsdincludedir = $(includedir)/lcf/lsd
lcfrpgincludedir = $(includedir)/lcf/rpg
lcfthirdpartyincludedir = $(includedir)/lcf/third_party

lib_LTLIBRARIES = liblcf.la
liblcf_la_CPPFLAGS = \
	$(AM_CPPFLAGS) \
	-I$(builddir)/autogen \
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
	src/dbarray.cpp \
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
	src/reader_struct.h \
	src/reader_struct_impl.h \
	src/reader_util.cpp \
	src/reader_xml.cpp \
	src/rpg_setup.cpp \
	src/writer_lcf.cpp \
	src/writer_xml.cpp \
	src/generated/fwd_struct_impl.h \
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
	src/generated/ldb_terrain_flags.h \
	src/generated/ldb_testbattler.cpp \
	src/generated/ldb_troop.cpp \
	src/generated/ldb_troopmember.cpp \
	src/generated/ldb_trooppage.cpp \
	src/generated/ldb_trooppagecondition.cpp \
	src/generated/ldb_trooppagecondition_flags.h \
	src/generated/ldb_variable.cpp \
	src/generated/lmt_encounter.cpp \
	src/generated/lmt_mapinfo.cpp \
	src/generated/lmt_start.cpp \
	src/generated/lmu_event.cpp \
	src/generated/lmu_eventpage.cpp \
	src/generated/lmu_eventpagecondition.cpp \
	src/generated/lmu_eventpagecondition_flags.h \
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
	src/generated/lsd_savepicture_flags.h \
	src/generated/lsd_savescreen.cpp \
	src/generated/lsd_savesystem.cpp \
	src/generated/lsd_savetarget.cpp \
	src/generated/lsd_savetitle.cpp \
	src/generated/lsd_savevehiclelocation.cpp \
	src/generated/rpg_actor.cpp \
	src/generated/rpg_animation.cpp \
	src/generated/rpg_animationcelldata.cpp \
	src/generated/rpg_animationframe.cpp \
	src/generated/rpg_animationtiming.cpp \
	src/generated/rpg_attribute.cpp \
	src/generated/rpg_battlecommand.cpp \
	src/generated/rpg_battlecommands.cpp \
	src/generated/rpg_battleranimation.cpp \
	src/generated/rpg_battleranimationdata.cpp \
	src/generated/rpg_battleranimationextension.cpp \
	src/generated/rpg_chipset.cpp \
	src/generated/rpg_class.cpp \
	src/generated/rpg_commonevent.cpp \
	src/generated/rpg_database.cpp \
	src/generated/rpg_encounter.cpp \
	src/generated/rpg_enemy.cpp \
	src/generated/rpg_enemyaction.cpp \
	src/generated/rpg_enums.cpp \
	src/generated/rpg_equipment.cpp \
	src/generated/rpg_event.cpp \
	src/generated/rpg_eventcommand.cpp \
	src/generated/rpg_eventpage.cpp \
	src/generated/rpg_eventpagecondition.cpp \
	src/generated/rpg_item.cpp \
	src/generated/rpg_itemanimation.cpp \
	src/generated/rpg_learning.cpp \
	src/generated/rpg_map.cpp \
	src/generated/rpg_mapinfo.cpp \
	src/generated/rpg_movecommand.cpp \
	src/generated/rpg_moveroute.cpp \
	src/generated/rpg_music.cpp \
	src/generated/rpg_parameters.cpp \
	src/generated/rpg_rect.cpp \
	src/generated/rpg_save.cpp \
	src/generated/rpg_saveactor.cpp \
	src/generated/rpg_savecommonevent.cpp \
	src/generated/rpg_saveeasyrpgdata.cpp \
	src/generated/rpg_saveeventexecframe.cpp \
	src/generated/rpg_saveeventexecstate.cpp \
	src/generated/rpg_saveinventory.cpp \
	src/generated/rpg_savemapevent.cpp \
	src/generated/rpg_savemapeventbase.cpp \
	src/generated/rpg_savemapinfo.cpp \
	src/generated/rpg_savepanorama.cpp \
	src/generated/rpg_savepartylocation.cpp \
	src/generated/rpg_savepicture.cpp \
	src/generated/rpg_savescreen.cpp \
	src/generated/rpg_savesystem.cpp \
	src/generated/rpg_savetarget.cpp \
	src/generated/rpg_savetitle.cpp \
	src/generated/rpg_savevehiclelocation.cpp \
	src/generated/rpg_skill.cpp \
	src/generated/rpg_sound.cpp \
	src/generated/rpg_start.cpp \
	src/generated/rpg_state.cpp \
	src/generated/rpg_switch.cpp \
	src/generated/rpg_system.cpp \
	src/generated/rpg_terms.cpp \
	src/generated/rpg_terrain.cpp \
	src/generated/rpg_testbattler.cpp \
	src/generated/rpg_treemap.cpp \
	src/generated/rpg_troop.cpp \
	src/generated/rpg_troopmember.cpp \
	src/generated/rpg_trooppage.cpp \
	src/generated/rpg_trooppagecondition.cpp \
	src/generated/rpg_variable.cpp

lcfinclude_HEADERS = \
	src/lcf/context.h \
	src/lcf/data.h \
	src/lcf/dbarray.h \
	src/lcf/dbarrayalloc.h \
	src/lcf/dbbitarray.h \
	src/lcf/dbstring.h \
	src/lcf/encoder.h \
	src/lcf/enum_tags.h \
	src/lcf/flag_set.h \
	src/lcf/ini.h \
	src/lcf/inireader.h \
	src/lcf/reader_lcf.h \
	src/lcf/reader_util.h \
	src/lcf/reader_xml.h \
	src/lcf/saveopt.h \
	src/lcf/scope_guard.h \
	src/lcf/span.h \
	src/lcf/string_view.h \
	src/lcf/writer_lcf.h \
	src/lcf/writer_xml.h

lcfldbinclude_HEADERS = \
	src/lcf/ldb/reader.h \
	src/generated/lcf/ldb/chunks.h

lcflmtinclude_HEADERS = \
	src/lcf/lmt/reader.h \
	src/generated/lcf/lmt/chunks.h

lcflmuinclude_HEADERS = \
	src/lcf/lmu/reader.h \
	src/generated/lcf/lmu/chunks.h

lcflsdinclude_HEADERS = \
	src/lcf/lsd/reader.h \
	src/generated/lcf/lsd/chunks.h

lcfrpginclude_HEADERS = \
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
	src/generated/lcf/rpg/fwd.h \
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

lcfthirdpartyinclude_HEADERS = \
	src/lcf/third_party/span.h \
	src/lcf/third_party/string_view.h

nodist_lcfinclude_HEADERS = autogen/lcf/config.h

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

lcf2xml_SOURCES = tools/lcf2xml.cpp
lcf2xml_CPPFLAGS = $(liblcf_la_CPPFLAGS)
lcf2xml_CXXFLAGS = $(liblcf_la_CXXFLAGS)
lcf2xml_LDADD = liblcf.la

tools =
if ENABLE_TOOLS
if SUPPORT_XML
tools += lcf2xml
endif
endif
bin_PROGRAMS = $(tools)
tools: $(tools)

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
