#include <iostream>

static char ReadCharacterInput() {
	char character_input{};
	while (std::cout << "Enter a single character: " && !(std::cin >> character_input)) {
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	return character_input;
}

// Intentionally inefficient to practice if, if-else, and else
int main() {
	char c{ ReadCharacterInput() };
	std::cout << "You entered " << c << ", which has ASCII code " << static_cast<int>(c) << '.';
}
