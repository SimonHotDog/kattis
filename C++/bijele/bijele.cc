#include <iostream>
#include <vector>

//Format: King, Queen, Rooks, Bishops, Knights, Pawns

void initPieces(std::vector<int> &defaultPieces) {
    defaultPieces.push_back(1);
    defaultPieces.push_back(1);
    defaultPieces.push_back(2);
    defaultPieces.push_back(2);
    defaultPieces.push_back(2);
    defaultPieces.push_back(8);
    
}

int main() {
    std::vector<int> defaultPieces;
    
    initPieces(defaultPieces);

    int k, q, r, b, kn, p;

    std::cin >> k >> q >> r >> b >> kn >> p;

    k = defaultPieces[0] - k;
    q = defaultPieces[1] - q;
    r = defaultPieces[2] - r;
    b = defaultPieces[3] - b;
    kn = defaultPieces[4] - kn;
    p = defaultPieces[5] - p;

    std::cout << k << " " << q << " " << r << " " << b << " " << kn << " " << p;
    
}