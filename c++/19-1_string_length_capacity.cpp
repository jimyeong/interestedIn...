#include <iostream>
#include <string>

using namespace std;

int main() {
    // string은 클래스라서 내부적으로 길이 정보를 가지고 있음,
    // 굳이 \0 널문자를 통해서, 끝났는 지 확인해줄 필요가 없음
    string my_str("");
    cout << my_str.size() << endl;

    cout << boolalpha;

    cout << my_str.empty() << endl;  // string("") 을 주면 size 가 0 이다. empty() -> true가 나온다. 즉 null 문자가 포함되지 않음
    string my_strr("01234567");
    cout << my_strr.length() << endl;
    cout << my_strr.size() << endl;

    // string 도 새로운 데이터를 추가될 가능성을 염두해 두어서, 여분의 용량을 둔다.
    // memory reallocation 즉 메모리 재할당을 안하려고 함(new ,delete) 이걸 하면 느려지니까, 그래서 여분의 용량을 둔다.
    // memory reAllocation 이 발생하면 할수록 느려지는 것임 프로그램은
    cout << my_strr.capacity() << endl;
    cout << my_strr.max_size() << endl;  // 들어갈 수 있는 글자의 갯수 // 18446744073709551599

    my_strr.reserve(1000);  // 미리 capacity를 크게 잡는 경우도 있음, 여분의 공간을 잡는 것임

    return 0;
}