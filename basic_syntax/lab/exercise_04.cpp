#include <iostream>
#include <string>

int main() {
    std::string countryName;
    std::cin >> countryName;

    if (countryName == "England" || countryName == "USA") {
        std::cout << "English" << std::endl;
    } else if (countryName == "Spain" || countryName == "Argentina " || countryName == "Mexico") {
        std::cout << "Spanish" << std::endl;
    } else {
        std::cout << "unknown" << std::endl;
    }

    return 0;
}