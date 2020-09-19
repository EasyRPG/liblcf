/*
 * This file is part of liblcf. Copyright (c) 2020 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#include "lcf/config.h"
#include "lcf/rpg/actor.h"
#include "lcf/rpg/event.h"
#include "lcf/rpg/map.h"
#include "lcf/rpg/mapinfo.h"
#include "lcf/rpg/system.h"
#include "lcf/rpg/save.h"
#include "lcf/rpg/chipset.h"
#include "lcf/rpg/parameters.h"
#include "lcf/data.h"

namespace lcf {

void rpg::SaveActor::Setup(int actor_id) {
	const rpg::Actor& actor = lcf::Data::actors[actor_id - 1];
	ID = actor.ID;
	name = ToString(actor.name);
	title = ToString(actor.title);
	sprite_name = ToString(actor.character_name);
	sprite_id = actor.character_index;
	transparency = actor.transparent ? 3 : 0;
	face_name = ToString(actor.face_name);
	face_id = actor.face_index;
	level = actor.initial_level;
	exp = 0;
	hp_mod = 0;
	sp_mod = 0;
	attack_mod = 0;
	defense_mod = 0;
	spirit_mod = 0;
	agility_mod = 0;
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
	status.resize(lcf::Data::states.size());
	changed_battle_commands = false;
	class_id = -1;
	two_weapon = actor.two_weapon;
	lock_equipment = actor.lock_equipment;
	auto_battle = actor.auto_battle;
	super_guard = actor.super_guard;
}

void rpg::SaveInventory::Setup() {
	party = lcf::Data::system.party;
}

void rpg::SaveMapEvent::Setup(const rpg::Event& event) {
	ID = event.ID;
	position_x = event.x;
	position_y = event.y;
}

void rpg::SaveMapInfo::Setup() {
	position_x = 0;
	position_y = 0;
	lower_tiles.resize(144);
	upper_tiles.resize(144);
	for (int i = 0; i < 144; i++) {
		lower_tiles[i] = i;
		upper_tiles[i] = i;
	}
}

void rpg::SaveMapInfo::Setup(const rpg::Map& map) {
	chipset_id = map.chipset_id;
	parallax_name = ToString(map.parallax_name);
	parallax_horz = map.parallax_loop_x;
	parallax_vert = map.parallax_loop_y;
	parallax_horz_auto = map.parallax_auto_loop_x;
	parallax_vert_auto = map.parallax_auto_loop_y;
	parallax_horz_speed = map.parallax_sx;
	parallax_vert_speed = map.parallax_sy;
}

void rpg::Save::Setup() {
	screen = rpg::SaveScreen();
	pictures.clear();
	actors.clear();
	actors.resize(lcf::Data::actors.size());
	for (int i = 1; i <= (int) actors.size(); i++)
		actors[i - 1].Setup(i);
	map_info.Setup();

	party_location.move_speed = 4;
	boat_location.vehicle = rpg::SaveVehicleLocation::VehicleType_skiff;
	ship_location.vehicle = rpg::SaveVehicleLocation::VehicleType_ship;
	airship_location.vehicle = rpg::SaveVehicleLocation::VehicleType_airship;

	if (targets.empty()) {
		targets.resize(1);
	}
}

void rpg::Actor::Setup() {
	int max_final_level = 0;
	if (lcf::Data::system.ldb_id == 2003) {
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

void rpg::Parameters::Setup(int final_level) {
	size_t level = 0;
	if (final_level > 0) level = final_level;
	if (maxhp.size() < level) maxhp.resize(level, 1);
	if (maxsp.size() < level) maxsp.resize(level, 0);
	if (attack.size() < level) attack.resize(level, 1);
	if (defense.size() < level) defense.resize(level, 1);
	if (spirit.size() < level) spirit.resize(level, 1);
	if (agility.size() < level) agility.resize(level, 1);
}

} // namespace lcf
