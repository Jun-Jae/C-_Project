#include <iostream>

using namespace std;

int main(){

    // C++���� ���ڿ��� �ٷ�� ��� �� �ϳ��� string
    /*
    C ��Ÿ�Ϸ� string ��ü�� �ʱ�ȭ�� �� �ִ�.
    cin�� ����Ͽ� string ��ü�� Ű���� �Է��� ������ �� �ִ�.
    cout�� ����Ͽ� string ��ü�� ���÷����� �� �ִ�.
    �迭 ǥ�⸦ ����Ͽ� string ��ü�� ����Ǿ� �ִ� �������� ���ڵ鿡 ������ �� �ִ�.
    
    �迭�� �ٸ� �迭�� ��°�� ������ �� ����.
    �� string������ �̰��� ����!
    */

    char char1[20];
    char char2[20] = "jaguar";
    string str1;
    string str2 = "panda";
    // char1 = char2; �� �߸��� ���
    str1 = str2; // ������ ���
    cout << str1 << endl;
    return 0;
}