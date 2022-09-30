#include <iostream>
#include <string>
#include <cmath>

int parse() {
    std::string input;
    
    std::cin >> input;
    std::cin.ignore();
    double base = std::stod(input.substr(0, input.size()-1));
    double exp = std::stod(input.substr(input.size()-1, input.size()));

    int res = std::pow(base, exp);
    return res;
}

int main() {
    int n;

    std::cin >> n;
    std::cin.ignore();

    int sum = 0;

    for (int i = 0; i < n; ++i) {
        sum = sum + parse();
    }

    std::cout << sum;
}