
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

template <typename T>
string ToString(T x) {
    ostringstream ostream;
    ostream << x;  // outputstream
    return ostream.str();
}
template <typename T>
bool FromString(const string& str, T& x) {
    istringstream isstream(str);  //input string stream
    return (isstream >> x) ? true : false;
}

int main() {
    // 문자열 형변환
    string my_str("my string");
    cout << my_str << endl;
    string my_str2(my_str, 3);  // 복사가 시작되는 index
    cout << my_str2 << endl;
    string my_str3(my_str, 0, 5);  // 인자값이 2개 들어가면 복사의 범위를 정할 수 있다.
    cout << my_str3 << endl;

    string tA(3, 'A');
    cout << tA << endl;

    vector<char> vec;
    for (char e : "Today is a good day") {  // literal이 되넹
        vec.push_back(e);
    };

    // vector와도 함꼐 쓸 수 있다.
    string four_str(vec.begin(), vec.end());
    cout << four_str << endl;

    // 정수형을 숫자를 문자열로 바꿀 수도 있다.
    string my_strr(to_string(1004));
    cout << my_strr << endl;  // 문자열 1004

    // 문자열을 이렇게 연결 할 수도 있다.
    my_strr += (to_string(19));
    cout << my_strr << endl;

    int i = stoi(my_strr);
    i += 4;
    cout << i << endl;

    float f = stof(my_strr);
    cout << f << endl;

    string my_s_string(ToString(3.1425332));
    cout << my_s_string << endl;

    double d;
    if (FromString(my_s_string, d)) {
        cout << my_s_string << endl;

    } else {
        cout << " can not conver string";
    }

    return 0;
}