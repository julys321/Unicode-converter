#pragma once
#include <string>
class UnicodeConverter
{
public:
	std::string convertToHexadecimal(int Integer);
	int getByteCount(int Integer);
	UnicodeConverter();
	~UnicodeConverter();
};

