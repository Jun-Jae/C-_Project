#include <iostream>

using namespace std;

int main()
{
    // �ݺ����̶�?
    char a[10] = {'a', 'b', 'c', 'd', 'e'};

    cout << a[0] << endl;
    cout << a[1] << endl;
    cout << a[2] << endl;
    cout << a[3] << endl;
    cout << a[4] << endl;

    for (int i = 0; i < 5; i++) {
        cout << i << "��°�Դϴ�" << endl;
    }
    /*
    1. �ݺ����� ����� ī������ ���� �ʱ�ȭ
    2. �ݺ����� ������ ������ '���� �˻�'
    3. �ݺ��� ��ü�� �����Ѵ�.
    4. ī������ ���� ��ȭ�Ѵ�.
    */
    
    // ���� ������, ���� ������
    int q = 10;
    int w = 10;

    cout << "q��" << q << ", w��" << w << endl;
    cout << "q++��" << q++ << endl;
    cout << "++W��" << ++w << endl;

    return 0;
}