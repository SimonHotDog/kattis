#include <iostream>
#include <vector>
#include <cmath>

void matchFit(std::vector<std::string>& v, std::pair<int, int> dimensions) {
    double w = dimensions.first * 1.0;
    double h = dimensions.second * 1.0;

    double c = sqrt((std::pow(w, 2.0) + std::pow(h, 2.0))); //hypothenuse

    //input
    int m;

    std::cin >> m;
    std::cin.ignore();

    //checks
    if (m <= w || m <= h || m <= c) {
        v.push_back("DA");
    } else {
        v.push_back("NE");
    }
}

int main() {
    int n, w, h;
    std::pair<int, int> pair;
    std::vector<std::string> res;

    std::cin >> n >> w >> h;
    std::cin.ignore();

    pair.first = w;
    pair.second = h;

    for (int i = 0; i < n; ++i) {
        matchFit(res, pair);
    }

    //printing
    for (int i = 0; i < res.size(); ++i) {
        std::cout << res[i] << "\n";
    }
}