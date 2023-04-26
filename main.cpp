#include <iostream>

using namespace std;

int main() {
    float myFloat {3.14f};
    int i1 {(int)myFloat};
    int i2 {int(myFloat)};
    // 3번쨰가 권장하는 방식
    int i3 {static_cast<int>(myFloat)};

    cout << myFloat << endl;
    cout << i1 << endl;
    cout << i2 << endl;
    cout << i3 << endl;
    return 0;
}
