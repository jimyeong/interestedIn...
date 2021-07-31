
#include <iostream>
using namespace std;

// 참조변수 쓸 떄는, 엘리먼트 갯수 반드시 써야 함 // 포인터랑 다르게
void printElemenets(const int (&arr)[5]) {
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void doSomething(int &n) {
    // 인자값에 const를 주면서, 값 변경을 못하도록 막고 있다
    // 메모리 주소 자체를 넘겨주다 보니, 값을 임의로 변경하면, 시스템 오류가 생길 수가 있다.
    n = 10;
    cout << "In doSomething" << n << endl;
    cout << &n << endl;
}

struct Something {
    int v1;
    float v2;
};

struct Other {
    Something st;
};

int main(void) {
    //     int value = 5;
    //    int *ptr = nullptr;
    //    ptr = &value;

    // int &ref = value;  // reference variable
    // cout << ref << endl;
    // cout << value << " " << ref << endl;

    // ref = 10;  // ref 에 값을 넣었는데, value 도 바뀐다.
    // *ptr = 10 처럼 동작하고 있음
    // 참조, *쓰는게 나중에 불편해지는데, 이렇게 쓸 수도 있다.

    // cout << &value << endl;  // value 와 ref 는 주소가 같다. 즉 그냥 다른 이름만 가지고 있고, 실체가 같다고 생각하면 됨 allias 처럼
    //cout << &ref << endl;
    //cout << ptr << endl;
    //cout << &ptr << endl;  // 포인터주소

    // ref 는 반드시 초기화 되야 한다.
    // int x = 5;
    // int &ref = x;

    // const int y = 10;
    // int &ref = y; // const 는 ref 에 늘 수 없다. ref 에서 값을 변경시킬 수 있기 떄문에,
    // const &ref = y;  //이 건 됨

    // int &ref1 = 105; // literal(숫자) 은 들어갈 수 없음 ex 104, 105, literal 은 메모리 주소를 가지지 못한다. 즉 메모리에 주소가 있는 , 변수를 넣엉 ㅑ됨, r-value == reference variable

    int n = 5;
    cout << n << endl;
    cout << &n << endl;

    doSomething(n);  // 넘겨질 때 주소와, 함수 내부에서 넘겨받는 변수의 주소가 같다. 즉, 같은 곳을 가리키고 있다. // 변수 자체가 넘어간다고 생각하면 됨
    // pointer 를 넘기면, 변수를 복사를 한번해야 되는데,
    // reference를 넘기면, 변수 복사 할 필요도 없다.
    cout << n << endl;

    // 계속 들어가야 하는 상황
    // Other st;
    // ot.st.v1 ;

    Other ot;
    int &v1 = ot.st.v1;
    v1 = 1;

    int val = 5;
    int *const ptr = &val;
    int &ref = val;
    *ptr = 10;
    ref = 10;  // ref 도 내부적으로는 pointer 로  되어있다.
    cout << *ptr << endl;
    cout << ref << endl;

    return 0;
}