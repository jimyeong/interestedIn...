#include <iostream>
using namespace std;

int main(void) {
    int x = 5;
    cout << x << endl;
    cout << &x << endl;  // &: address of operator, ampercend 16 진수로 메모리 주소 출력
    // 10진수로 보고 싶다면 int로 캐스팅을 해야 한다.
    cout << (long long)&x << endl;

    // de-reference operator * -> 내가 들여다 볼게 뜻
    // refernce 연결, 참고 도서

    cout << *(&x) << endl;
    // point 는 변수,
    // memory 주소를 담는 변수 임 0x7ffee1aac5a8

    return 0;
}