#include <iostream>

using namespace std;

int main() {
    // ����ü(enum)
    // ��ȣ ����� ����� �Ϳ� ���� �Ǵٸ� ���.

    enum spectrum { red, orange, yellow, green,
    blue, violet, indigo, ultraviolet};
    /*
    1. spectrum�� ���ο� �������� �̸����� �����.
    2. red, orange, yellow.. 0�������� 7���� ���� ���� ���� 
    ��Ÿ���� ��ȣ ����� �����.
    3. �����ڵ��� �ʱ�ȭ ���� ����(��, ������)
    */

   spectrum a = orange; // ��� ������ �Ұ����ϴ�.
   cout << a << endl; // 1���

    int b;
    b = blue;
    b = blue + 3; // 7�� ���� b�� ����

    cout << b << endl; // 7 ���

    return 0;
}