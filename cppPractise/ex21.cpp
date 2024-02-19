#include <iostream>

using namespace std;

void helloCPP(int, int);

int main() {

    int times1, times2;
    cout << "정수를 입력하시오." << endl;
    cin >> times1;
    cout << "정수를 한 번 더 입력하시오." << endl;
    cin >> times2;
    helloCPP(times1, times2); // 전달인자, 실제 함수에 전달되는 값
    return 0;
}

void helloCPP(int n, int m) { // 매개변수
    for(int i = 0; i < n; i++)
        cout << "Hello" << endl;

    for(int i = 0; i < m; i++)
        cout << "C++!" << endl;
}