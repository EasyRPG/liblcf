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

#ifndef LCF_RPG_TREEMAP_H
#define LCF_RPG_TREEMAP_H

// Headers
#include <stdint.h>
#include <vector>
#include "rpg_mapinfo.h"
#include "rpg_start.h"

/**
 * RPG::TreeMap class.
 */
namespace RPG {
	class TreeMap {
	public:
		std::string lmt_header;
		enum class MapType {
			Root = 0,
			Map = 1,
			Area = 2
		};

		std::vector<MapInfo> maps;
		std::vector<int32_t> tree_order;
		int32_t active_node = 0;
		Start start;
	};

	inline bool operator==(const TreeMap& l, const TreeMap& r) {
		return l.maps == r.maps
		&& l.tree_order == r.tree_order
		&& l.active_node == r.active_node
		&& l.start == r.start;
	}

	inline bool operator!=(const TreeMap& l, const TreeMap& r) {
		return !(l == r);
	}
}

LCF_DEFINE_ENUM_TRAITS(RPG::TreeMap::MapType, true, Root, Area);

LCF_DEFINE_ENUM_TAGS(RPG::TreeMap::MapType, (makeEnumTags<RPG::TreeMap::MapType>({{
	"Root",
	"Map",
	"Area"
	}})));


#endif
