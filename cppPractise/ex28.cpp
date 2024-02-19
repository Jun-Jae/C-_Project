#include <iostream>

using namespace std;

// class 또는 typeName 사용 가능
template <class Any> // 템플릿 정의
Any sum(Any, Any);
template <class Any>
Any sum(int, Any); // 변수형의 불일치 문제 해결 및 함수의 오버로딩

int main()
{
    // 함수 템플릿
    // 구체적인 데이터형을 포괄할 수 있는 일반형으로 함수를 정의
    int a = 3;
    int b = 4;
    // cout << sum(a, b) << endl;

    float c = 3;
    14;
    float d = 1.592;
    cout << sum(c, d) << endl;
    cout << sum(a, c) << endl; // 변수형의 불일치 문제 발생

    return 0;
}

template <class Any>
Any sum(Any a, Any b)
{
    return a + b;
}

template <class Any>
Any sum(int a, Any b)
{
    return a + b;
}