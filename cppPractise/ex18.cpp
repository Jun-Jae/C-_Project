#include <iostream>

using namespace std;

int main() {

    // �� ǥ����
    // ����, ����, ������ ������

    // ���� ||
    /*
    ���� || ����
    */
   
   // ���� &&
   /*
   5 == 5 && 9 == 9 �� true
   5 == 5 && 9 != 9 �� false
   */

  // ������ !
  // !(ǥ����)

  cout << "����� ���̸� �Է��Ͻÿ�.";
  int age;
  cin >> age;

  if(age < 0 || age >100) {
    cout << "�������Ͻø� �ȵ˴ϴ�." << endl;
  }
  else if(20 <= age && age <= 29) {
    cout << "����� 20���̱���?" << endl;
  }
  else {
    cout << "����� ���̸� �� �𸣰ڽ��ϴ�." << endl;
  }

return 0;
 
}