#include <iostream>

using namespace std;

const int SIZE = 30;
int main()
{
    cout << "������ �Է��Ͻʽÿ�" << endl;
    char line[SIZE];
    cin.get(line, SIZE);
    cout << "�Է��Ͻ� ������" << endl;
    int spaces = 0;
    for (int i = 0; line[i] != '\n'; i++) {
        cout << line[i];

        if(line[i] != ' ')
            continue; 

        spaces++;
    }
    cout << "�Դϴ�." << endl;
    cout << "�Է��Ͻ� ���忡�� ������ ������ ���� ���� " << spaces << "�� �Դϴ�" << endl;
    cout << "for���� �������ϴ�." << endl;

    return 0;
}