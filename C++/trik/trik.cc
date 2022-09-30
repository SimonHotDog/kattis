#include <iostream>

//Kattis doesn't accept this solution, yet it passes my own personal tests.
void moveA(bool &l, bool &m) {
    if (!l && !m) {
        return;
    }
    l = !l;
    m = !m;
}

void moveB(bool &m, bool &r) {
    if (!m && !r) {
        return;
    }
    m = !m;
    r = !r;
}

void moveC(bool &l, bool &r) {
    if (!l && !r) {
        return;
    }
    l = !l;
    r = !r;
}

int main() {
    bool l, m, r = false;
    l = true;
    std::string raw;

    std::cin >> raw;

    for (int i = 0; i < raw.size(); ++i) {
        switch (raw[i])
        {
        case 'A':
            moveA(l, m);
            break;
        case 'B':
            moveB(m, r);
            break;
        case 'C':
            moveC(l, r);
            break;
        default:
            break;
        }
    }

    //Output
    int res;

    if(l) {
        res = 1;
    }
    else if(m) {
        res = 2;
    } else if(r) {
        res = 3;
    }

    std::cout << res;
}