#include <iostream>
using namespace std;
void doSomething(const int& x) {
    cout << x << endl;
}

int main(void) {
    /* const int x = 5;
    const int &ref_x = x;

    const int &ref_2 = ref_x; 됨 */

    const int& ref_x = 4000;  // literal 안됨
                              // 그러나
                              // const 참조변수에는 가능, 심지어 주소도 만들어준다.

    cout << &ref_x << endl;
    int a = 1;
    doSomething(a);
    doSomething(1);  // 주소가 생기기 떄문에, 바로 literal 을 넣을 수 있게 된다.
    doSomething(a + 3);
    doSomething(3 * 4);

    return 0;
}