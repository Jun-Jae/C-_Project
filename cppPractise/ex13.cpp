#include <iostream>
#include <cstring>
#define SIZE 20

using namespace std;

int main(){

    char animal[SIZE];
    char* ps;

    cout << "���� �̸��� �Է��Ͻʽÿ�.\n";
    cin >> animal;

    ps = new char[strlen(animal) +1];
    strcpy(ps, animal);

    cout << "�Է��Ͻ� ���� �̸��� �����Ͽ����ϴ�." << endl;
    cout << "�Է��Ͻ� ���� �̸��� " << animal << "�̰�, �� �ּҴ� " << (int*)animal << " �Դϴ�." << endl;
    cout << "����� ���� �̸��� " << ps << "�̰�, �� �ּҴ� " << (int*)ps << " �Դϴ�." << endl;
     
    delete[] ps;
    return 0;
}