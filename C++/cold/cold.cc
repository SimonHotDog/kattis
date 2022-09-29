//Cold-puter Science

#include <iostream>
#include <sstream>
#include <string>

//Returns first int as well as the rest of the string
std::pair<int, std::string> extractTemp(std::string raw) {
    int s; //space location

    s = raw.find(" ");

    std::string temp = raw.substr(0, s);
    int t = std::stoi(temp);
    raw = raw.substr(s+1, raw.size());

    std::pair<int, std::string> res;
    res.first = t;
    res.second = raw;

    return res;
}

int main() {
    int sampleSize;
    int res;

    std::cin >> sampleSize;
    std::cin.ignore();

    std::string raw;

    std::getline(std::cin, raw, '\n');

    int counter = 0;

    for (int i = 0; i < sampleSize; ++i) {
        std::pair<int, std::string> extracted;
        extracted = extractTemp(raw);
        if(extracted.first < 0) {
            ++counter;
        }
        raw = extracted.second;
    }

    std::cout << counter;

}