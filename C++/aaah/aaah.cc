#include <iostream>

int main() {
    std::string jon;
    std::string doctor;

    std::cin >> jon;
    std::cin.ignore();

    std::cin >> doctor;
    std::cin.ignore();

    if (jon.size() < doctor.size()) {
        std::cout << "no";
    } else {
        std::cout << "go";
    }
}