#include <iostream>
#include "employee.h"

using namespace std;

int main() {

    Employee anEmployee;
    anEmployee.firstInitial = 'J';
    anEmployee.lastIntial = 'D';
    anEmployee.employeeNumber = 42;
    anEmployee.salary = 8000;

    cout << anEmployee.firstInitial << anEmployee.lastIntial << endl;
    cout << anEmployee.employeeNumber << endl;
    cout << anEmployee.salary << endl;

    return 0;
}

