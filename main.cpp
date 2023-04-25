#include <iostream>
#include <format>

namespace mycode {
    void foo() {
        std::cout << "foo() called in the mycode namespace" << std::endl;
    }
}

int main() {
    mycode::foo();
    return 0;
}
