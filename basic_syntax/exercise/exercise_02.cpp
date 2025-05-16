#include <iostream>

int main() {
    double firstNum, secondNum, thirdNum;
    std::cin >> firstNum >> secondNum >> thirdNum;

    bool isPositive = true;

    if (firstNum != 0 && secondNum != 0 && thirdNum != 0) {
        if (firstNum < 0) isPositive = false;
        if (secondNum < 0) isPositive = !isPositive;
        if (thirdNum < 0) isPositive = !isPositive;
    }

    std::cout << (isPositive ? '+' : '-') << std::endl;

    return 0;
}