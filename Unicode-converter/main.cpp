#include <iostream>
#include <fstream>
#include "UnicodeConverter.h"
int main() {
	int userInput;
	UnicodeConverter unicodeConverter;
	//requirements for part one
	std::cout << "Enter integer that will be converted to UTF-8 encoding:\n";
	std::cin >> userInput;
	std::cout << "Result is:\n";
	std::cout << "U+" << unicodeConverter.convertToHexadecimal(userInput) << std::endl;
	std::cout << unicodeConverter.getEncodedValue(userInput) << std::endl;
	//requirements for part two
	std::basic_ifstream<unsigned char> input("386intel.txt");
	std::ofstream output("rez.txt");
	unsigned char character;
	while (input) {
		input.get(character);
		if (character < 128){
			output << character;
		} else {
			output << unicodeConverter.convertFromCodePage427(character);
		}
	}
	input.close();
	output.close();

	system("pause");
	return 0;
}