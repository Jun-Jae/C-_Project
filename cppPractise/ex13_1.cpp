#include <iostream>
#define SIZE 20

using namespace std;

// 동적 구조체 생성
// temp* ps = new temp;

struct MyStruct
{
    char name[20];
    int age;
};

int main(){

    MyStruct* temp = new MyStruct;

    cout << "당신의 이름을 입력하십시오.\n";
    cin >> temp->name; // 구조체 멤버에 접근 방법1

    cout << "당신의 나이를 입력하십시오.\n";
    cin >> (*temp).age; // 구조체 멤버 접근 방법2

    cout << "안녕하세요! " << temp->name << "씨!\n";
    cout << "당신은 " << temp->age << "살 이군요!\n";
    
    delete temp;
    return 0;
}