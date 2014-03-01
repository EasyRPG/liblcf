/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2014 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

#ifndef LCF_RPG_SOUND_H
#define LCF_RPG_SOUND_H

// Headers
#include <string>

/**
 * RPG::Sound class.
 */
namespace RPG {
	class Sound {
	public:
		Sound();

		std::string name;
		int volume;
		int tempo;
		int balance;
	};
}

#endif
