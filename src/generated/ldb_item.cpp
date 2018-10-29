/* !!!! GENERATED FILE - DO NOT EDIT !!!!
 * --------------------------------------
 *
 * This file is part of liblcf. Copyright (c) 2018 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

// Headers
#include "ldb_reader.h"
#include "ldb_chunks.h"
#include "reader_struct.h"

// Read Item.

#define LCF_CHUNK_SUFFIX LDB_Reader
#define LCF_CURRENT_STRUCT Item

LCF_STRUCT_FIELDS_BEGIN()
	LCF_STRUCT_TYPED_FIELD(std::string, name, 0, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, description, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, type, 1, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, price, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, uses, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, atk_points1, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, def_points1, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, spi_points1, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, agi_points1, 0, 0),
	LCF_STRUCT_TYPED_FIELD(bool, two_handed, 1, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, sp_cost, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, hit, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, critical_hit, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, animation_id, 0, 0),
	LCF_STRUCT_TYPED_FIELD(bool, preemptive, 0, 0),
	LCF_STRUCT_TYPED_FIELD(bool, dual_attack, 0, 0),
	LCF_STRUCT_TYPED_FIELD(bool, attack_all, 0, 0),
	LCF_STRUCT_TYPED_FIELD(bool, ignore_evasion, 0, 0),
	LCF_STRUCT_TYPED_FIELD(bool, prevent_critical, 0, 0),
	LCF_STRUCT_TYPED_FIELD(bool, raise_evasion, 0, 0),
	LCF_STRUCT_TYPED_FIELD(bool, half_sp_cost, 0, 0),
	LCF_STRUCT_TYPED_FIELD(bool, no_terrain_damage, 0, 0),
	LCF_STRUCT_TYPED_FIELD(bool, cursed, 0, 1),
	LCF_STRUCT_TYPED_FIELD(bool, entire_party, 1, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, recover_hp_rate, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, recover_hp, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, recover_sp_rate, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, recover_sp, 0, 0),
	LCF_STRUCT_TYPED_FIELD(bool, occasion_field1, 0, 0),
	LCF_STRUCT_TYPED_FIELD(bool, ko_only, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, max_hp_points, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, max_sp_points, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, atk_points2, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, def_points2, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, spi_points2, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, agi_points2, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, using_message, 1, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, skill_id, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, switch_id, 0, 0),
	LCF_STRUCT_TYPED_FIELD(bool, occasion_field2, 0, 0),
	LCF_STRUCT_TYPED_FIELD(bool, occasion_battle, 0, 0),
	LCF_STRUCT_SIZE_FIELD(bool, actor_set, 0, 0),
	LCF_STRUCT_TYPED_FIELD(std::vector<bool>, actor_set, 1, 0),
	LCF_STRUCT_SIZE_FIELD(bool, state_set, 0, 0),
	LCF_STRUCT_TYPED_FIELD(std::vector<bool>, state_set, 1, 0),
	LCF_STRUCT_SIZE_FIELD(bool, attribute_set, 0, 0),
	LCF_STRUCT_TYPED_FIELD(std::vector<bool>, attribute_set, 1, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, state_chance, 0, 0),
	LCF_STRUCT_TYPED_FIELD(bool, state_effect, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, weapon_animation, 0, 1),
	LCF_STRUCT_TYPED_FIELD(std::vector<RPG::ItemAnimation>, animation_data, 1, 1),
	LCF_STRUCT_TYPED_FIELD(bool, use_skill, 0, 1),
	LCF_STRUCT_SIZE_FIELD(bool, class_set, 0, 1),
	LCF_STRUCT_TYPED_FIELD(std::vector<bool>, class_set, 1, 1),
	LCF_STRUCT_TYPED_FIELD(int32_t, ranged_trajectory, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, ranged_target, 0, 0),
LCF_STRUCT_FIELDS_END()

#undef LCF_CURRENT_STRUCT
#undef LCF_CHUNK_SUFFIX
