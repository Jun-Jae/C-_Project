#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;
    switch (a)
    {
    case 1:
        cout << "입력하신 값은 1입니다" << endl;
        break; // 입력된 값을 출력하고 종료
    
    case 2:
        cout << "입력하신 값은 2입니다." << endl;
        break;

    case 3:
        cout << "입력하신 값은 3입니다." << endl;
        break;
    
    default:
        cout << "입력하신 값은 1,2,3 이외의 값입니다." << endl;
        break;
    }

    cout << "switch 구문이 끝났습니다." << endl;

    int i = 0;
    while (true)
    {
        cout << "i의 값은" << i << " 입니다" << endl;
        if(i > 10)
            break;
        i++;
    }

    cout << "while문이 끝났습니다." << endl;
}