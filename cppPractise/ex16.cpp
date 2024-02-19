#include <iostream>

using namespace std;

int main() {

    // 배열 기반 반복문
    int a[7] = {1, 3, 5, 7, 9};

    for (int i = 0; i < 5; i++) {
        cout << a[i];
    } // 13579 출력
    cout << "\n";

    for(int i : a) { 
        cout << i;
    } // 1357900 출력

    return 0;
}