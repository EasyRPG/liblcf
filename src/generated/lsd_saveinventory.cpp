/* !!!! GENERATED FILE - DO NOT EDIT !!!!
 * --------------------------------------
 *
 * This file is part of liblcf. Copyright (c) 2019 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

// Headers
#include "lsd_reader.h"
#include "lsd_chunks.h"
#include "reader_struct_impl.h"

// Read SaveInventory.

template <>
char const* const Struct<RPG::SaveInventory>::name = "SaveInventory";

template <>
Field<RPG::SaveInventory> const* Struct<RPG::SaveInventory>::fields[] = {
	new TypedField<RPG::SaveInventory, int32_t>(
		&RPG::SaveInventory::party_size,
		LSD_Reader::ChunkSaveInventory::party_size,
		"party_size",
		0,
		0
	),
	new TypedField<RPG::SaveInventory, std::vector<int16_t>>(
		&RPG::SaveInventory::party,
		LSD_Reader::ChunkSaveInventory::party,
		"party",
		1,
		0
	),
	new CountField<RPG::SaveInventory, int16_t>(
		&RPG::SaveInventory::item_ids,
		LSD_Reader::ChunkSaveInventory::item_ids_size,
		1,
		0
	),
	new TypedField<RPG::SaveInventory, std::vector<int16_t>>(
		&RPG::SaveInventory::item_ids,
		LSD_Reader::ChunkSaveInventory::item_ids,
		"item_ids",
		1,
		0
	),
	new TypedField<RPG::SaveInventory, std::vector<uint8_t>>(
		&RPG::SaveInventory::item_counts,
		LSD_Reader::ChunkSaveInventory::item_counts,
		"item_counts",
		1,
		0
	),
	new TypedField<RPG::SaveInventory, std::vector<uint8_t>>(
		&RPG::SaveInventory::item_usage,
		LSD_Reader::ChunkSaveInventory::item_usage,
		"item_usage",
		1,
		0
	),
	new TypedField<RPG::SaveInventory, int32_t>(
		&RPG::SaveInventory::gold,
		LSD_Reader::ChunkSaveInventory::gold,
		"gold",
		0,
		0
	),
	new TypedField<RPG::SaveInventory, int32_t>(
		&RPG::SaveInventory::timer1_frames,
		LSD_Reader::ChunkSaveInventory::timer1_frames,
		"timer1_frames",
		0,
		0
	),
	new TypedField<RPG::SaveInventory, bool>(
		&RPG::SaveInventory::timer1_active,
		LSD_Reader::ChunkSaveInventory::timer1_active,
		"timer1_active",
		0,
		0
	),
	new TypedField<RPG::SaveInventory, bool>(
		&RPG::SaveInventory::timer1_visible,
		LSD_Reader::ChunkSaveInventory::timer1_visible,
		"timer1_visible",
		0,
		0
	),
	new TypedField<RPG::SaveInventory, bool>(
		&RPG::SaveInventory::timer1_battle,
		LSD_Reader::ChunkSaveInventory::timer1_battle,
		"timer1_battle",
		0,
		0
	),
	new TypedField<RPG::SaveInventory, int32_t>(
		&RPG::SaveInventory::timer2_frames,
		LSD_Reader::ChunkSaveInventory::timer2_frames,
		"timer2_frames",
		0,
		0
	),
	new TypedField<RPG::SaveInventory, bool>(
		&RPG::SaveInventory::timer2_active,
		LSD_Reader::ChunkSaveInventory::timer2_active,
		"timer2_active",
		0,
		0
	),
	new TypedField<RPG::SaveInventory, bool>(
		&RPG::SaveInventory::timer2_visible,
		LSD_Reader::ChunkSaveInventory::timer2_visible,
		"timer2_visible",
		0,
		0
	),
	new TypedField<RPG::SaveInventory, bool>(
		&RPG::SaveInventory::timer2_battle,
		LSD_Reader::ChunkSaveInventory::timer2_battle,
		"timer2_battle",
		0,
		0
	),
	new TypedField<RPG::SaveInventory, int32_t>(
		&RPG::SaveInventory::battles,
		LSD_Reader::ChunkSaveInventory::battles,
		"battles",
		0,
		0
	),
	new TypedField<RPG::SaveInventory, int32_t>(
		&RPG::SaveInventory::defeats,
		LSD_Reader::ChunkSaveInventory::defeats,
		"defeats",
		0,
		0
	),
	new TypedField<RPG::SaveInventory, int32_t>(
		&RPG::SaveInventory::escapes,
		LSD_Reader::ChunkSaveInventory::escapes,
		"escapes",
		0,
		0
	),
	new TypedField<RPG::SaveInventory, int32_t>(
		&RPG::SaveInventory::victories,
		LSD_Reader::ChunkSaveInventory::victories,
		"victories",
		0,
		0
	),
	new TypedField<RPG::SaveInventory, int32_t>(
		&RPG::SaveInventory::turns,
		LSD_Reader::ChunkSaveInventory::turns,
		"turns",
		0,
		0
	),
	new TypedField<RPG::SaveInventory, int32_t>(
		&RPG::SaveInventory::steps,
		LSD_Reader::ChunkSaveInventory::steps,
		"steps",
		0,
		0
	),
	NULL
};

template class Struct<RPG::SaveInventory>;
