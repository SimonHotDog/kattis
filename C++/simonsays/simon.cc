#include <iostream>
#include <string>
#include <vector>

void parseLine(std::vector<std::string>& v) {
    std::string raw;

    std::getline(std::cin, raw);

    int s1, s2;

    s1 = raw.find(" ");
    std::string temp = raw.substr(s1+1, raw.size());
    s2 = temp.find(" ") + s1 + 1;

    std::string ss = raw.substr(0, s2);

    if (ss == "Simon says") {
        std::string out = raw.substr(s2 + 1, raw.size());
        v.push_back(out);
    } else {
        return;
    }

}

int main() {
    int n;
    std::vector<std::string> res;

    std::cin >> n;
    std::cin.ignore();

    for (int i = 0; i < n; ++i) {
        parseLine(res);
    }

    //printing
    for (int i = 0; i < res.size(); ++i) {
        std::cout << res[i] << "\n";
    }
}