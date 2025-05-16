#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int sum = 0;

    for (int i = 1; i <= n; i += 2) {
        std::cout << i << std::endl;
        sum += i;
    }

    std::cout << "Sum: " << sum << std::endl;

    return 0;
}