#include <iostream>
#include <string>

int main() {
    std::string raw;

    std::cin >> raw;

    int res = std::stoi(raw.substr(0, 3));

    int output = 0;

    if (res == 555) {
        output = 1;
    }

    std::cout << output;
}