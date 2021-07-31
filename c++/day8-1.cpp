#include <iostream>
using namespace std;

// 메모리 할당 세가지 종류
// static memory  acllocation 전역변수, 스태틱 변수-> 한번생성하면, 프로그램 끝날 때까지 계속 갖;고 있음
// 자동 메모리 할당, 변수를 선언하거나, 정적 배열을 선언하면, 블럭밖으로 나가면, 메모리가 사라지고, 들어오면 다시 생긴다.
// 동적메모리 할당, 포인터와 관련이 깊다.

int main() {
    // 프로그래머게 백만은 그다지 큰 수가 아니다.

    // 정적 메모리는 스택에 들어가는 데, 스택 메모리는 용량이 작다.
    // 동적 메모리로 할당된 것은 힙으로 들어가는데, 힙은 크다,

    int array[1000000];  // stack

    // 초기화
    int *ptr = new int{ 7 };  // 는 integer 사이즈만큼,  os 에게 메모리를 받아서, 그 주소를 알려준다. 즉 포인터로 받아야 한다. // int var = 7;
    int *ptr_q = new int{ 9 };

    // *ptr = 7;
    cout << ptr << endl;
    cout << *ptr << endl;  // 7

    // 메모리를 os 를 돌려주는 것도 있는데,
    // 메모리를 많이 요구하는 프로그램 다루다 보면,
    // 메모리를 돌려줬다가 가져왔다가 하는, 것을 해야 한다.
    delete ptr;     // 프로그램이 끝나서 반납하기 전에 먼저 반납한다. 메모리를
    ptr = nullptr;  // 가지고 있는 주소가 없어요

    // cout << "After delete" << endl;
    // cout << ptr << endl;
    // cout << *ptr << endl;  // 주소는 같은데 , dereferencing 을 해보니 다른 값이 나온다. 이미 값 자체가 삭제 되었기 떄문에

    if (ptr != nullptr) {
        cout << ptr << endl;
        cout << *ptr << endl;
    }

    // 할당할 메모리가 없어도, 프로그램이 오류를 발생시키지 않는다.
    int *ptr_a = new (std::nothrow) int{ 7 };

    // int *ptr_b = new (std::nothrow) int{8};
    if (ptr_a != nullptr) {
        cout << ptr << endl;
        cout << *ptr << endl;
    } else {
        cout << "Could not allocate memory" << endl;
    }

    int *ptr_i = ptr_a;
    delete ptr_i;
    delete ptr_a;

    ptr_a = nullptr;
    ptr_i = nullptr;
    //memory leak
    while (true) {
        int *ptr = new int;
        cout << ptr << endl;
    }

    return 0;
}