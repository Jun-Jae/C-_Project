#include <iostream>
#include <cstring>

using namespace std;

int main(){
    // ����ü : �ٸ� ���������� ���Ǵ� �������� ����
    // cf) �迭 : ���� ���������� ����

    // �౸����
    string exname;
    string exposition;
    float exheight;
    float exweight;

    struct MyStruct // ����ü ����
    {
        string name;
        string position;
        int height;
        int weight;
    } B; // B��� ���������� ����ü�� ������ �� �ִ�.
    
    MyStruct A;
    A.name = "Son"; // ����ü ����� ����
    A.position = "Striker";
    A.height = 183;
    A.weight = 77;
    /*
    MyStruct A = { // �ʱ�ȭ ���� ���
        "Son",
        "Striker",
        183,
        77
    }
    */
    cout << A.name << endl; // ����ü ����� ���� ���
    cout << A.position << endl;
    cout << A.height << endl;
    cout << A.weight << endl;

    B = {

    };

    cout << B.height << endl;

    MyStruct C[2] = { // ����ü�� �迭�� ������ �� �ִ�.
        {"A", "A", 1, 1},
        {"B", "B", 2, 2}
    };

    cout << C[0].height << endl; // 1�� ���

    return 0;
}