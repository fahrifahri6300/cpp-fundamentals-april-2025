#include <iostream>
#include <cmath>

int main() {
    double a, b, c;
    std::cin >> a >> b >> c;

    const double d = b * b - 4 * a * c;

    if (d < 0) {
        std::cout << "no roots" << std::endl;
    } else if (d == 0) {
        std::cout << -b / (2 * a) << std::endl;
    } else {
        std::cout << (-b + std::sqrt(d)) / (2 * a) << ' ' << (-b - std::sqrt(d)) / (2 * a) << std::endl;
    }

    return 0;
}