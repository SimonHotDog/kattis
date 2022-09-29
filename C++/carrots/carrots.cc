#include <iostream>

void meaninglessInput(int n) {
    for (int i = 0; i < n; ++i) {
        std::string dummyInput;

        std::cin >> dummyInput;
        std::cin.ignore();
    }
}

int main() {
    int n, p;

    std::cin >> n >> p;
    std::cin.ignore();

    meaninglessInput(n);

    std::cout << p;
}