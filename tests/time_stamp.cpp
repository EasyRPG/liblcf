/*
 * This file is part of liblcf. Copyright (c) 2020 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#include "lcf/lsd/reader.h"
#include "doctest.h"

using namespace lcf;

TEST_SUITE_BEGIN("timestamps");

static void CheckTime(double val, int year, int month, int day, int hour,
                      int minute, int second) {
	std::time_t const current = LSD_Reader::ToUnixTimestamp(val);
	std::tm const* t = std::gmtime(&current);

	CHECK_EQ(t->tm_year, year - 1900);
	CHECK_EQ(t->tm_mon + 1, month);
	CHECK_EQ(t->tm_mday, day);
	CHECK_EQ(t->tm_hour, hour);
	CHECK_EQ(t->tm_min, minute);
	CHECK_EQ(t->tm_sec, second);
}

TEST_CASE("comparison") {
	// 27468.96875 => 1975 年 3 月 15 日 11:15:00 P.M.
	CheckTime(27468.96875, 1975, 3, 15, 23, 15, 0);

	// 36836.125   => 2000 年 11 月 6 日  3:00:00 A.M.
	CheckTime(36836.125, 2000, 11, 6, 3, 0, 0);

	// 36295.0     => 1999/5/15         12:00:00 AM
	CheckTime(36295.0, 1999, 5, 15, 0, 0, 0);

	// 36232.9375  => 1999/3/13         22:30:00 (10:30:00 PM)
	CheckTime(36232.9375, 1999, 3, 13, 22, 30, 0);
}

TEST_CASE("conversion to Unix timestamp") {
	std::time_t const current = std::time(NULL);
	double const current_tdatetime = LSD_Reader::ToTDateTime(current);

	CHECK(current == LSD_Reader::ToUnixTimestamp(current_tdatetime));
}

TEST_CASE("conversion to TDateTime") {
	double const current = LSD_Reader::ToTDateTime(std::time(NULL));
	std::time_t const current_timestamp = LSD_Reader::ToUnixTimestamp(current);

	/* small rounding difference allowed */
	CHECK(doctest::Approx(current) == LSD_Reader::ToTDateTime(current_timestamp));
}

TEST_SUITE_END();
