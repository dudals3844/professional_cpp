#include <iostream>

using namespace std;

int main() {
    double a = 1.0;
    cout << "int:\n" << endl;
    cout << "Max: " << numeric_limits<int>::max() << endl;
    cout << "Mim: " << numeric_limits<int>::min() << endl;
    cout << "Lowest" << numeric_limits<int>::lowest() << endl;

    cout << "\ndouble \n" << endl;
    cout << "Max: " << numeric_limits<double>::max() << endl;
    cout << "Mim: " << numeric_limits<double>::min() << endl;
    cout << "Lowest" << numeric_limits<double>::lowest() << endl;


    return 0;
}
