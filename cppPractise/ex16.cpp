#include <iostream>

using namespace std;

int main() {

    // �迭 ��� �ݺ���
    int a[7] = {1, 3, 5, 7, 9};

    for (int i = 0; i < 5; i++) {
        cout << a[i];
    } // 13579 ���
    cout << "\n";

    for(int i : a) { 
        cout << i;
    } // 1357900 ���

    return 0;
}