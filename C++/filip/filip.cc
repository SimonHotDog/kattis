#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string a, b;

    std::cin >> a >> b;

    std::reverse(a.begin(), a.end());
    std::reverse(b.begin(), b.end());

    int iA = std::stoi(a);
    int iB = std::stoi(b);

    if (iB > iA) {
        std::cout << iB;
    } else {
        std::cout << iA;
    }
}