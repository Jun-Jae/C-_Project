#include <iostream>

using namespace std;

const float PIE = 3.14;
void cheers(int n); // �Լ� ���� ���
float circle(int x); // �Լ� ���� ���

int main()
{
    /*
    1. �Լ� ���� ����
    2. �Լ� ���� ����
    3. �Լ� ȣ��
    */

   /*
   1. ���ϰ��� �ִ� Ÿ��

   typeName functionName(parameterList)
   {
        statements(s);
        return value;
   }

   2. ���ϰ��� ���� Ÿ��

   void functionName(parameterList)
   {
        statements(s);
        return; // ������ �� ����
   }
   */

  int a;
  cout << "�ϳ��� ���� �Է��Ͻÿ�." << endl;
  cin >> a;
  cheers(a);

  int b;
  cout << "���� ������ ���̸� �Է��Ͻÿ�." << endl;
  cin >> b;
  float c = circle(b);
  cout << "���� ���̴� " << c << " �Դϴ�." << endl;
}

void cheers(int n) { // �Լ��� ���� ����
    for(int i = 0; i < n ; i++) {
        cout << "Cheers!" << endl;
    }
    // return;
}

float circle(int x) { // �Լ��� ���� ����
    return x * x* PIE; // float��
}