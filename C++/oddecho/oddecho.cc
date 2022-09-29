#include <iostream>
#include <vector>

std::vector<std::string> populateVector(int n) {
    std::vector<std::string> res;
    
    for (int i = 0; i < n; ++i) {
        std::string input;

        std::cin >> input;
        std::cin.ignore();

        res.push_back(input);
    }

    return res;
}

int main() {
    int n;
    std::vector<std::string> words;

    std::cin >> n;
    std::cin.ignore();

    words = populateVector(n);

    for (int i = 0; i < words.size(); ++i) {
        if((i+1) % 2 != 0) {
            std::cout << words[i] << "\n";
        }
    }

}