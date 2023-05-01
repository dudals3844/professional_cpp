#include <iostream>

using namespace std;

int main() {
    enum class Mode{ Default, Custom, Standard};

    int value {42};
//    Mode mode { Mode::Custom };
    Mode mode { Mode::Standard };

    // Swich문은  break가 없으면 남은 코드도 쭉 실행하게 된다. 이를 fallthrough라고 한다.
    switch (mode) {
        using enum Mode;

        case Mode::Custom:
            cout << "Custom" << endl;
            break;
        case Mode::Standard:
            cout << "Standard" << endl;
            break;
        case Mode::Default:
            cout << "Defualt" << endl;
            break;
    }

    cout << "-------------" << endl;
    cout << "fallthrough start" << endl;
    cout << "-------------" << endl;


    switch (mode) {
        using enum Mode;
        // Custom은 조건이 안돼서 스킵한다.
        case Mode::Custom:
            cout << "Custom" << endl;
            [[fallthrough]];
        // Standard는 조건에 부합하므로 실행
        case Mode::Standard:
            cout << "Standard" << endl;
            [[fallthrough]];
        // fallthrough 때문에 실행 코드 밑에도 계속 실행
        case Mode::Default:
            cout << "Defualt" << endl;
            [[fallthrough]];
        default:
            break;
    }
    cout << value << endl;
    return 0;
}

