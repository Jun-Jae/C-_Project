#include <iostream>

int main() {
    // 공용체(union)
    // 서로 다른 데이터형을 한 번에 한 가지만 보관할 수 있음.
    // 한번에 하나의 데이터만 보관할 수 있다.
    // 메모리 절약에 효율적이다.
    union MyUnion
    {
        int intVal;
        long longVal;
        float floatVal;
    };

    MyUnion test;
    test.intVal = 3;
    std::cout << test.intVal << std::endl;
    test.longVal = 33;
    std::cout << test.intVal << std::endl;
    std::cout << test.longVal << std::endl;
    test.floatVal = 3.3;
    std::cout << test.intVal << std::endl; // 기존 데이터가 소실된다.
    std::cout << test.longVal << std::endl; // 기존 데이터가 소실된다.
    std::cout << test.floatVal << std::endl;

    return 0;
}