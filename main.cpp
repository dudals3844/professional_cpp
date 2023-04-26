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

namespace FST = First::Second;

int main() {
    cout << FST::num << endl;
    return 0;
}
