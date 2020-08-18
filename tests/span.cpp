/*
 * This file is part of liblcf. Copyright (c) 2020 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#include "lcf/span.h"
#include "doctest.h"

#include <string>
#include <vector>
#include <array>

using namespace lcf;

using arr_t = int[5];
static_assert(std::is_same<decltype(MakeSpan(std::declval<Span<int>&>())),Span<int>>::value, "MakeSpan Broken");

static_assert(std::is_same<decltype(MakeSpan(std::declval<std::vector<int>>())),Span<const int>>::value, "MakeSpan Broken");
static_assert(std::is_same<decltype(MakeSpan(std::declval<std::vector<int>&>())),Span<int>>::value, "MakeSpan Broken");

static_assert(std::is_same<decltype(MakeSpan(std::declval<std::array<int,5>>())),Span<const int,5>>::value, "MakeSpan Broken");
static_assert(std::is_same<decltype(MakeSpan(std::declval<std::array<int,5>&>())),Span<int,5>>::value, "MakeSpan Broken");
static_assert(std::is_same<decltype(MakeSpan(std::declval<std::array<const int,5>>())),Span<const int,5>>::value, "MakeSpan Broken");
static_assert(std::is_same<decltype(MakeSpan(std::declval<std::array<const int,5>&>())),Span<const int,5>>::value, "MakeSpan Broken");

static_assert(std::is_same<decltype(MakeSpan(std::declval<int[5]>())),Span<const int>>::value, "MakeSpan Broken");
static_assert(std::is_same<decltype(MakeSpan(std::declval<int(&)[5]>())),Span<int,5>>::value, "MakeSpan Broken");
static_assert(std::is_same<decltype(MakeSpan(std::declval<const int[5]>())),Span<const int,5>>::value, "MakeSpan Broken");
static_assert(std::is_same<decltype(MakeSpan(std::declval<const int(&)[5]>())),Span<const int,5>>::value, "MakeSpan Broken");

TEST_SUITE_BEGIN("Span");

TEST_CASE_TEMPLATE("Construct", T, int, double, std::string) {
	Span<T> x;
}

TEST_SUITE_END();
