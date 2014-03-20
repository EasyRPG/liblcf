/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2014 liblcf authors
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
		Music();

		std::string name;
		int fadein;
		int volume;
		int tempo;
		int balance;
	};
}

#endif
