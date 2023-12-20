#include <iostream>

int main() {
	std::cout << "Printing true: " << true << '\n';
	std::cout << "Printing false: " << false << '\n';
	bool b{ 0 };
	std::cout << "Printing boolean with value 0: " << b << '\n';
	b = -1;
	std::cout << "Printing boolean with value -1: " << b << '\n';
	b = 99;
	std::cout << "Printing boolean with value 99: " << b << '\n';
	b = false;
	std::cout << "Printing boolean with value false: " << b << '\n';
	b = true;
	std::cout << "Printing boolean with value true: " << b << '\n';
	std::cout << "Enalbing standard library boolalpha option... " << '\n';
	std::cout << std::boolalpha;
	std::cout << "Printing true: " << true << '\n';
	std::cout << "Printing false: " << false << '\n';
	b = 0;
	std::cout << "Printing boolean with value 0: " << b << '\n';
	b = -1;
	std::cout << "Printing boolean with value -1: " << b << '\n';
	b = 99;
	std::cout << "Printing boolean with value 99: " << b << '\n';
	b = false;
	std::cout << "Printing boolean with value false: " << b << '\n';
	b = true;
	std::cout << "Printing boolean with value true: " << b << '\n';
	std::cout << "Enalbing standard boolalpha option: " << b << '\n';
}

/*
	Printing true: 1
	Printing false: 0
	Printing boolean with value 0: 0
	Printing boolean with value -1: 1
	Printing boolean with value 99: 1
	Printing boolean with value false: 0
	Printing boolean with value true: 1
	Enalbing standard library boolalpha option...
	Printing true: true
	Printing false: false
	Printing boolean with value 0: false
	Printing boolean with value -1: true
	Printing boolean with value 99: true
	Printing boolean with value false: false
	Printing boolean with value true: true
	Enalbing standard boolalpha option: true
*/