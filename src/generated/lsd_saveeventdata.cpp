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

// Read SaveEventData.

#define LCF_CHUNK_SUFFIX LSD_Reader
#define LCF_CURRENT_STRUCT SaveEventData

LCF_STRUCT_FIELDS_BEGIN()
	LCF_STRUCT_TYPED_FIELD(std::vector<RPG::SaveEventCommands>, commands),
	LCF_STRUCT_TYPED_FIELD(bool, show_message),
	LCF_STRUCT_TYPED_FIELD(int, unknown_0b_escape),
	LCF_STRUCT_TYPED_FIELD(bool, wait_movement),
	LCF_STRUCT_TYPED_FIELD(bool, keyinput_wait),
	LCF_STRUCT_TYPED_FIELD(uint8_t, keyinput_variable),
	LCF_STRUCT_TYPED_FIELD(bool, keyinput_all_directions),
	LCF_STRUCT_TYPED_FIELD(bool, keyinput_decision),
	LCF_STRUCT_TYPED_FIELD(bool, keyinput_cancel),
	LCF_STRUCT_TYPED_FIELD(bool, keyinput_numbers),
	LCF_STRUCT_TYPED_FIELD(bool, keyinput_operators),
	LCF_STRUCT_TYPED_FIELD(bool, keyinput_shift),
	LCF_STRUCT_TYPED_FIELD(bool, keyinput_value_right),
	LCF_STRUCT_TYPED_FIELD(bool, keyinput_value_up),
	LCF_STRUCT_TYPED_FIELD(int, wait_time),
	LCF_STRUCT_TYPED_FIELD(int, keyinput_time_variable),
	LCF_STRUCT_TYPED_FIELD(bool, keyinput_down),
	LCF_STRUCT_TYPED_FIELD(bool, keyinput_left),
	LCF_STRUCT_TYPED_FIELD(bool, keyinput_right),
	LCF_STRUCT_TYPED_FIELD(bool, keyinput_up),
	LCF_STRUCT_TYPED_FIELD(bool, keyinput_timed),
	LCF_STRUCT_TYPED_FIELD(int, unknown_2a_time_left),
LCF_STRUCT_FIELDS_END()

#undef LCF_CURRENT_STRUCT
#undef LCF_CHUNK_SUFFIX
