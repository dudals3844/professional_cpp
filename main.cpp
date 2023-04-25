#include <iostream>
#include <format>

int main() {
    std::cout << "Hello, World!" << std::endl;
    //    지금은 에러나지만 C++ 20에서 지원함
    std::cout << format("There are {} ways", 200) << std::endl;
    return 0;
}
