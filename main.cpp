#include <iostream>

using namespace std;

namespace First {
    int num = 1;
    namespace Second {
        int num = 2;
        namespace Third {
            int num = 3;
        }
    }
}

int main() {
    cout << First::num << endl;
    cout << First::Second::num << endl;
    cout << First::Second::Third::num << endl;
    return 0;
}
