#include <iostream>
#include <string>
#include <iomanip>

int main() {
    std::string studentName;
    int age;
    float averageGrade;
    std::cin >> studentName >> age >> averageGrade;

    std::cout << "Name: " << studentName << ", Age: " << age
              << ", Grade: " << std::fixed << std::setprecision(2) << averageGrade << std::endl;

    return 0;
}