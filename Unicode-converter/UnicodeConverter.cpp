#include "UnicodeConverter.h"
#include <stdlib.h>

std::string UnicodeConverter::convertToHexadecimal(int Integer){
	char hexadecimalValue[100];
	_itoa_s(Integer, hexadecimalValue, 16);
	return std::string(hexadecimalValue);
}

UnicodeConverter::UnicodeConverter()
{
}


UnicodeConverter::~UnicodeConverter()
{
}
