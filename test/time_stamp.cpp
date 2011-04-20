#include <gtest/gtest.h>
#include <cmath>
#include <cassert>
#include <iostream>
#include "rpg_save.h"


TEST(TimeStamp, ToMicrosoftAccessTime) {
	#define CheckTime(val, year, month, day, hour, minute, second) { \
			std::time_t const current = RPG::ToUnixTime(val);			 \
		struct tm const* const t = std::gmtime(&current); \
		 \
		ASSERT_EQ(t->tm_year, year - 1900); \
		ASSERT_EQ(t->tm_mon + 1, month); \
		ASSERT_EQ(t->tm_mday, day); \
		ASSERT_EQ(t->tm_hour, hour); \
		ASSERT_EQ(t->tm_min, minute); \
		ASSERT_EQ(t->tm_sec, second); \
	} \

	// 27468.96875   27468     1975 年 3 月 15 日    .96875    11:15:00 P.M.
	CheckTime(27468.96875, 1975, 3, 15, 23, 15, 0);
	// 36836.125     36836     2000 年 11 月 6 日    .125       3:00:00 A.M.
	CheckTime(36836.125, 2000, 11, 6, 3, 0, 0);
	// 36295.0                 1999/5/15           1999/05/15 12:00:00 AM
	CheckTime(36295.0, 1999, 5, 15, 0, 0, 0);
	// 36232.9375              1999/03/13 22:30:00 1999/03/13 10:30:00 PM
	CheckTime(36232.9375, 1999, 3, 13, 22, 30, 0);

	#undef CheckTime
}

TEST(TimeStamp, ToUnixTime) {
	std::time_t const current = std::floor(std::time(NULL) / 1000.0) * 1000.0;
	ASSERT_EQ(current, RPG::ToUnixTime(RPG::ToMicrosoftAccessTime(current)));
}

TEST(TimeStamp, GenerateTimeStamp) {
	double const current = RPG::ToMicrosoftAccessTime(std::floor(std::time(NULL) / 1000.0) * 1000.0);
	ASSERT_EQ(current, RPG::ToMicrosoftAccessTime(RPG::ToUnixTime(current)));
}
