#include <iostream>

int main() {
    int firstNum, secondNum;
    std::cin >> firstNum >> secondNum;

    if (firstNum < secondNum) {
        std::cout << firstNum << " " << secondNum << std::endl;
    } else {
        std::cout << secondNum << " " << firstNum << std::endl;
    }
    
    return 0;
}