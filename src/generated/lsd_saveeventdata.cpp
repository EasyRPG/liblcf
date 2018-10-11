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

// Read SaveEventData.

#define LCF_CHUNK_SUFFIX LSD_Reader
#define LCF_CURRENT_STRUCT SaveEventData

LCF_STRUCT_FIELDS_BEGIN()
	LCF_STRUCT_TYPED_FIELD(std::vector<RPG::SaveEventCommands>, commands, 0),
	LCF_STRUCT_TYPED_FIELD(bool, show_message, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, unknown_0b_escape, 0),
	LCF_STRUCT_TYPED_FIELD(bool, wait_movement, 0),
	LCF_STRUCT_TYPED_FIELD(bool, keyinput_wait, 0),
	LCF_STRUCT_TYPED_FIELD(uint8_t, keyinput_variable, 0),
	LCF_STRUCT_TYPED_FIELD(bool, keyinput_all_directions, 0),
	LCF_STRUCT_TYPED_FIELD(bool, keyinput_decision, 0),
	LCF_STRUCT_TYPED_FIELD(bool, keyinput_cancel, 0),
	LCF_STRUCT_TYPED_FIELD(bool, keyinput_numbers, 0),
	LCF_STRUCT_TYPED_FIELD(bool, keyinput_operators, 0),
	LCF_STRUCT_TYPED_FIELD(bool, keyinput_shift, 0),
	LCF_STRUCT_TYPED_FIELD(bool, keyinput_value_right, 0),
	LCF_STRUCT_TYPED_FIELD(bool, keyinput_value_up, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, wait_time, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, keyinput_time_variable, 0),
	LCF_STRUCT_TYPED_FIELD(bool, keyinput_down, 0),
	LCF_STRUCT_TYPED_FIELD(bool, keyinput_left, 0),
	LCF_STRUCT_TYPED_FIELD(bool, keyinput_right, 0),
	LCF_STRUCT_TYPED_FIELD(bool, keyinput_up, 0),
	LCF_STRUCT_TYPED_FIELD(bool, keyinput_timed, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, unknown_2a_time_left, 0),
LCF_STRUCT_FIELDS_END()

#undef LCF_CURRENT_STRUCT
#undef LCF_CHUNK_SUFFIX
