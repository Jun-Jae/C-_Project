#ifndef STRUCT
#define STRUCT
/* STRUCT란 이름이 main에 포함되기 위해서는
   #define STRUCT로 STRUCT를 기호상수로서 정의해주어야 한다.
*/
#include <iostream>

using namespace std;

struct MyStruct
{
    string name;
    int age;
};

void display(MyStruct&);

#endif // !STRUCT