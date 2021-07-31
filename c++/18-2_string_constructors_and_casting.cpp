#include <iostream>
#include <sstream>  // string stream
#include <string>
#include <vector>
using namespace std;

/* 형변환을 하는 방법들 */

template <typename T>
string ToString(T x) {
    ostringstream ostream;
    ostream << x;          // ostream에 넣어준다.
    return ostream.str();  // stream 으로 들어온것을 string으로 바꿔서 리턴해준다.
};

template <typename T>
bool FromString(const string& str, T& x) {
    istringstream isstream(str);            // input string stream 을 string 을 넣어서 초기화 한다.
    return (isstream >> x) ? true : false;  // 이해 안되도 io 강의 들으면 이해 된다.
}

int main() {
    int a, b;
    // string my_string("my string");
    // cout << my_string << endl;
    //string second_string(my_string, 3);

    // string second_string(my_string, 3, 2);
    // cout << second_string << endl;

    // 소멸자를 직접 호출 할 필요는 없고, 알아서 관리 된다.
    const char* my_string = "my string";
    string second_string(my_string, 3, 6);
    cout << second_string << endl;
    string third_string(10, 'A');
    cout << third_string << endl;

    vector<char> vec;
    for (auto e : "Today is a good day") {  // iterator 와 함께 쓸 수 있다.
        vec.push_back(e);
    };

    string fourth_string(vec.begin(), vec.end());  // today is a good day // 문자열 출력 범위를 지정할 수 있음
    cout << fourth_string << endl;

    string fifth_string(vec.begin(), find(vec.begin(), vec.end(), 'y'));  // toda
    cout << fifth_string << endl;

    // string my_strr(4); // 정수열을 문자로 바꿀 수 없다.
    string my_strr(to_string(1004));  // 정수형을 문자열로 바꿔줄 수가 있다. // 여러장 파일을 출력해야 할 떄, 유용하다 파일이름 같은 거 결정할 떄, 시간도 넣을 수 있다.
    cout << my_strr << endl;

    my_strr += (to_string(128));  // 문자열 끝에 이어붙이기..
    cout << my_strr << endl;

    int i = stoi(my_strr);  // string to int
    cout << i << endl;

    float f = stof(my_strr);
    cout << i << endl;

    //s tring my_special_str(ToString(3.141592));  // float 를 문자열로 리턴해준다.
    string my_special_str("hello");  // can not convert string to double
    cout << my_special_str << endl;  // string을 항상 다른 타입으로 변환할 수 없지만, integer 는 string으로 변환이 가능하다.

    double d;
    if (FromString(my_special_str, d)) {
        cout << "dobule: " << d << endl;
    } else {
        cout << "can not convert string to double";
    };

    return 0;
}
