#include <iostream>

using namespace std;

int main() {

    // + - * / %
    // auto

    auto n = 100; // n�� int������ �ڵ� �� ����
    auto x = 1.5; // x�� float������ �ڵ� �� ����

    int a = 3 + 2;
    int b = 10;
    int c = 3;

    cout << a << endl;

    // C++�� ������ ��� ������ ������ �� ������? : �����ϴ�.

    int multiple  = a / b * c;

    cout << multiple;

    return 0;

}