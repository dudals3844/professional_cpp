#include <iostream>

using namespace std;

int main() {
    int i{11};
    strong_ordering result{i <=> 0};
    if (result == strong_ordering::less) {
        cout << "less" << endl;
    }
    if (result == strong_ordering::greater) {
        cout << "greater" << endl;
    }

    if (result == strong_ordering::equal) {
        cout << "equal" << endl;
    }

    // Bolean으로 비교 가능
    if (is_lt(result)) { cout << "less" << endl; }
    if (is_gt(result)) { cout << "greater" << endl; }
    if (is_eq(result)) { cout << "equal" << endl; }

    return 0;
}

