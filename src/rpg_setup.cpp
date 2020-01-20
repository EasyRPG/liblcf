/*
 * This file is part of liblcf. Copyright (c) 2019 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#include "lcf_options.h"
#include "rpg_actor.h"
#include "rpg_event.h"
#include "rpg_map.h"
#include "rpg_mapinfo.h"
#include "rpg_system.h"
#include "rpg_save.h"
#include "rpg_chipset.h"
#include "rpg_parameters.h"
#include "data.h"

void RPG::SaveActor::Setup(int actor_id) {
	const RPG::Actor& actor = Data::actors[actor_id - 1];
	ID = actor.ID;
	name = actor.name;
	title = actor.title;
	sprite_name = actor.character_name;
	sprite_id = actor.character_index;
	transparency = actor.transparent ? 3 : 0;
	face_name = actor.face_name;
	face_id = actor.face_index;
	level = actor.initial_level;
	exp = 0;
	hp_mod = 0;
	sp_mod = 0;
	attack_mod = 0;
	defense_mod = 0;
	spirit_mod = 0;
	agility_mod = 0;
	skills_size = 0;
	skills.clear();
	equipped.clear();
	equipped.push_back(actor.initial_equipment.weapon_id);
	equipped.push_back(actor.initial_equipment.shield_id);
	equipped.push_back(actor.initial_equipment.armor_id);
	equipped.push_back(actor.initial_equipment.helmet_id);
	equipped.push_back(actor.initial_equipment.accessory_id);
	current_hp = 0;
	current_sp = 0;
	battle_commands.resize(7, -1);
	status.resize(Data::states.size());
	changed_battle_commands = false;
	class_id = -1;
	two_weapon = actor.two_weapon;
	lock_equipment = actor.lock_equipment;
	auto_battle = actor.auto_battle;
	super_guard = actor.super_guard;
}

void RPG::SaveInventory::Setup() {
	party = Data::system.party;
}

void RPG::SaveMapEvent::Setup(const RPG::Event& event) {
	ID = event.ID;
	position_x = event.x;
	position_y = event.y;
}

void RPG::SaveMapInfo::Setup() {
	position_x = 0;
	position_y = 0;
	lower_tiles.resize(144);
	upper_tiles.resize(144);
	for (int i = 0; i < 144; i++) {
		lower_tiles[i] = i;
		upper_tiles[i] = i;
	}
}

void RPG::SaveMapInfo::Setup(const RPG::Map& map) {
	chipset_id = map.chipset_id;
	parallax_name = map.parallax_name;
	parallax_horz = map.parallax_loop_x;
	parallax_vert = map.parallax_loop_y;
	parallax_horz_auto = map.parallax_auto_loop_x;
	parallax_vert_auto = map.parallax_auto_loop_y;
	parallax_horz_speed = map.parallax_sx;
	parallax_vert_speed = map.parallax_sy;
}

void RPG::SaveSystem::Setup() {
	const RPG::System& system = Data::system;
	frame_count = 0;
	face_name = "";
	face_id = -1;
	face_right = false;
	face_flip = false;
	transparent = false;
	music_stopping = false;
	title_music = system.title_music;
	battle_music = system.battle_music;
	battle_end_music = system.battle_end_music;
	inn_music = system.inn_music;
	// current_music
	// unknown1_music FIXME
	// unknown2_music FIXME
	// stored_music
	boat_music = system.boat_music;
	ship_music = system.ship_music;
	airship_music = system.airship_music;
	gameover_music = system.gameover_music;
	cursor_se = system.cursor_se;
	decision_se = system.decision_se;
	cancel_se = system.cancel_se;
	buzzer_se = system.buzzer_se;
	battle_se = system.battle_se;
	escape_se = system.escape_se;
	enemy_attack_se = system.enemy_attack_se;
	enemy_damaged_se = system.enemy_damaged_se;
	actor_damaged_se = system.actor_damaged_se;
	dodge_se = system.dodge_se;
	enemy_death_se = system.enemy_death_se;
	item_se = system.item_se;
	teleport_allowed = true;
	escape_allowed = true;
	save_allowed = true;
	menu_allowed = true;
	background = "";
	save_count = 0;
	save_slot = -1;
}

void RPG::Save::Setup() {
	system.Setup();
	screen = RPG::SaveScreen();
	pictures.clear();
	actors.clear();
	actors.resize(Data::actors.size());
	for (int i = 1; i <= (int) actors.size(); i++)
		actors[i - 1].Setup(i);
	map_info.Setup();

	party_location.move_speed = 4;
	boat_location.vehicle = RPG::SaveVehicleLocation::VehicleType_skiff;
	ship_location.vehicle = RPG::SaveVehicleLocation::VehicleType_ship;
	airship_location.vehicle = RPG::SaveVehicleLocation::VehicleType_airship;

	if (targets.empty()) {
		targets.resize(1);
	}
}

void RPG::Actor::Setup() {
	int max_final_level = 0;
	if (Data::system.ldb_id == 2003) {
		max_final_level = 99;
		if (final_level == -1) {
			final_level = max_final_level;
		}
		exp_base = exp_base == -1 ? 300 : exp_base;
		exp_inflation = exp_inflation == -1 ? 300 : exp_inflation;
	}
	else {
		max_final_level = 50;
		if (final_level == -1) {
			final_level = max_final_level;
		}
		exp_base = exp_base == -1 ? 30 : exp_base;
		exp_inflation = exp_inflation == -1 ? 30 : exp_inflation;
	}
	parameters.Setup(max_final_level);
}

void RPG::Chipset::Init() {
	terrain_data.resize(162, 1);
	passable_data_lower.resize(162, 15);
	passable_data_upper.resize(144, 15);
	passable_data_upper.front() = 31;
}

void RPG::System::Init() {
	party.resize(1, 1);
	menu_commands.resize(1, 1);
}

void RPG::Parameters::Setup(int final_level) {
	size_t level = 0;
	if (final_level > 0) level = final_level;
	if (maxhp.size() < level) maxhp.resize(level, 1);
	if (maxsp.size() < level) maxsp.resize(level, 0);
	if (attack.size() < level) attack.resize(level, 1);
	if (defense.size() < level) defense.resize(level, 1);
	if (spirit.size() < level) spirit.resize(level, 1);
	if (agility.size() < level) agility.resize(level, 1);
}
