#include <iostream>

static int readNumber() {
	int number{};
	while (std::cout << "Enter number to add: " && !(std::cin >> number)) {
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	return number;
}

static void writeAnswer(int answer) {
	std::cout << "The sum answer is: " << answer;
}


int main() {
	int first_number{ readNumber() };
	int second_number{ readNumber() };
	writeAnswer(first_number + second_number);
	return 0;
}