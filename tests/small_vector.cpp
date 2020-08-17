/*
 * This file is part of liblcf. Copyright (c) 2020 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#include "lcf/small_vector.h"
#include "doctest.h"

using namespace lcf;

template class lcf::SmallVector<int,0>;
template class lcf::SmallVector<int,4>;

TEST_SUITE_BEGIN("SmallVector");


TEST_SUITE_END();
