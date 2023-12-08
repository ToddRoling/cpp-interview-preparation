#include <iostream>

int main() {
	int num_in{};
	while (true) { // due to intentionally undefined exit condition (for now)
		while (std::cout << "Enter a valid number: " && !(std::cin >> num_in)) {
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		std::cout << "You entered: " << num_in << '\n';
	}
	return 0;
}
