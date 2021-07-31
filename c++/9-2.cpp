#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    /* const 변수는 const pointer 를 써야 된다, 단 값 수정은 안된다. */
    const int value = 5;
    const int *ptr = &value;
    cout << *ptr << endl;

    /* 이 예제되는 작동함 */
    // 포인터변수는 const 변수인데, 포인터변수가 가르키는 주소의 담긴 value는 변경할 수 있음
    int value2 = 5;
    const int *ptr2 = &value2;
    value2 = 6;
    cout << *ptr2 << endl;

        /* 이경우는 또 됨 const 포인터에, 다른 변수의 주소를 할당하는 경우 */
    int value3 = 5;
    const int *ptr3 = &value3;
    int value4 = 7;
    ptr3 = &value4;
    cout << *ptr3 << endl;

    /* *const 를 하면, pointer 변수에 다른 주소 할당 안됨 */

    int value5 = 5;
    int *const ptr5 = &value5;  // 변수로서의 포인터가 진짜 상수화가 된다.

    *ptr5 = 10;
    cout << *ptr5 << endl;

    // int value6 = 8;
    // ptr5 = &value6;  // error

    // 상수는 초기화를 안해주면 쓸 수가 없다. 포인터도 마찬가지

    /* 
    int value = 5;
    const int *const ptr = &value;
    *ptr = 10;
     */

    /* organisation */
    int value9 = 5;
    const int *ptr7 = &value;
    int *const ptr8 = &value9;
    const int *const ptr9 = &value9;

    return 0;
}
