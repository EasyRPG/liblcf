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

// Read SaveEventCommands.

#define LCF_CHUNK_SUFFIX LSD_Reader
#define LCF_CURRENT_STRUCT SaveEventCommands

LCF_STRUCT_FIELDS_BEGIN()
	LCF_STRUCT_TYPED_FIELD(int32_t, commands_size, 0, 0),
	LCF_STRUCT_TYPED_FIELD(std::vector<RPG::EventCommand>, commands, 1, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, current_command, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, event_id, 0, 0),
	LCF_STRUCT_TYPED_FIELD(bool, actioned, 0, 0),
	LCF_STRUCT_SIZE_FIELD(uint8_t, subcommand_path, 0, 0),
	LCF_STRUCT_TYPED_FIELD(std::vector<uint8_t>, subcommand_path, 1, 0),
LCF_STRUCT_FIELDS_END()

#undef LCF_CURRENT_STRUCT
#undef LCF_CHUNK_SUFFIX
