/* !!!! GENERATED FILE - DO NOT EDIT !!!!
 * --------------------------------------
 *
 * This file is part of liblcf. Copyright (c) 2017 liblcf authors.
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
	LCF_STRUCT_TYPED_FIELD(std::string, name),
	LCF_STRUCT_TYPED_FIELD(std::string, title),
	LCF_STRUCT_TYPED_FIELD(std::string, sprite_name),
	LCF_STRUCT_TYPED_FIELD(int32_t, sprite_id),
	LCF_STRUCT_TYPED_FIELD(int32_t, sprite_flags),
	LCF_STRUCT_TYPED_FIELD(std::string, face_name),
	LCF_STRUCT_TYPED_FIELD(int32_t, face_id),
	LCF_STRUCT_TYPED_FIELD(int32_t, level),
	LCF_STRUCT_TYPED_FIELD(int32_t, exp),
	LCF_STRUCT_TYPED_FIELD(int32_t, hp_mod),
	LCF_STRUCT_TYPED_FIELD(int32_t, sp_mod),
	LCF_STRUCT_TYPED_FIELD(int32_t, attack_mod),
	LCF_STRUCT_TYPED_FIELD(int32_t, defense_mod),
	LCF_STRUCT_TYPED_FIELD(int32_t, spirit_mod),
	LCF_STRUCT_TYPED_FIELD(int32_t, agility_mod),
	LCF_STRUCT_TYPED_FIELD(int32_t, skills_size),
	LCF_STRUCT_TYPED_FIELD(std::vector<int16_t>, skills),
	LCF_STRUCT_TYPED_FIELD(std::vector<int16_t>, equipped),
	LCF_STRUCT_TYPED_FIELD(int32_t, current_hp),
	LCF_STRUCT_TYPED_FIELD(int32_t, current_sp),
	LCF_STRUCT_TYPED_FIELD(std::vector<int32_t>, battle_commands),
	LCF_STRUCT_TYPED_FIELD(int32_t, status_size),
	LCF_STRUCT_TYPED_FIELD(std::vector<int16_t>, status),
	LCF_STRUCT_TYPED_FIELD(bool, changed_battle_commands),
	LCF_STRUCT_TYPED_FIELD(int32_t, class_id),
	LCF_STRUCT_TYPED_FIELD(int32_t, row),
	LCF_STRUCT_TYPED_FIELD(bool, two_weapon),
	LCF_STRUCT_TYPED_FIELD(bool, lock_equipment),
	LCF_STRUCT_TYPED_FIELD(bool, auto_battle),
	LCF_STRUCT_TYPED_FIELD(bool, super_guard),
	LCF_STRUCT_TYPED_FIELD(int32_t, battler_animation),
LCF_STRUCT_FIELDS_END()

#undef LCF_CURRENT_STRUCT
#undef LCF_CHUNK_SUFFIX
