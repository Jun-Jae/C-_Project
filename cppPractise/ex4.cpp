# include <iostream>

using namespace std;

int main(){

    // char : ���� ������
    // bool : 0(false) Ȥ�� 1(true)
    int a = 77;
    char b = a;
    bool d = 0;
    bool e = 1;
    bool f = 10;

    char c[] = { 'a', 'b', 'c', '\0' };
    // null ���� '\0'
    // "" >> ��������� null���ڰ� ���� �� String
    cout << b << endl; // M���
    cout << c << endl;

    cout << d << " " << e << " " << f << endl;

    return 0;

}