#include <iostream>

using namespace std;

int main() {
    int uninitialized;
    int initializesd {7};

    // 가비지 값
    cout << uninitialized << endl;
    // 할당한 값
    cout << initializesd << endl;
    return 0;
}
