#include <iostream>
//#define PI = 3.1415926535 //c style
using namespace std;

int main(){
    //���� ���̸� ���ϴ� ���α׷�
    //������ * ������ * 3.14

    //1. �ٲ� �ʿ䰡 ���� ��
    //2. �ٲ��� �ȵǴ� ��
    //���
     const float PI = 3.1415926535;

     int r = 3;
     float s = r * r * PI;

     //�������� ��ȯ
     /*
     1. Ư�� ���������� ������ �ٸ� ���������� ���� �������� ��
     2. ���Ŀ� ���������� ȥ���Ͽ� ������� ��
     3. �Լ��� �Ű������� ������ ��
     */
     int a = 3.141592;
     cout << a << endl;

    //���������� �������� ��ȯ
    // typeName(a) (typeName)a
     char ch = 'M';
     cout << (int)ch << " " << int(ch) << endl; // 77���

     //C++
     //static_cast<typeName>
     cout << static_cast<int>(ch) << endl; // 77���
}