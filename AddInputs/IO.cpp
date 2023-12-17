#include "IO.h"
#include <iostream>

int ReadNumber() {
	int number{};
	while (std::cout << "Enter number to add: " && !(std::cin >> number)) {
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	return number;
}

void WriteAnswer(int answer) {
	std::cout << "The sum answer is: " << answer;
}