/* !!!! GENERATED FILE - DO NOT EDIT !!!!
 * --------------------------------------
 *
 * This file is part of liblcf. Copyright (c) liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#ifndef LCF_RPG_SAVEEVENTEXECSTATE_H
#define LCF_RPG_SAVEEVENTEXECSTATE_H

// Headers
#include <stdint.h>
#include <vector>
#include "lcf/dbstring.h"
#include "lcf/rpg/saveeventexecframe.h"
#include "lcf/context.h"
#include <ostream>
#include <type_traits>

/**
 * rpg::SaveEventExecState class.
 */
namespace lcf {
namespace rpg {
	class SaveEventExecState {
	public:
		enum class RuntimeFlags {
			conf_override_active = 0x01,
			patch_destiny_on = 0x10,
			patch_destiny_off = 0x20,
			patch_dynrpg_on = 0x40,
			patch_dynrpg_off = 0x80,
			patch_maniac_on = 0x100,
			patch_maniac_of = 0x200,
			patch_common_this_event_on = 0x400,
			patch_common_this_event_off = 0x800,
			patch_unlock_pics_on = 0x1000,
			patch_unlock_pics_off = 0x2000,
			patch_keypatch_on = 0x4000,
			patch_keypatch_off = 0x8000,
			patch_rpg2k3_cmds_on = 0x10000,
			patch_rpg2k3_cmds_off = 0x20000,
			use_rpg2k_battle_system_on = 0x40000,
			use_rpg2k_battle_system_off = 0x80000
		};
		static constexpr auto kRuntimeFlagsTags = lcf::EnumTags{
			RuntimeFlags::conf_override_active, "conf_override_active",
			RuntimeFlags::patch_destiny_on, "patch_destiny_on",
			RuntimeFlags::patch_destiny_off, "patch_destiny_off",
			RuntimeFlags::patch_dynrpg_on, "patch_dynrpg_on",
			RuntimeFlags::patch_dynrpg_off, "patch_dynrpg_off",
			RuntimeFlags::patch_maniac_on, "patch_maniac_on",
			RuntimeFlags::patch_maniac_of, "patch_maniac_of",
			RuntimeFlags::patch_common_this_event_on, "patch_common_this_event_on",
			RuntimeFlags::patch_common_this_event_off, "patch_common_this_event_off",
			RuntimeFlags::patch_unlock_pics_on, "patch_unlock_pics_on",
			RuntimeFlags::patch_unlock_pics_off, "patch_unlock_pics_off",
			RuntimeFlags::patch_keypatch_on, "patch_keypatch_on",
			RuntimeFlags::patch_keypatch_off, "patch_keypatch_off",
			RuntimeFlags::patch_rpg2k3_cmds_on, "patch_rpg2k3_cmds_on",
			RuntimeFlags::patch_rpg2k3_cmds_off, "patch_rpg2k3_cmds_off",
			RuntimeFlags::use_rpg2k_battle_system_on, "use_rpg2k_battle_system_on",
			RuntimeFlags::use_rpg2k_battle_system_off, "use_rpg2k_battle_system_off"
		};

		std::vector<SaveEventExecFrame> stack;
		bool show_message = false;
		bool abort_on_escape = false;
		bool wait_movement = false;
		bool keyinput_wait = false;
		uint8_t keyinput_variable = 0;
		bool keyinput_all_directions = false;
		int32_t keyinput_decision = 0;
		int32_t keyinput_cancel = 0;
		int32_t keyinput_2kshift_2k3numbers = 0;
		int32_t keyinput_2kdown_2k3operators = 0;
		int32_t keyinput_2kleft_2k3shift = 0;
		int32_t keyinput_2kright = 0;
		int32_t keyinput_2kup = 0;
		int32_t wait_time = 0;
		int32_t keyinput_time_variable = 0;
		int32_t keyinput_2k3down = 0;
		int32_t keyinput_2k3left = 0;
		int32_t keyinput_2k3right = 0;
		int32_t keyinput_2k3up = 0;
		bool keyinput_timed = false;
		bool wait_key_enter = false;
		uint32_t easyrpg_runtime_flags = 0;
		bool easyrpg_active = false;
		DBString easyrpg_string;
		std::vector<int32_t> easyrpg_parameters;
	};
	inline std::ostream& operator<<(std::ostream& os, SaveEventExecState::RuntimeFlags code) {
		os << static_cast<std::underlying_type_t<decltype(code)>>(code);
		return os;
	}

	inline bool operator==(const SaveEventExecState& l, const SaveEventExecState& r) {
		return l.stack == r.stack
		&& l.show_message == r.show_message
		&& l.abort_on_escape == r.abort_on_escape
		&& l.wait_movement == r.wait_movement
		&& l.keyinput_wait == r.keyinput_wait
		&& l.keyinput_variable == r.keyinput_variable
		&& l.keyinput_all_directions == r.keyinput_all_directions
		&& l.keyinput_decision == r.keyinput_decision
		&& l.keyinput_cancel == r.keyinput_cancel
		&& l.keyinput_2kshift_2k3numbers == r.keyinput_2kshift_2k3numbers
		&& l.keyinput_2kdown_2k3operators == r.keyinput_2kdown_2k3operators
		&& l.keyinput_2kleft_2k3shift == r.keyinput_2kleft_2k3shift
		&& l.keyinput_2kright == r.keyinput_2kright
		&& l.keyinput_2kup == r.keyinput_2kup
		&& l.wait_time == r.wait_time
		&& l.keyinput_time_variable == r.keyinput_time_variable
		&& l.keyinput_2k3down == r.keyinput_2k3down
		&& l.keyinput_2k3left == r.keyinput_2k3left
		&& l.keyinput_2k3right == r.keyinput_2k3right
		&& l.keyinput_2k3up == r.keyinput_2k3up
		&& l.keyinput_timed == r.keyinput_timed
		&& l.wait_key_enter == r.wait_key_enter
		&& l.easyrpg_runtime_flags == r.easyrpg_runtime_flags
		&& l.easyrpg_active == r.easyrpg_active
		&& l.easyrpg_string == r.easyrpg_string
		&& l.easyrpg_parameters == r.easyrpg_parameters;
	}

	inline bool operator!=(const SaveEventExecState& l, const SaveEventExecState& r) {
		return !(l == r);
	}

	std::ostream& operator<<(std::ostream& os, const SaveEventExecState& obj);

	template <typename F, typename ParentCtx = Context<void,void>>
	void ForEachString(SaveEventExecState& obj, const F& f, const ParentCtx* parent_ctx = nullptr) {
		for (int i = 0; i < static_cast<int>(obj.stack.size()); ++i) {
			const auto ctx1 = Context<SaveEventExecState, ParentCtx>{ "stack", i, &obj, parent_ctx };
			ForEachString(obj.stack[i], f, &ctx1);
		}
		const auto ctx25 = Context<SaveEventExecState, ParentCtx>{ "easyrpg_string", -1, &obj, parent_ctx };
		f(obj.easyrpg_string, ctx25);
		(void)obj;
		(void)f;
		(void)parent_ctx;
	}

} // namespace rpg
} // namespace lcf

#endif
