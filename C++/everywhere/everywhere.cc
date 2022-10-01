#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

void inputTrip(std::vector<std::string>& v) {
    std::string raw;
    
    std::cin >> raw;
    std::cin.ignore();

    if (std::find(v.begin(), v.end(), raw) != v.end()) {
        return;
    } else {
        v.push_back(raw);
        return;
    }
}

int main() {
    int t;
    std::vector<int> res;

    std::cin >> t;
    std::cin.ignore();

    for (int i = 0; i < t; ++i) {
        std::vector<std::string> setRes;
        int n;

        std::cin >> n;
        std::cin.ignore();

        for (int i = 0; i < n; ++i) {
            inputTrip(setRes);
        }

        res.push_back(setRes.size());
    }

    //printing
    for (int i = 0; i < res.size(); ++i) {
        std::cout << res[i] << "\n";
    }
}