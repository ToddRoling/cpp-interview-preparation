#include <iostream>

static void IntegerOverflow() {
	int x{ INT_MAX };
	std::cout << "Integer x has value (INT_MAX): " << x << '\n';
	std::cout << "Adding 1 to x: " << ++x << '\n';
	std::cout << "Subtracting 1 from x: " << --x << '\n';
	x *= 2;
	std::cout << "Doubled x: " << x << '\n';
}

static void UnsignedLongLongOverflow() {
	unsigned long long y{ ULLONG_MAX };
	std::cout << "Unsigned Long long y has value (ULLONG_MAX): " << y << '\n';
	std::cout << "Adding 1 to y: " << ++y << '\n';
	std::cout << "Subtracting 1 from y: " << --y << '\n';
}

int main() {
	IntegerOverflow();
	UnsignedLongLongOverflow();
	return 0;

}