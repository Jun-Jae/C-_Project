#include <iostream>

using namespace std;

inline float square(float x) { return x * x; }
// �Լ��� ���� �տ� 'inline' Ű���带 ���δ�.

int main()
{
    // �ζ��� �Լ�
    /*
    �Ϲ������� �Լ��� ȣ���� �Լ��� �ּҷ� �����ϴ� ����
    �ζ��� �Լ��� �����ϵ� �Լ� �ڵ尡 ���α׷��� �ٸ� �ڵ忡 ����
    �����Ϸ��� �ζ��� �Լ� ȣ�� = ������ �ƴ� �׿� �����ϴ� �Լ� �ڵ�� ��ü
    */
    int a = 5;
    cout << "�� ���� ���̰� " << a << "�� ���簢���� ���̴�?" << endl;
    float b = square(a);
    cout << b << endl;
}
