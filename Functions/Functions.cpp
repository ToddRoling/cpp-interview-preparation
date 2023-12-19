// https://www.hackerrank.com/challenges/c-tutorial-functions/problem?isFullScreen=true

#include <iostream>

static int max_of_four(int a, int b, int c, int d) {
	int max = std::max(a, b);
	max = std::max(max, c);
	max = std::max(max, d);
	return max;
}

int main() {
	int a, b, c, d;
	std::cin >> a >> b >> c >> d;
	std::cout << max_of_four(a, b, c, d);
	return 0;
}