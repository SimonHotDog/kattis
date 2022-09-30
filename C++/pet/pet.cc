#include <iostream>
#include <vector>

int scoreContestant() {
    int a, b, c, d, sum;

    std::cin >> a >> b >> c >> d;

    sum = a + b + c + d;

    return sum;
}

int main() {

    int bestScore = 0;
    int winner;

    for (int i = 0; i < 5; ++i) {
        int score = scoreContestant();

        if(score > bestScore) {
            bestScore = score;
            winner = i + 1;
        }
    }

    std::cout << winner << " " << bestScore;
}