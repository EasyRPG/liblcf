/*
 * This file is part of liblcf. Copyright (c) liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#ifndef LCF_LOG_H
#define LCF_LOG_H

#include "lcf/log_handler.h"

namespace lcf {
namespace Log {

void Debug(const char* fmt, ...);
void Warning(const char* fmt, ...);
void Error(const char* fmt, ...);

} // namespace Log
} // namespace lcf

#endif