#include <iostream>

using namespace std;

int main()
{
    // 반복문이란?
    char a[10] = {'a', 'b', 'c', 'd', 'e'};

    cout << a[0] << endl;
    cout << a[1] << endl;
    cout << a[2] << endl;
    cout << a[3] << endl;
    cout << a[4] << endl;

    for (int i = 0; i < 5; i++) {
        cout << i << "번째입니다" << endl;
    }
    /*
    1. 반복문에 사용할 카운터의 값을 초기화
    2. 반복문을 진행할 것인지 '조건 검사'
    3. 반복문 몸체를 수행한다.
    4. 카운터의 값을 변화한다.
    */
    
    // 증가 연산자, 감소 연산자
    int q = 10;
    int w = 10;

    cout << "q는" << q << ", w는" << w << endl;
    cout << "q++는" << q++ << endl;
    cout << "++W는" << ++w << endl;

    return 0;
}