#include <iostream>
using namespace std;

int main(void) {
    // const int value = 4;
    // const int *ptr = &value;

    int q = 1;
    // const int *ptr = &q;
    q = 4;

    int p = 2;
    // ptr = &p;  // const int *ptr 에도 사용이 된다. 값을 다시 할당할 수 있다.

    int g = 4;
    int *const ptr = &g;  // const 변수 초기화 필수.
    // ptr = &p;             // error

    cout << *ptr << endl;
    // 정리
    // 상수형변수에는 값 재할당 못함 const int k = 4 -> k=9 error
    // cont int *ptr 형 포인터 변수에 다른 값을 할당할 수 있다. ptr = p , ptr =q -> ptr = q
    // *const ptr 이 진짜 상수 포인터임, 재할당 안됨

    return 0;
}
