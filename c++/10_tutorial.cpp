#include <iostream>

using namespace std;

// const 를 쓰면 literal 을 써도, 메모리 주소르 받고, 할당됨

void doSomething(int &ref) {
    int n = 8;
    ref = n;
}

int main() {
    int val = 4;
    int *const ptr = &val;
    int &ref = val;
    int val2 = 9;
    cout << *ptr << endl;
    cout << val << endl;
    ref = 9;               // 메모리 주소가 있으니깐, 리터럴이 되는듯
    cout << *ptr << endl;  // 바뀌네

    return 0;
}