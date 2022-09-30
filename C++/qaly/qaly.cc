#include <iostream>
#include <iomanip>

double input() {
    double q, y;

    std::cin >> q >> y;
    std::cin.ignore();

    return q * y;

}

int main() {
    int n;

    std::cin >> n;
    std::cin.ignore();

    double tot = 0;

    for (int i = 0; i < n; ++i) {
        tot = tot + input();
    }

    std::cout << std::setprecision(6) << tot;

}