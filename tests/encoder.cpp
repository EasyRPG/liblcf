/*
 * This file is part of liblcf. Copyright (c) liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#include "doctest.h"
#include "lcf/config.h"
#include "lcf/reader_util.h"
#include "lcf/encoder.h"

TEST_SUITE_BEGIN("encoder");

TEST_CASE("1252 (Western Europe)") {
	lcf::Encoder enc("1252");
	std::string orig = "\xBFH\xEBll\xF6\xA1"; // ¿Hëllö¡ in Latin-1
	std::string text = orig;
	enc.Encode(text);
	REQUIRE_EQ(text, "¿Hëllö¡");

	enc.Decode(text);
	REQUIRE_EQ(text, orig);
}

TEST_CASE("windows-1252 (Alias / Western Europe)") {
	lcf::Encoder enc("windows-1252");
	std::string orig = "\xBFH\xEBll\xF6\xA1"; // ¿Hëllö¡ in Latin-1
	std::string text = orig;
	enc.Encode(text);
	REQUIRE_EQ(text, "¿Hëllö¡");

	enc.Decode(text);
	REQUIRE_EQ(text, orig);
}

TEST_CASE("932 (Japanese)" * doctest::skip(LCF_SUPPORT_ICU == 0)) {
	lcf::Encoder enc("932");
	// こんにちは in Shift-JIS
	std::string orig = "\x82\xB1\x82\xF1\x82\xC9\x82\xBF\x82\xCD";
	std::string text = orig;
	enc.Encode(text);
	REQUIRE_EQ(text, "こんにちは");

	enc.Decode(text);
	REQUIRE_EQ(text, orig);
}

TEST_CASE("Normalize" * doctest::skip(LCF_SUPPORT_ICU == 0)) {
	REQUIRE_EQ(lcf::ReaderUtil::Normalize("ä①ÄБ"), "ä1äб");

	// The Å is precomposed, the å is precomposed
	REQUIRE_EQ(lcf::ReaderUtil::Normalize("Å"), "å");

	// The Å is A + ◌̊, the å is precomposed
	REQUIRE_EQ(lcf::ReaderUtil::Normalize("Å"), "å");
}

TEST_SUITE_END();
