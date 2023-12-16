// https://www.hackerrank.com/challenges/c-tutorial-basic-data-types/problem?isFullScreen=true

#include <iostream>

int main() {
    char c{ '\0' };
    double d{ 0.0 };
    float f{ 0.0f };
    int i{ 0 };
    long l{ 0l };
    std::cin >> i >> l >> c >> f >> d;
    std::cout << std::fixed;
    std::cout << i << '\n';
    std::cout << l << '\n';
    std::cout << c << '\n';
    std::cout.precision(3);
    std::cout << f << '\n';
    std::cout.precision(9);
    std::cout << d << '\n';
    return 0;
}