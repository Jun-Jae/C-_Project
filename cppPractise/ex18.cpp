#include <iostream>

using namespace std;

int main() {

    // 논리 표현식
    // 논리합, 논리곱, 논리부정 연산자

    // 논리합 ||
    /*
    좌항 || 우항
    */
   
   // 논리곱 &&
   /*
   5 == 5 && 9 == 9 → true
   5 == 5 && 9 != 9 → false
   */

  // 논리부정 !
  // !(표현식)

  cout << "당신의 나이를 입력하시오.";
  int age;
  cin >> age;

  if(age < 0 || age >100) {
    cout << "거짓말하시면 안됩니다." << endl;
  }
  else if(20 <= age && age <= 29) {
    cout << "당신은 20대이군요?" << endl;
  }
  else {
    cout << "당신의 나이를 잘 모르겠습니다." << endl;
  }

return 0;
 
}