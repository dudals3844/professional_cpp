//
// Created by 최영민 on 2023/04/25.
//

#include <iostream>
#include "Calculator.h"
#include "Adder.h"

using namespace std;
void Calculator::Run() {
    cout << "input two :";
    int a, b;
    cin >> a >> b;
    Adder adder(a, b);
    cout << adder.Process() << endl;
}