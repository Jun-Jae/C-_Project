#include <iostream>

using namespace std;

void helloCPP(int, int);

int main() {

    int times1, times2;
    cout << "������ �Է��Ͻÿ�." << endl;
    cin >> times1;
    cout << "������ �� �� �� �Է��Ͻÿ�." << endl;
    cin >> times2;
    helloCPP(times1, times2); // ��������, ���� �Լ��� ���޵Ǵ� ��
    return 0;
}

void helloCPP(int n, int m) { // �Ű�����
    for(int i = 0; i < n; i++)
        cout << "Hello" << endl;

    for(int i = 0; i < m; i++)
        cout << "C++!" << endl;
}