#include <iostream>
#include <cstring>

using namespace std;

int main(){
    // 구조체 : 다른 데이터형이 허용되는 데이터의 집합
    // cf) 배열 : 같은 데이터형의 집합

    // 축구선수
    string exname;
    string exposition;
    float exheight;
    float exweight;

    struct MyStruct // 구조체 선언
    {
        string name;
        string position;
        int height;
        int weight;
    } B; // B라는 변수명으로 구조체를 선언할 수 있다.
    
    MyStruct A;
    A.name = "Son"; // 구조체 멤버에 접근
    A.position = "Striker";
    A.height = 183;
    A.weight = 77;
    /*
    MyStruct A = { // 초기화 선언 방법
        "Son",
        "Striker",
        183,
        77
    }
    */
    cout << A.name << endl; // 구조체 멤버에 접근 방법
    cout << A.position << endl;
    cout << A.height << endl;
    cout << A.weight << endl;

    B = {

    };

    cout << B.height << endl;

    MyStruct C[2] = { // 구조체를 배열로 선언할 수 있다.
        {"A", "A", 1, 1},
        {"B", "B", 2, 2}
    };

    cout << C[0].height << endl; // 1을 출력

    return 0;
}