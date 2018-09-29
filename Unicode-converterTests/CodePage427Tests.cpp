#include "pch.h"
#include "../Unicode-converter/CodePage427.cpp"
//TEST(GetInteger, expect_0_when_u0000) {
//	CodePage427 codePage427;
//	EXPECT_EQ(0, codePage427.getInteger('\u0000'));
//}
//TEST(GetInteger, expect_127_when_u2302) {
//	CodePage427 codePage427;
//	EXPECT_EQ(127, codePage427.getInteger('\u2302'));
//}
TEST(GetInteger, expect_128_when_u00C7) {
	CodePage427 codePage427;
	EXPECT_EQ(128, codePage427.getInteger('\u00C7'));
}
TEST(GetInteger, expect_255_when_u00A0) {
	CodePage427 codePage427;
	EXPECT_EQ(255, codePage427.getInteger('\u00A0'));
}