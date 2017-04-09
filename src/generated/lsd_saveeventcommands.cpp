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

// Read SaveEventCommands.

#define LCF_CHUNK_SUFFIX LSD_Reader
#define LCF_CURRENT_STRUCT SaveEventCommands

LCF_STRUCT_FIELDS_BEGIN()
	LCF_STRUCT_TYPED_FIELD(int, commands_size),
	LCF_STRUCT_TYPED_FIELD(std::vector<RPG::EventCommand>, commands),
	LCF_STRUCT_TYPED_FIELD(int, current_command),
	LCF_STRUCT_TYPED_FIELD(int, event_id),
	LCF_STRUCT_TYPED_FIELD(bool, actioned),
	LCF_STRUCT_TYPED_FIELD(int, unknown_15_subcommand_path_size),
	LCF_STRUCT_TYPED_FIELD(std::vector<uint8_t>, unknown_16_subcommand_path),
LCF_STRUCT_FIELDS_END()

#undef LCF_CURRENT_STRUCT
#undef LCF_CHUNK_SUFFIX
