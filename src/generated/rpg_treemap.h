/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2016 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

#ifndef LCF_RPG_TREEMAP_H
#define LCF_RPG_TREEMAP_H

// Headers
#include <vector>
#include "rpg_mapinfo.h"
#include "rpg_start.h"

/**
 * RPG::TreeMap class.
 */
namespace RPG {
	class TreeMap {
	public:
		std::vector<MapInfo> maps;
		std::vector<int> tree_order;
		int active_node = 0;
		Start start;
	};
}

#endif
