#include <iostream>

using namespace std;

const float PIE = 3.14;
void cheers(int n); // 함수 원형 명시
float circle(int x); // 함수 원형 명시

int main()
{
    /*
    1. 함수 정의 제공
    2. 함수 원형 제공
    3. 함수 호출
    */

   /*
   1. 리턴값이 있는 타입

   typeName functionName(parameterList)
   {
        statements(s);
        return value;
   }

   2. 리턴값이 없는 타입

   void functionName(parameterList)
   {
        statements(s);
        return; // 생략될 수 있음
   }
   */

  int a;
  cout << "하나의 수를 입력하시오." << endl;
  cin >> a;
  cheers(a);

  int b;
  cout << "원의 반지름 길이를 입력하시오." << endl;
  cin >> b;
  float c = circle(b);
  cout << "원의 넓이는 " << c << " 입니다." << endl;
}

void cheers(int n) { // 함수의 내용 정의
    for(int i = 0; i < n ; i++) {
        cout << "Cheers!" << endl;
    }
    // return;
}

float circle(int x) { // 함수의 내용 정의
    return x * x* PIE; // float형
}