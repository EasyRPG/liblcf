/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2016 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
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
	LCF_STRUCT_TYPED_FIELD(int, sprite_id),
	LCF_STRUCT_TYPED_FIELD(int, sprite_flags),
	LCF_STRUCT_TYPED_FIELD(std::string, face_name),
	LCF_STRUCT_TYPED_FIELD(int, face_id),
	LCF_STRUCT_TYPED_FIELD(int, level),
	LCF_STRUCT_TYPED_FIELD(int, exp),
	LCF_STRUCT_TYPED_FIELD(int, hp_mod),
	LCF_STRUCT_TYPED_FIELD(int, sp_mod),
	LCF_STRUCT_TYPED_FIELD(int, attack_mod),
	LCF_STRUCT_TYPED_FIELD(int, defense_mod),
	LCF_STRUCT_TYPED_FIELD(int, spirit_mod),
	LCF_STRUCT_TYPED_FIELD(int, agility_mod),
	LCF_STRUCT_TYPED_FIELD(int, skills_size),
	LCF_STRUCT_TYPED_FIELD(std::vector<int16_t>, skills),
	LCF_STRUCT_TYPED_FIELD(std::vector<int16_t>, equipped),
	LCF_STRUCT_TYPED_FIELD(int, current_hp),
	LCF_STRUCT_TYPED_FIELD(int, current_sp),
	LCF_STRUCT_TYPED_FIELD(std::vector<uint32_t>, battle_commands),
	LCF_STRUCT_TYPED_FIELD(int, status_size),
	LCF_STRUCT_TYPED_FIELD(std::vector<int16_t>, status),
	LCF_STRUCT_TYPED_FIELD(bool, changed_class),
	LCF_STRUCT_TYPED_FIELD(int, class_id),
	LCF_STRUCT_TYPED_FIELD(int, row),
	LCF_STRUCT_TYPED_FIELD(bool, two_weapon),
	LCF_STRUCT_TYPED_FIELD(bool, lock_equipment),
	LCF_STRUCT_TYPED_FIELD(bool, auto_battle),
	LCF_STRUCT_TYPED_FIELD(bool, super_guard),
	LCF_STRUCT_TYPED_FIELD(int, battler_animation),
LCF_STRUCT_FIELDS_END()

#undef LCF_CURRENT_STRUCT
#undef LCF_CHUNK_SUFFIX
