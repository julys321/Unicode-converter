#include "UnicodeConverter.h"
#include <stdlib.h>

std::string UnicodeConverter::convertToHexadecimal(int Integer){
	char hexadecimalValue[100];
	_itoa_s(Integer, hexadecimalValue, 16);
	return std::string(hexadecimalValue);
}

int UnicodeConverter::getByteCount(int Integer){
	if (Integer < 128)
		return 1;
	if (Integer < 2048)
		return 2;
	if (Integer < 65536)
		return 3;
	if (Integer < 1114112)
		return 4;
}

UnicodeConverter::UnicodeConverter()
{
}


UnicodeConverter::~UnicodeConverter()
{
}
