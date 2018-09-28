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

std::string UnicodeConverter::getEncodedValue(int Integer){
	std::string encodedValue;
	int byteCount = getByteCount(Integer);
	if (byteCount == 1) {
		return convertToHexadecimal(Integer);
	}

	char buffer[17];
	_itoa_s(Integer, buffer, 2);
	std::string binaryValue(buffer);

	while(binaryValue.length() < 11 + (5*(byteCount-2)))
		binaryValue.insert(binaryValue.begin(), '0');

	binaryValue.insert(binaryValue.begin(), '0');
	for (int i = 0; i < byteCount; i++) 
		binaryValue.insert(binaryValue.begin(), '1');
	for (int i = 1; i <= byteCount--; i++) {
		binaryValue.insert(binaryValue.begin() + (i * 8), '0');
		binaryValue.insert(binaryValue.begin() + (i * 8), '1');
	}

	Integer = stoi(binaryValue,nullptr,2);
	return convertToHexadecimal(Integer);
}

UnicodeConverter::UnicodeConverter()
{
}


UnicodeConverter::~UnicodeConverter()
{
}
