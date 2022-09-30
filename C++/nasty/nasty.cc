#include <iostream>
#include <vector>

std::string input() {
    int r, e, c;
    std::string res;

    std::cin >> r >> e >> c;
    std::cin.ignore();

    if (r < (e-c)) {
        res = "advertise";
    }
    else if (r == (e-c)) {
        res = "does not matter";
    } else {
        res = "do not advertise";
    }

    return res;
}

int main() {
    int n;
    std::vector<std::string> output;

    std::cin >> n;
    std::cin.ignore();

    for (int i = 0; i < n; ++i) {
        output.push_back(input());
    }

    //printing
    for (int i = 0; i < output.size(); ++i) {
        std::cout << output[i] << "\n";
    }
}