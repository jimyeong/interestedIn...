#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    while (true) {
        // new 와 delete 가 좀 느리다. os 에게 갔다 와야 하기 떄문에,
        // 고급 프로그램 개발자는 new 와 delete 를 적게 사용하는 것이 좋다.

        int *ptr = new int;
        cout << ptr << endl;
        delete ptr;
        ptr = nullptr;
    }
    return 0;
}
