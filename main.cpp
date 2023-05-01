#include <iostream>

using namespace std;

int main() {
    int i{3};

    cout << ((i > 2) ? "yes" : "no") << endl;
    cout << (i > 2 ? "yes" : "no");
    return 0;
}

