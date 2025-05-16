#include <iostream>
#include <climits>

int main() {
    int n;
    std::cin >> n;

    int maxNum = INT_MIN, minNum = INT_MAX;

    for (int i = 0; i < n; i++) {
        int num;
        std::cin >> num;
        if (num > maxNum) maxNum = num;
        if (num < minNum) minNum = num;
    }

    std::cout << maxNum << ' ' << minNum << std::endl;

    return 0;
}