#include <iostream>
#include <cmath>

// only 70/100. Is not even
void PrintRoom(int n) {
    std::string res;

    for (int i = 0; i < n; i++) {
        res = res + "*";
    }
    res = res + "\n";

    std::cout << res;
}

int main() {

    float rooms, teams;

    std::cin >> rooms;

    std::cin >> teams;

    float max = teams/rooms;
    max = ceil(max);
    int m = (int) max;

    for (int i = 0; i < rooms; i++) {
        if (teams < m) {
            PrintRoom(teams);
        } else {
            PrintRoom(m);
            teams = teams - m;
        }
    } 
}

