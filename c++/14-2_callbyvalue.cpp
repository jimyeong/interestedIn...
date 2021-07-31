#include <iostream>
using namespace std;

void doSomething(int y) {
    // y에서 무슨짓을 하더라도, main 에 있는 x 에 영향을 줄 수가 없다.
    cout << "In func " << y << " " << &y << endl;
}

int main() {
    doSomething(5);  // 함수가 실행되는 순간, 파라미터 y주소에 값이 복사가 된다.

    int x = 6;

    cout << "In main " << x << " " << &x << endl;

    doSomething(x);
    doSomething(x + 1);  // x+1 은 값이다. expression,  메모리주소가 없음

    return 0;
}