#include <array>
#include <iostream>
#include <tuple>

using namespace std;

int* getValue(int x) {
    int value = x * 2; 
    return &value;
}

int& getValue1(int x) {  // reference 를 반환
    int value = x * 2;
    return value;
}

int* allocateMemory(int size) {
    return new int[size];
}
int& get(std::array<int, 100>& my_arr, int ix) {
    return my_arr[ix];
};

struct s {
    int a, b, c, d;
};
s getStruct() {
    s my_s{ 1, 2, 3, 4 };
};

tuple<int, double> getTuple() {
    int a = 10;
    double d = 3.14;
    return make_tuple(a, d);
}
int main() {
    // int value = *getValue(3); // dereferencing을 해서 받는 경우
    // int* value = getValue(3); 포인터로 받는 경우

    int* value = getValue(3);  // 함수가 끝나면서, 함수내부에 있던 변수값은 사라진다.
    cout << *value << endl;    // 리턴된 주소를 아는 것이 중요할까, 이미 내부의 값은 사라졌는데 // 권장되지 않는다.

    int value1 = getValue1(5);  // 주소 reference를 반환하면, 이것이의 값이 변수로 복사가 된다.
    cout << value1 << endl;

    int& value2 = getValue1(5);
    cout << value2 << endl;  // 10
    cout << value2 << endl;  // -1920264352 // value2는 함수 내부의 변수 주소를 바라보고 있다가, 함수가 소멸됨과 동시에 사라지고,
    // 주소는 남아서, 쓰레기값이 들어오게 된다.

    int* array = allocateMemory(1024);  // 팩토리패턴,
    delete array;                       // 구조상 new와 분리되기 떄문에 좀 불편해질 수가 있음

    std::array<int, 100> my_arr;  // 메모리가 잡혀있음
    my_arr[30] = 10;

    // get(my_arr, 30) = 1024;  // 30번쨰에 1024를 넣는다.
    get(my_arr, 30) *= 10;  // 100
    cout << my_arr[30] << endl;

    s my_s = getStruct();  // 구조체를 통해서 받으면, 값을 여러가지를 한꺼번에 리턴받을 수 있는 효과가 있다. 그러나, 함수 하나당 구조체 하나가 필요하게 된다.. overload

    tuple<int, double> my_tp = getTuple();  // tuple로 받으니깐 값 2개를 한번에 리턴받음
    cout << get<0>(my_tp) << endl;          // a
    cout << get<1>(my_tp) << endl;          // d

    auto [a, d] = getTuple();  // 자동 타입추론
    cout << a << endl;
    cout << d << endl;

    return 0;
}