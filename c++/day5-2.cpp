#include <cstddef>
#include <iostream>

using namespace std;
void doSomething(double *ptr) {
    if (ptr != nullptr) {
        // dom something useful
        cout << "address of pointer variable in doSomething() " << (long long)&ptr << endl;
        cout << *ptr << endl;

    } else {
        // do nothing with ptr
        cout << "Null ptr, do nothing" << endl;
    }
};

// null pointer

int main(void) {
    // double *ptr = 0; // c-style;
    //double *ptr = NULL; // c-st\] yle
    // double *ptr = nullptr;  // modern c++
    double *ptr{ nullptr };  // modern c++, uniform intialize
    doSomething(ptr);
    doSomething(nullptr);
    double d = 123.4;
    doSomething(&d);

    ptr = &d;
    doSomething(ptr);

    cout << "address of pointer variable in main() " << (long long)&ptr << endl;

    // cstddef
    nullptr_t nptr;  // nullptr 만 넣을 수 있는 타입 // 쓸일은 거의 없지만, 포인터중에 nullptr  만 받아야 하는 point 가 있음

    return 0;
}