#include <iostream>
#include "UnicodeConverter.h"
int main() {
	int userInput;
	UnicodeConverter unicodeConverter;
	setlocale(LC_ALL, "");
	//requirements for part one
	std::cout << "Enter integer that will be converted to UTF-8 encoding:\n";
	std::cin >> userInput;
	std::cout << "Result is:\n";
	std::cout << "U+" << unicodeConverter.convertToHexadecimal(userInput) << std::endl;
	std::cout << unicodeConverter.getEncodedValue(userInput) << std::endl;
	system("pause");
	return 0;
}