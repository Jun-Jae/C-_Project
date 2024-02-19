#include <iostream>
#include "ex32_time.h"
using namespace std;

int main() {
    // C++ Friend
    // 이항 연산자 : 두 개의 피연산자를 요구하는 연산자
    // operator*

    Time t1(1, 20);
    Time t2;

    t2 = 3 * t1;
    // t2 = operator*(3, t1);
    t2.show();

	Time day1(1, 40);
	Time day2(2, 30);
	
	day1.show();
	day2.show();

	Time total;
	total = day1.operator+(day2);
	total.show();

	return 0;
}