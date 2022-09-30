#include <iostream>
#include <vector>

std::pair<int, std::string> checkInput() {
    int x;
    std::pair<int, std::string> res;

    std::cin >> x;
    std::cin.ignore();
    
    res.first = x;

    if (x % 2 == 0) {
        res.second = " is even";
    } else {
        res.second = " is odd";
    }

    return res;
}

int main() {
    int n;
    std::vector<std::pair<int, std::string>> res;

    std::cin >> n;
    std::cin.ignore();

    for (int i = 0; i < n; ++i) {
        res.push_back(checkInput());
    }

    //Printing
    for (int i = 0; i < res.size(); ++i) {
        std::cout << res[i].first << res[i].second << "\n";
    }
}