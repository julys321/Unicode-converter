#include "pch.h"
#include "../Unicode-converter/UnicodeConverter.cpp"
TEST(ConvertToHexadecimal, expect_0_when_0) {
	UnicodeConverter unicodeConverter;
	EXPECT_EQ("0", unicodeConverter.convertToHexadecimal(0));
}

TEST(ConvertToHexadecimal, expect_79_when_121) {
	UnicodeConverter unicodeConverter;
	EXPECT_EQ("79", unicodeConverter.convertToHexadecimal(121));
}

TEST(ConvertToHexadecimal, expect_920_when_121) {
	UnicodeConverter unicodeConverter;
	EXPECT_EQ("920", unicodeConverter.convertToHexadecimal(2336));
}