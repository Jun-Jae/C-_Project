#include <iostream>

using namespace std;

void countDown(int);

int main() {
    // ���ȣ�� : C++���� �Լ��� �ڱ� �ڽ��� ȣ���� �� �ִ�.

    countDown(5);

    return 0;
}

void countDown(int n) { // ó�� ���� n�� 5�� ���� 
    cout << "Counting..." << n << endl;
    if(n > 0)
        countDown(n - 1);
    cout << n << "��° ����Լ�" << endl;
}