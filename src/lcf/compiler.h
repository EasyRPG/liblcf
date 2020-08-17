/*
 * This file is part of liblcf. Copyright (c) 2020 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#ifndef LCF_COMPILER_H
#define LCF_COMPILER_H

#ifdef __GNUC__

#define LCF_LIKELY(x) __builtin_expect(!!(x), 1)
#define LCF_UNLIKELY(x) __builtin_expect(!!(x), 0)

#define LCF_ALWAYS_INLINE __attribute__((always_inline)) inline

#elif _MSC_VER

#define LCF_LIKELY(x) (x)
#define LCF_UNLIKELY(x) (x)

#define LCF_ALWAYS_INLINE __forceinline

#else

#define LCF_LIKELY(x) (x)
#define LCF_UNLIKELY(x) (x)

#define LCF_ALWAYS_INLINE inline

#endif


#endif
