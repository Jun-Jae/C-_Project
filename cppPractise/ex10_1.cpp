#include <iostream>

using namespace std;

int main() {
    // 열거체(enum)
    // 기호 상수를 만드는 것에 대한 또다른 방법.

    enum spectrum { red, orange, yellow, green,
    blue, violet, indigo, ultraviolet};
    /*
    1. spectrum을 새로운 데이터형 이름으로 만든다.
    2. red, orange, yellow.. 0에서부터 7까지 정수 값을 각각 
    나타내는 기호 상수로 만든다.
    3. 열거자들의 초기화 또한 가능(단, 정수만)
    */

   spectrum a = orange; // 산술 연산은 불가능하다.
   cout << a << endl; // 1출력

    int b;
    b = blue;
    b = blue + 3; // 7이 변수 b에 저장

    cout << b << endl; // 7 출력

    return 0;
}