#include <iostream>

using namespace std;

int foo(int x, int y);

int foo(int x, int y) {
    // parameter 변수 2개는 함수가 끝나면 메모리 사라진다.

    return x + y;
};

int main() {
    int x = 1, y = 2;
    foo(6, 7);      // 여기서의 6,7은 argument, 인자라고 부른다.
    foo(x, y + 1);  // 값에의한 전달, 참조에 의한 전달, 주소에 의한 전달

    return 0;
}