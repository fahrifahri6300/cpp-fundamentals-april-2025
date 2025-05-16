#include <iostream>
#include <numeric>

int main() {
    int fistNum, secondNum;
    std::cin >> fistNum >> secondNum;

    std::cout << std::gcd(fistNum , secondNum) << std::endl;

    return 0;
}