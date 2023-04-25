//
// Created by 최영민 on 2023/04/25.
//

#include "Adder.h"

Adder::Adder(int a, int b) {
    op1 = a;
    op2 = b;
}

int Adder::Process() {
    return op1 + op2;
}


