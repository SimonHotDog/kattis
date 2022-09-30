#include <iostream>

int main() {
    int h, m;
    int remainder;

    std::cin >> h >> m;

    if (m < 45) {
        remainder = 45 - m;
        if (h == 0) {
            h = 23;
        } else {
            h = h - 1; 
        }
        m = 60 - remainder;
    } else {
        m = m - 45;
    }

    std::cout << h << " " << m;
}