#include <iostream>

int ReadIntegerInput() {
	int integer_input{};
	while (std::cout << "Enter an integer, between 0 and 9: " && (!(std::cin >> integer_input) || (integer_input < 0 || integer_input > 9))) {
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	return integer_input;
}

// Intentionally inefficient to practice if, if-else, and else
int main() {
	int n{ ReadIntegerInput() };
	if (n == 2)
		std::cout << "The digit is prime";
	else if (n == 3)
		std::cout << "The digit is prime";
	else if (n == 5)
		std::cout << "The digit is prime";
	else if (n == 7)
		std::cout << "The digit is prime";
	else
		std::cout << "The digit is not prime";
	
	/*	alternative 1
	*	if (n == 2 || n == 3 || n == 5 || n == 7)
    *		std::cout << "The digit is prime";
	*	else
	*		std::cout << "The digit is not prime";
	*/ 
	
	/*  alternative 2
	*	using prime searching algorithm. i.e. test for divisibility by 2 and iterate over each posible number to divide by, up to the square root of max input (9) = 3.
	*	thus divide input by 2 and 3 and prime if not divisibile
	*/

	/*  alternative 3
	*	create explicit, ordered list and binary search
	*/

	/*	alternative 4
	*	switch statement
	*/

	/*	alternative 5
	*	create a string composed of the prime numbers as each character
	*	search if the integer input exists as character in string
	*/

	/*	alternative 6
	*	hashtable for quick lookup
	*/
}
