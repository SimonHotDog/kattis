#include <iostream>

int main() {
    int x, y, n;

    std::cin >> x >> y >> n;

    for (int i = 1; i <=n; ++i) {
        if(i % x != 0 && i % y != 0) {
            std::cout << i << "\n";
            continue;
        }
        if(i % x == 0) {
            std::cout << "Fizz";
        }
        if(i % y == 0) {
            std::cout << "Buzz";
        }
        std::cout << "\n";
    }
}