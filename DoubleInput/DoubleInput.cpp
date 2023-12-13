#include <iostream>

int main() {
	int number{};
	while (true) { // due to intentionally undefined exit condition (for now)
		while (std::cout << "Enter a valid number: " && !(std::cin >> number)) {
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		std::cout << "Double " << number << " is: " << number * 2 << '\n';
	}
	return 0;
}
