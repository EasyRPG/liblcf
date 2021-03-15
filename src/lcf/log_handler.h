/*
 * This file is part of liblcf. Copyright (c) 2020 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#ifndef LCF_OUTPUT_H
#define LCF_OUTPUT_H

#include "string_view.h"

namespace lcf {
namespace LogHandler {

enum class Level {
	Debug,
	Warning,
	Error,
	Highest
};

using LogHandlerFn = void (*)(Level level, StringView message);

/**
 * Sets the output handler for all lcf logging.
 * The default handler prints to standard error.
 *
 * @param fn New output handler. nullptr for default handler.
 */
void SetHandler(LogHandlerFn fn);

/**
 * Only report issues that have at least this log level.
 * Use Highest to disable logging.
 * Default: Debug
 *
 * @param new_level New log level
 */
void SetLevel(Level new_level);

} // namespace LogHandler
} // namespace lcf

#endif
