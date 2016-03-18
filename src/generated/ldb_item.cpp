/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2016 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

// Headers
#include "ldb_reader.h"
#include "ldb_chunks.h"
#include "reader_struct.h"

// Read Item.

#define LCF_CHUNK_SUFFIX LDB_Reader
#define LCF_CURRENT_STRUCT Item

LCF_STRUCT_FIELDS_BEGIN()
	LCF_STRUCT_TYPED_FIELD(std::string, name),
	LCF_STRUCT_TYPED_FIELD(std::string, description),
	LCF_STRUCT_TYPED_FIELD(int, type),
	LCF_STRUCT_TYPED_FIELD(int, price),
	LCF_STRUCT_TYPED_FIELD(int, uses),
	LCF_STRUCT_TYPED_FIELD(int, atk_points1),
	LCF_STRUCT_TYPED_FIELD(int, def_points1),
	LCF_STRUCT_TYPED_FIELD(int, spi_points1),
	LCF_STRUCT_TYPED_FIELD(int, agi_points1),
	LCF_STRUCT_TYPED_FIELD(bool, two_handed),
	LCF_STRUCT_TYPED_FIELD(int, sp_cost),
	LCF_STRUCT_TYPED_FIELD(int, hit),
	LCF_STRUCT_TYPED_FIELD(int, critical_hit),
	LCF_STRUCT_TYPED_FIELD(int, animation_id),
	LCF_STRUCT_TYPED_FIELD(bool, preemptive),
	LCF_STRUCT_TYPED_FIELD(bool, dual_attack),
	LCF_STRUCT_TYPED_FIELD(bool, attack_all),
	LCF_STRUCT_TYPED_FIELD(bool, ignore_evasion),
	LCF_STRUCT_TYPED_FIELD(bool, prevent_critical),
	LCF_STRUCT_TYPED_FIELD(bool, raise_evasion),
	LCF_STRUCT_TYPED_FIELD(bool, half_sp_cost),
	LCF_STRUCT_TYPED_FIELD(bool, no_terrain_damage),
	LCF_STRUCT_TYPED_FIELD(bool, cursed),
	LCF_STRUCT_TYPED_FIELD(bool, entire_party),
	LCF_STRUCT_TYPED_FIELD(int, recover_hp_rate),
	LCF_STRUCT_TYPED_FIELD(int, recover_hp),
	LCF_STRUCT_TYPED_FIELD(int, recover_sp_rate),
	LCF_STRUCT_TYPED_FIELD(int, recover_sp),
	LCF_STRUCT_TYPED_FIELD(bool, occasion_field1),
	LCF_STRUCT_TYPED_FIELD(bool, ko_only),
	LCF_STRUCT_TYPED_FIELD(int, max_hp_points),
	LCF_STRUCT_TYPED_FIELD(int, max_sp_points),
	LCF_STRUCT_TYPED_FIELD(int, atk_points2),
	LCF_STRUCT_TYPED_FIELD(int, def_points2),
	LCF_STRUCT_TYPED_FIELD(int, spi_points2),
	LCF_STRUCT_TYPED_FIELD(int, agi_points2),
	LCF_STRUCT_TYPED_FIELD(int, using_message),
	LCF_STRUCT_TYPED_FIELD(int, skill_id),
	LCF_STRUCT_TYPED_FIELD(int, switch_id),
	LCF_STRUCT_TYPED_FIELD(bool, occasion_field2),
	LCF_STRUCT_TYPED_FIELD(bool, occasion_battle),
	LCF_STRUCT_SIZE_FIELD(bool, actor_set),
	LCF_STRUCT_TYPED_FIELD(std::vector<bool>, actor_set),
	LCF_STRUCT_SIZE_FIELD(bool, state_set),
	LCF_STRUCT_TYPED_FIELD(std::vector<bool>, state_set),
	LCF_STRUCT_SIZE_FIELD(bool, attribute_set),
	LCF_STRUCT_TYPED_FIELD(std::vector<bool>, attribute_set),
	LCF_STRUCT_TYPED_FIELD(int, state_chance),
	LCF_STRUCT_TYPED_FIELD(bool, state_effect),
	LCF_STRUCT_TYPED_FIELD(int, weapon_animation),
	LCF_STRUCT_TYPED_FIELD(std::vector<RPG::ItemAnimation>, animation_data),
	LCF_STRUCT_TYPED_FIELD(bool, use_skill),
	LCF_STRUCT_SIZE_FIELD(bool, class_set),
	LCF_STRUCT_TYPED_FIELD(std::vector<bool>, class_set),
	LCF_STRUCT_TYPED_FIELD(int, ranged_trajectory),
	LCF_STRUCT_TYPED_FIELD(int, ranged_target),
LCF_STRUCT_FIELDS_END()

#undef LCF_CURRENT_STRUCT
#undef LCF_CHUNK_SUFFIX
