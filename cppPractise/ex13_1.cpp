#include <iostream>
#define SIZE 20

using namespace std;

// ���� ����ü ����
// temp* ps = new temp;

struct MyStruct
{
    char name[20];
    int age;
};

int main(){

    MyStruct* temp = new MyStruct;

    cout << "����� �̸��� �Է��Ͻʽÿ�.\n";
    cin >> temp->name; // ����ü ����� ���� ���1

    cout << "����� ���̸� �Է��Ͻʽÿ�.\n";
    cin >> (*temp).age; // ����ü ��� ���� ���2

    cout << "�ȳ��ϼ���! " << temp->name << "��!\n";
    cout << "����� " << temp->age << "�� �̱���!\n";
    
    delete temp;
    return 0;
}