#include <iostream>

using namespace std;

/* 보이드 포인터 사용할 일이 그리 많지는 안을 거임 */
enum type {
    INT,
    FLOAT,
    CHAR
};

// void pointer, generic pointer(포괄적인 포인터)
// 모든 타입의 변수를 다룰 수 있다. -> void pointer

int main() {
    int i = 5;
    float f = 3.0;
    char c = 'a';

    void *ptr = nullptr;

    // 문제가 없이 다른 타입의 변수의 주소를 받는다.
    // 사실 주소자체에는 타입이 없지만
    // 타입은 derefenrencing 을 위해서 필요하다.
    ptr = &i;
    ptr = &f;
    ptr = &c;

    int *ptr_i = &i;
    cout << ptr_i << endl;
    cout << ptr_i + 1 << endl;  // 포인터 연산, 1은 4byte 를 더한다 타입이 int라서

    //cout << ptr + 1 << endl;  // void pointer 는 할 수가 없다. err
    cout << &f << " " << ptr << endl;

    if (type == FLOAT) {
        cout << *static_cast<float *>(ptr) << endl;  // void pointer derefrencing 안됨, 값을 쓰고 싶으면 캐스팅을 해야한다.

    } else if (type == INT) {
        cout << *static_cast<int *>(ptr) << endl;
    } else {
    }

    // 써야 되는 경우가 생긴다. 다형성

    return 0;
}