#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    double n;

    std::cin >> n;

    double res = pow(n, 1/n);

    std::cout << std::setprecision(7) << res;
}