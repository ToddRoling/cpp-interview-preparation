// https://www.hackerrank.com/challenges/c-tutorial-pointer/problem?isFullScreen=true

#include <iostream>

void update(int* a, int* b) {
	int temp = *a + *b;
	*b = std::abs(*a - *b);
	*a = temp;
}

int main() {
	int a{ 0 };
	int b{ 0 };
	int* pa = &a;
	int* pb = &b;
	std::cin >> a >> b;
	update(pa, pb);
	std::cout << a << '\n';
	std::cout << b;
	return 0;
}