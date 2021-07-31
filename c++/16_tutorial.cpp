#include <array>
#include <iostream>

using namespace std;

int& getValue(int x) {
    int value = x * 3;
    return value;
};
int* getVal(int x) {
    int value = x * 10;
    return &value;
}

int* allocateMemory(int size) {
    return new int[size];
}

int& get(array<int, 100>& my_array, int ix) {
    return my_array[ix];
}

struct s {
    int a, b, c, d;
};

s getStruct() {
    s my_s = { 1, 2, 3, 4 };
    return my_s;
};

tuple<int, double> getTuple() {
    int a = 10;
    double d = 3.14;
    return make_tuple(a, d);
}

int main() {
    // 함수의 반환타입 1. reference, 2. pointer,

    int value = getValue(5);  // 변수에서 리턴된 참조변수의 값을 복사한다.
    cout << value << endl;

    int& value2 = getValue(5);  // 레퍼런스 로 리턴되는, 함수를 레퍼러로 받게 되면,
    cout << value2 << endl;     // -> 제대로 값이 출력된다.
    cout << value2 << endl;     // 아무런 변경을 하지 않고, 위와 동인한 ㅎ 출력을 실행하면, ->-2348273849 랜덤 숫자가 나온다. 참조되고 있는 주소의 값은 이미 날라갔음, 주소만 남아있고, 값이 없다.   // return type을 한번에 받는 방법,

    // pointer를 리턴하면 어떻게 될까
    int* k = getVal(3);
    cout << k << endl;   // 주소느 정상적으로 출력이 된다/
    cout << *k << endl;  // 그런데 주소에서 값을 찾으려고 하면, local variable 변수 자체는 이미 os 로 반환되었기 떄문에, 값을 구할 수가 없다. 쓰레기 값 나온다.

    // 주소 자체는 나오나,
    // 로컬 변수가 os 로 반환되면, 로컬\수의 값은 사라진다.
    int* arr = allocateMemory(1024);
    delete arr;

    array<int, 100> my_arr;
    my_arr[30] = 50;
    get(my_arr, 30) *= 10;  // get 은 참조변수를 리턴한다. 즉 같은변수 다른이름인 것이다.
    cout << my_arr[30] << endl;

    s my_s = getStruct();
    cout << my_s.a << endl;

    tuple<int, double> my_tp = getTuple();
    cout << get<0>(my_tp) << endl;
    cout << get<1>(my_tp) << endl;

    auto [a, d] = getTuple();

    cout << a << endl;
    cout << d << endl;

    return 0;
}