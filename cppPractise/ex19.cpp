#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;
    switch (a)
    {
    case 1:
        cout << "�Է��Ͻ� ���� 1�Դϴ�" << endl;
        break; // �Էµ� ���� ����ϰ� ����
    
    case 2:
        cout << "�Է��Ͻ� ���� 2�Դϴ�." << endl;
        break;

    case 3:
        cout << "�Է��Ͻ� ���� 3�Դϴ�." << endl;
        break;
    
    default:
        cout << "�Է��Ͻ� ���� 1,2,3 �̿��� ���Դϴ�." << endl;
        break;
    }

    cout << "switch ������ �������ϴ�." << endl;

    int i = 0;
    while (true)
    {
        cout << "i�� ����" << i << " �Դϴ�" << endl;
        if(i > 10)
            break;
        i++;
    }

    cout << "while���� �������ϴ�." << endl;
}