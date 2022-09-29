#include <iostream>
#include <string>

std::string inputHandler(std::string raw) {
    int s; //space location

    s = raw.find("a");

    return raw.substr(s, raw.size());
}

int main() {
    std::string raw;

    std::cin >> raw;

    std::cout << inputHandler(raw);
}