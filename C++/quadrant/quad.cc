#include <iostream>

void printer(int x, int y) {
    bool xpos, ypos;

    xpos = (x > 0);
    ypos = (y > 0);

    if (xpos && ypos) {
        std::cout << 1;
    }
    else if (!xpos && ypos) {
        std::cout << 2;
    }
    else if (!xpos && !ypos) {
        std::cout << 3;
    }
    else if (xpos && !ypos) {
        std::cout << 4;
    }
}

int main() {
    int x, y;

    std::cin >> x;
    std::cin.ignore();

    std::cin >> y;
    std::cin.ignore();

    printer(x, y);
}