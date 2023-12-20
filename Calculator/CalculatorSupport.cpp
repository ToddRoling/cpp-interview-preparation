#include "CalculatorSupport.h"
#include <iostream>

void ClearIgnoreInput() {
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

double ReadNumberInput(std::string message) {
	double double_input{};
	while (std::cout << message && !(std::cin >> double_input))
		ClearIgnoreInput();
	return double_input;
}

char ReadOperatorInput() {
	char operator_input{};
	while (std::cout << "Enter an operator (+, -, *, or /): " && !(std::cin >> operator_input))
		ClearIgnoreInput();
	return operator_input;
}

void PrintAnswerPrefix(double first_number, double second_number, char operator_) {
	std::cout << first_number << ' ' << operator_ << ' ' << second_number << " is ";
}
