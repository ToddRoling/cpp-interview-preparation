// https://www.hackerrank.com/challenges/c-tutorial-pointer/problem?isFullScreen=true

#include <iostream>

static void update(int* a, int* b) {
	int temp = *a + *b;
	*b = std::abs(*a - *b);
	*a = temp;
}

int main() {
	
	int a{ 0 };
	int b{ 0 };
	int* ptr_a = &a;
	int* ptr_b = &b;
	std::cin >> a >> b;
	update(ptr_a, ptr_b);
	std::cout << a << '\n';
	std::cout << b;
	
	//&a = &a + 1;
	
	return 0;
}