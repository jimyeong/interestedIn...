#include <iostream>

using namespace std;

const char *getName() {
    return "Jack Jack";
};

int main(void) {
    // 심볼릭 상수
    //  char name[] = "jack jack";

    //  char *name = "Jack Jack";  // jack jack 을 담을 메모리가 없음
    //const char *name = "Jack Jack";    // jack jack 을 담을 메모리가 없음 const 를 붙였기 떄문에, 임시적으로 메모리 주소에서 문자열 출력 // 심볼릭 상수라고 한다.
    //const char *name2 = "Jack Jack";   // jack jack 을 담을 메모리가 없음 // 내용이 같으니까 위의 메모리를 갖이 사용한다.
    // const char *name3 = "Jack Jack3";  // 혼자 메모리가 다르다.

    // const 를 붙여야 기호적 상수처럼 쓸 수 있다.

    // const char *name = getName();
    // const char *name2 = getName();

    // cout << (uintptr_t)name << endl;
    // cout << (uintptr_t)name2 << endl;  // name과 name2가 메모리 주소가 같다.

    // cout 에서 문자열은 특별히 처리한다.
    int int_arr[5] = { 1, 2, 3, 4, 5 };
    char char_arr[] = "Hello World";
    const char *name = "Jack Jack";

    cout << int_arr << endl;
    cout << " 12345" << endl;
    cout << char_arr << endl;  // cout이 문자열은 특별히 처리한다. // null 문자를 만날때까지 출력함
    cout << " 12345678" << endl;
    cout << name << endl;

    char c = 'Q';        //
    cout << &c << endl;  // c의 주소가 들어가는데, 문자열이기 때문에, null  문자열이 나올 때까지 출ㄹ력하게 된다.

    return 0;
}