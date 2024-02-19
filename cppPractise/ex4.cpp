# include <iostream>

using namespace std;

int main(){

    // char : 작은 문자형
    // bool : 0(false) 혹은 1(true)
    int a = 77;
    char b = a;
    bool d = 0;
    bool e = 1;
    bool f = 10;

    char c[] = { 'a', 'b', 'c', '\0' };
    // null 문자 '\0'
    // "" >> 명시적으로 null문자가 포함 → String
    cout << b << endl; // M출력
    cout << c << endl;

    cout << d << " " << e << " " << f << endl;

    return 0;

}