#include "CalculatorSupport.h"
#include <iostream>

int main() {
	double first_number{ ReadNumberInput("Enter the first number: ")};
	double second_number{ ReadNumberInput("Enter the second number: ") };
	char operator_{ReadOperatorInput()};
	bool valid_operator = operator_ == '+' || operator_ == '-' || operator_ == '*' || operator_ == '/';
	if(valid_operator)
		PrintAnswerPrefix(first_number, second_number, operator_);
	if (operator_ == '+')
		std::cout << first_number + second_number;
	else if (operator_ == '-')
		std::cout << first_number - second_number;
	else if (operator_ == '*')
		std::cout << first_number * second_number;
	else if (operator_ == '/') 
		std::cout << first_number / second_number;
	return 0;
}
