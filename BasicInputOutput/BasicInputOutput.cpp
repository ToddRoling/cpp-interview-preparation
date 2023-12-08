#include <iostream>

int main() {
	while (true) { // due to intentionally undefined exit condition (for now)
		std::cout << "Enter a number: ";
		int x{};
		std::cin >> x;
		std::cout << "You entered: " << x << '\n';
	}
	return 0;
}
