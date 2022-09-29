#include <iostream>

int main() {
    std::string word;

    std::cin >> word;

    for (int i = 0; i < 3; ++i) {
        if (i == 2) {
            std::cout << word;
        } else {
           std::cout << word << " "; 
        }
        
    }
}