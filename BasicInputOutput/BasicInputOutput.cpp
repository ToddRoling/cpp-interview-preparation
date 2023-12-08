#include <iostream>

int main() {
	int x{};
	while (true) { // due to intentionally undefined exit condition (for now)
		while (std::cout << "Enter a valid number: " && !(std::cin >> x)) {
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		std::cout << "You entered: " << x << '\n';	
	}
	return 0;
}
