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

#ifndef LCF_RPG_MOVECOMMAND_H
#define LCF_RPG_MOVECOMMAND_H

// Headers
#include <stdint.h>
#include <string>
#include "enum_tags.h"

/**
 * RPG::MoveCommand class.
 */
namespace RPG {
	class MoveCommand {
	public:
		enum class Code {
			MoveUp = 0,
			MoveRight = 1,
			MoveDown = 2,
			MoveLeft = 3,
			MoveUpright = 4,
			MoveDownright = 5,
			MoveDownleft = 6,
			MoveUpleft = 7,
			MoveRandom = 8,
			MoveTowardsHero = 9,
			MoveAwayFromHero = 10,
			MoveForward = 11,
			FaceUp = 12,
			FaceRight = 13,
			FaceDown = 14,
			FaceLeft = 15,
			Turn90DegreeRight = 16,
			Turn90DegreeLeft = 17,
			Turn180Degree = 18,
			Turn90DegreeRandom = 19,
			FaceRandomDirection = 20,
			FaceHero = 21,
			FaceAwayFromHero = 22,
			Wait = 23,
			BeginJump = 24,
			EndJump = 25,
			LockFacing = 26,
			UnlockFacing = 27,
			IncreaseMovementSpeed = 28,
			DecreaseMovementSpeed = 29,
			IncreaseMovementFrequence = 30,
			DecreaseMovementFrequence = 31,
			SwitchOn = 32,
			SwitchOff = 33,
			ChangeGraphic = 34,
			PlaySoundEffect = 35,
			WalkEverywhereOn = 36,
			WalkEverywhereOff = 37,
			StopAnimation = 38,
			StartAnimation = 39,
			IncreaseTransp = 40,
			DecreaseTransp = 41
		};

		int32_t command_id = 0;
		std::string parameter_string;
		int32_t parameter_a = 0;
		int32_t parameter_b = 0;
		int32_t parameter_c = 0;
	};

	inline bool operator==(const MoveCommand& l, const MoveCommand& r) {
		return l.command_id == r.command_id
		&& l.parameter_string == r.parameter_string
		&& l.parameter_a == r.parameter_a
		&& l.parameter_b == r.parameter_b
		&& l.parameter_c == r.parameter_c;
	}

	inline bool operator!=(const MoveCommand& l, const MoveCommand& r) {
		return !(l == r);
	}
}

LCF_DEFINE_ENUM_TRAITS(RPG::MoveCommand::Code, true, MoveUp, DecreaseTransp);

LCF_DEFINE_ENUM_TAGS(RPG::MoveCommand::Code, (makeEnumTags<RPG::MoveCommand::Code>({{
	"MoveUp",
	"MoveRight",
	"MoveDown",
	"MoveLeft",
	"MoveUpright",
	"MoveDownright",
	"MoveDownleft",
	"MoveUpleft",
	"MoveRandom",
	"MoveTowardsHero",
	"MoveAwayFromHero",
	"MoveForward",
	"FaceUp",
	"FaceRight",
	"FaceDown",
	"FaceLeft",
	"Turn90DegreeRight",
	"Turn90DegreeLeft",
	"Turn180Degree",
	"Turn90DegreeRandom",
	"FaceRandomDirection",
	"FaceHero",
	"FaceAwayFromHero",
	"Wait",
	"BeginJump",
	"EndJump",
	"LockFacing",
	"UnlockFacing",
	"IncreaseMovementSpeed",
	"DecreaseMovementSpeed",
	"IncreaseMovementFrequence",
	"DecreaseMovementFrequence",
	"SwitchOn",
	"SwitchOff",
	"ChangeGraphic",
	"PlaySoundEffect",
	"WalkEverywhereOn",
	"WalkEverywhereOff",
	"StopAnimation",
	"StartAnimation",
	"IncreaseTransp",
	"DecreaseTransp"
	}})));


#endif
