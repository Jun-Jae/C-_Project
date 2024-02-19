#include <iostream>

using namespace std;

int main() {

    // + - * / %
    // auto

    auto n = 100; // n은 int형으로 자동 형 지정
    auto x = 1.5; // x는 float형으로 자동 형 지정

    int a = 3 + 2;
    int b = 10;
    int c = 3;

    cout << a << endl;

    // C++가 복잡한 산술 연산을 수행할 수 있을까? : 가능하다.

    int multiple  = a / b * c;

    cout << multiple;

    return 0;

}