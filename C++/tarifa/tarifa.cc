#include <iostream>

int inputP() {
    int p;

    std::cin >> p;
    std::cin.ignore();

    return p;
}

int main() {
    int x, n;

    std::cin >> x;
    std::cin.ignore();

    std::cin >> n;
    std::cin.ignore();

    int total = 0;

    for (int i = 0; i < n; ++i) {
        int p = inputP();
        total = total + x - p;
    }

    total = total + x;

    std::cout << total;
}