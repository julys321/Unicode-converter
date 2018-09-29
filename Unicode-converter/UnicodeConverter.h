#pragma once
#include <string>
class UnicodeConverter
{
public:
	std::string convertToHexadecimal(int Integer);
	int getByteCount(int Integer);
	std::string getEncodedValue(int Integer);
	std::string convertFromCodePage427(unsigned char character);
	UnicodeConverter();
	~UnicodeConverter();
};

