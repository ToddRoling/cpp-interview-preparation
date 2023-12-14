#include <iostream>

static int add(int x, int y) {
	return x + y;
}

static int multiply(int x, int y) {
	return x * y;
}

int main() {
	int a{ 5 };
	int b{ -9 };
	int result = multiply(3, add(a, b));	// 3 * (5 + -9) == 3 * (5 - 9) == 3 * -4 == -12
	result = add(multiply(-1, result), 10);	// (-1 * -12) + 10 == 12 + 10 == 22
	std::cout << result;
	return 0;
}