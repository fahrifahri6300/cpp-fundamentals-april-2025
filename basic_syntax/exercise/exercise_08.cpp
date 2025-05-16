#include <iostream>

int main() {
    int originalNumber;
    std::cin >> originalNumber;

    int disposableNumber = originalNumber, digitFactorialsSum = 0;

    while (disposableNumber != 0) {
        const int digit = disposableNumber % 10;
        int digitFactorial = 1;

        for (int i = 2; i <= digit; i++) {
            digitFactorial *= i;
        }

        digitFactorialsSum += digitFactorial;
        disposableNumber = disposableNumber / 10;
    }

    std::cout << (originalNumber == digitFactorialsSum ? "yes" : "no") << std::endl;

    return 0;
}