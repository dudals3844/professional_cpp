#include <iostream>

using namespace std;

int main() {
    int i {12};
    int someInteger{256};
    short someShort;
    long someLong;
    float someFloat;
    double someDouble;

    cout << someInteger << endl;
    someInteger++;
    cout << someInteger << endl;
    someInteger *= 2;
    cout << someInteger << endl;
    someShort = static_cast<short>(someInteger);
    cout << someShort << endl;
    someFloat = someLong + 0.785f;
    cout << someFloat << endl;
    someDouble = static_cast<double>(someFloat) / 100000;
    cout << someDouble << endl;

    cout << i << endl;
    return 0;
}
