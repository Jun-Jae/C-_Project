#include <iostream>

using namespace std;

const int SIZE = 8;

int sumArr(int*, int);
//int sumArr(int*, int*);

int main(){

    int arr[SIZE] = {1, 2, 4, 8, 16, 32, 64, 128};
    cout << "size of arr " << sizeof arr << endl;
    // arr == &arr[0]
    int sum = sumArr(arr, arr + SIZE);

    cout << "함수의 " << SIZE << "까지의 합은 " << sum << "입니다.\n";

    sum = sumArr(arr, 3);
    //sum = sumArr(arr, arr+3);
    cout << "함수의 " << "세번째 인덱스 까지의 합은 " << sum << "입니다.\n";

    return 0;
}

int sumArr(int* begin, int* end){
    //cout << "size of arr " << sizeof arr << endl;
    int total = 0;
    int* pt;

    for (pt = begin; pt != end; pt++)
        total += *pt;

    return total;
}
/*
int sumArr(int* begin, int* end){
    int total = 0;
    int* pt;

    for (pt = begin; pt != end; pt++)
        total += *pt;

    return total;
}
*/