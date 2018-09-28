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

TEST(GetByteCount, expect_1_when_0) {
	UnicodeConverter unicodeConverter;
	EXPECT_EQ(1, unicodeConverter.getByteCount(0));
}
TEST(GetByteCount, expect_1_when_127) {
	UnicodeConverter unicodeConverter;
	EXPECT_EQ(1, unicodeConverter.getByteCount(127));
}
TEST(GetByteCount, expect_2_when_128) {
	UnicodeConverter unicodeConverter;
	EXPECT_EQ(2, unicodeConverter.getByteCount(128));
}
TEST(GetByteCount, expect_2_when_2047) {
	UnicodeConverter unicodeConverter;
	EXPECT_EQ(2, unicodeConverter.getByteCount(2047));
}
TEST(GetByteCount, expect_3_when_2048) {
	UnicodeConverter unicodeConverter;
	EXPECT_EQ(3, unicodeConverter.getByteCount(2048));
}
TEST(GetByteCount, expect_3_when_65535) {
	UnicodeConverter unicodeConverter;
	EXPECT_EQ(3, unicodeConverter.getByteCount(65535));
}
TEST(GetByteCount, expect_4_when_65536) {
	UnicodeConverter unicodeConverter;
	EXPECT_EQ(4, unicodeConverter.getByteCount(65536));
}
TEST(GetByteCount, expect_4_when_1114111) {
	UnicodeConverter unicodeConverter;
	EXPECT_EQ(4, unicodeConverter.getByteCount(1114111));
}
TEST(GetEncodedValue, expect_79_when_121) {
	UnicodeConverter unicodeConverter;
	EXPECT_EQ("79", unicodeConverter.getEncodedValue(121));
}
TEST(GetEncodedValue, expect_C4A0_when_288) {
	UnicodeConverter unicodeConverter;
	EXPECT_EQ("c4a0", unicodeConverter.getEncodedValue(288));
}
TEST(GetEncodedValue, expect_E0A4A0_when_2336) {
	UnicodeConverter unicodeConverter;
	EXPECT_EQ("e0a4a0", unicodeConverter.getEncodedValue(2336));
}