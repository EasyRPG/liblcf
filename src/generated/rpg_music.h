/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2016 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

#ifndef LCF_RPG_MUSIC_H
#define LCF_RPG_MUSIC_H

// Headers
#include <string>

/**
 * RPG::Music class.
 */
namespace RPG {
	class Music {
	public:
		std::string name;
		int fadein = 0;
		int volume = 100;
		int tempo = 100;
		int balance = 50;
	};
}

#endif
