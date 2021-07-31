#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    // vector사용과 거의 똑같음
    string my_str("abcdefg");
    cout << my_str[0] << endl;
    cout << my_str[3] << endl;

    my_str[3] = 'z';  //  "문자열", '문자'
    cout << my_str << endl;

    try {  // 예외처리의 단점은, 느려진다.
        //my_str[1000] = 'x';  // runtime error가 남. // 예외처리 하는 기능이 구현 안되어있다. // performance 가 중요한 경우.

        // cout << my_str.at(100) = 'x'; // 예외처리 하고 싶으면 이런 문법을 사용할 것
        // 안정성이 중요한 경우
        // vector 도 똑같다.

    } catch (const std::exception& e) {
        // cout << e.what() << endl;
    }

    cout << my_str.c_str() << endl;  // char로 변환

    const char* arr = my_str.c_str();  // c_str로 char[] 로 변환하게 되면, 원라 size에서 null문자열을 붙여서 준다.
    const char* arr1 = my_str.data();

    // 사용자가 실제로 char type 배열처럼 쓸 수 있도록

    cout << (int)arr[6] << endl;
    cout << (int)arr[7] << endl;
    cout << (int)arr1[7] << endl;

    // string 을 c style array로 바꿔주는 한가지 방법 더
    // copy를 할 수가 있다.

    char buf[20];
    my_str.copy(buf, 4, 0);  // 5글자 출력 offset 은 0
    cout << buf << endl;     // null 문자는 넣어주지 않는다.

    buf[4] = '\0';
    cout << buf << endl;  // 그래서 null 문자를 따로 넣어주어야 한다. copy 의 경우

    return 0;
}
