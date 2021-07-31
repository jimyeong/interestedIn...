#include <iostream>

using namespace std;

typedef int* pint;

// const int* const ptr // ptr 을 못바꾸게 만들고 싶으면,const ptr, 간혹 실수하는 경우가 있다.
void koo(const int* ptr, int* arr, int length) {
    for (int i = 0; i < length; i++) {
        cout << arr[i] << endl;
    };
    arr[0] = 1.0;
    int x = 1;
    ptr = &x;

    // *ptr = 1; 불가능 const 라서
}

void foo(double degrees, double* sin_out, double* cos_out) {  //  주소라는 특수한 값을 전달한것, -> 값에 의한 전달, 주소에 의한 전달
    *sin_out = 1.0;
    *cos_out = 2.0;

    cout << "in func: " << sin_out << " " << cos_out << endl; // 파라미터 pointer 는 넘어오는 변수의 주소를 담는다. // 즉 넘어오는 변수와 주소가 다름
};
/* 
void foo(int* ptr) {
    cout << &ptr << " " << ptr << " " << *ptr << endl;
} */

int main() {
    int value = 5;
    int* ptr = &value;
    cout << value << " " << &value << endl;
    double degrees = 30;
    double sin, cos;

    foo(degrees, &sin, &cos);
    cout << "in main: " << &sin << " " << &cos << endl;  // 들어간 주소와 파라미터의 주소가 다르다.

    // cout << sin << " " << cos << endl;

    return 0;
}