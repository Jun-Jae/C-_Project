#ifndef STRUCT
#define STRUCT
/* STRUCT�� �̸��� main�� ���ԵǱ� ���ؼ���
   #define STRUCT�� STRUCT�� ��ȣ����μ� �������־�� �Ѵ�.
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