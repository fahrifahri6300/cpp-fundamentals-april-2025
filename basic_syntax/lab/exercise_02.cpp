#include <iostream>

int main() {
    double grade;
    std::cin >> grade;

    std::cout << (grade >= 3.00 ? "Passed!" : "Failed!") << std::endl;

    return 0;
}