#include <iostream>

using namespace std;

int main() {
    const int PieceTypeKing {0};
    const int PieceTypeQueen {1};
    const int PieceTypeRook {2};
    const int PieceTypePawn {3};

    int myPiece {PieceTypeKing};

    cout << PieceTypeRook << endl;
//    상수는 변경 불가능
//    PieceTypeRook = 3;


    return 0;
}
