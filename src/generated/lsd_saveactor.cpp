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
#include "lsd_reader.h"
#include "lsd_chunks.h"
#include "reader_struct.h"

// Read SaveActor.

#define LCF_CHUNK_SUFFIX LSD_Reader
#define LCF_CURRENT_STRUCT SaveActor

LCF_STRUCT_FIELDS_BEGIN()
	LCF_STRUCT_TYPED_FIELD(std::string, name, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, title, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, sprite_name, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, sprite_id, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, sprite_flags, 0, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, face_name, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, face_id, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, level, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, exp, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, hp_mod, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, sp_mod, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, attack_mod, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, defense_mod, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, spirit_mod, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, agility_mod, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, skills_size, 0, 0),
	LCF_STRUCT_TYPED_FIELD(std::vector<int16_t>, skills, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::vector<int16_t>, equipped, 1, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, current_hp, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, current_sp, 0, 0),
	LCF_STRUCT_TYPED_FIELD(std::vector<int32_t>, battle_commands, 0, 1),
	LCF_STRUCT_COUNT_FIELD(int16_t, status, 0, 0),
	LCF_STRUCT_TYPED_FIELD(std::vector<int16_t>, status, 1, 0),
	LCF_STRUCT_TYPED_FIELD(bool, changed_battle_commands, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, class_id, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, row, 0, 1),
	LCF_STRUCT_TYPED_FIELD(bool, two_weapon, 0, 0),
	LCF_STRUCT_TYPED_FIELD(bool, lock_equipment, 0, 0),
	LCF_STRUCT_TYPED_FIELD(bool, auto_battle, 0, 0),
	LCF_STRUCT_TYPED_FIELD(bool, super_guard, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, battler_animation, 0, 1),
LCF_STRUCT_FIELDS_END()

#undef LCF_CURRENT_STRUCT
#undef LCF_CHUNK_SUFFIX
