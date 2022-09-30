#include <iostream>

int main() {
    int n;

    std::cin >> n;

    int p = 2;

    for (int i = 0; i < n; ++i) {
        p = p + p - 1;
    }

    int res = p * p;

    std::cout << res;
}