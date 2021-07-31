#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string my_str("abcdef");
    cout << my_str[0] << endl;
    cout << my_str[3] << endl;

    my_str[3] = 'z';
    // cout << my_str << endl;

    try {
        //   my_str[10000] = 'x'; // 이거 하니깐 걍 죽어버렸었음, 아무런 메시지도 안남기고, 뒤가 아예 실행이 안됨.
        my_str.at(1000) = 'y';  // catch문으로 이동해서 basic_string 이라는, 출력을 내보냄. e.what();

    } catch (const std::exception& e) {
        cout << e.what() << '\n';
    }
    my_str[5] = 'q';
    my_str[6] = 'p';
    const char* ch = my_str.c_str();
    const char* ch1 = my_str.data();

    cout << ch << endl;  // char배열로 변환
    cout << ch1 << endl;

    char buf[20];
    my_str.copy(buf, 4, 2);  // char_number:4  offset index(start index):2
    cout << buf << endl;
    buf[4] = '\0';
    cout << buf << endl;

    return 0;
}