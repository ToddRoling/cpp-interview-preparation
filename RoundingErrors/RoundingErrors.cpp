#include <iomanip>
#include <iostream>

int main() {
    
    double d{ 0.1 };
    std::cout << std::setprecision(17);
    std::cout << d << '\n'; // 0.10000000000000001
     d = 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1; // should equal 1.0
    std::cout << d << '\n'; // 0.99999999999999989
    
    return 0;
}