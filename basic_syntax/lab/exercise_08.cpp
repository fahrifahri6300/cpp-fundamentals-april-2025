#include <iostream>
#include <cstdlib>

int main() {
    int num;

    while (std::cin >> num && num % 2 != 0) {
        std::cout << "Please write an even number." << std::endl;
    }

    std::cout << "The number is: " << std::abs(num) << std::endl;
    return 0;
}