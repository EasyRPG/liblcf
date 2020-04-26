/*
 * This file is part of liblcf. Copyright (c) 2020 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#ifndef LCF_SAVEOPT_H
#define LCF_SAVEOPT_H

/**
 * Options to configure how LDB file is saved
 */
enum class SaveOpt {
	eNone = 0,
	ePreserveHeader = 1
};

constexpr SaveOpt operator|(SaveOpt l, SaveOpt r) { return SaveOpt(int(l) | int(r)); }
constexpr SaveOpt operator&(SaveOpt l, SaveOpt r) { return SaveOpt(int(l) & int(r)); }
constexpr SaveOpt operator^(SaveOpt l, SaveOpt r) { return SaveOpt(int(l) ^ int(r)); }
constexpr SaveOpt operator~(SaveOpt l) { return SaveOpt(~int(l)); }

#endif

