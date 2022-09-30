#include <iostream>
#include <string>

bool containsHiss(std::string raw) {
    if (raw.find("s") == std::string::npos) { //Check s not found
        return false;
    }

    int s = raw.find("s");
    if (raw[s+1] == 's') {
        return true;
    }

    raw = raw.substr(s+1, raw.size());

    return containsHiss(raw);
}

int main() {
    std::string raw;

    std::cin >> raw;

    if(containsHiss(raw)) {
        std::cout << "hiss";
    } else {
        std::cout << "no hiss";
    }
}