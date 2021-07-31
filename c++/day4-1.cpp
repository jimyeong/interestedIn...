

#include <iostream>
using namespace std;

void strcpy_s(char destination[], int length, char source[]) {
    int idx = 0;
    while (true) {
        if (destination[idx] == '\0' || idx == length) {
            source[idx] = '\0';
            break;
        }
        source[idx] = destination[idx];
        idx++;
    }
}

int main() {
    // ex1
    //char myString[255];  // 몇글자가 들어올지 몰라서 보통 크게 잡는다

    // cin >> myString;  스패이스바 허용 안됨, 공백 만나면 끝남
    //cin.getline(myString, 255);  // 이렇게 입력을 받으면 스페이스 가능
    // myString[4] = '\0';  // null characor
    //int idx = 0;

    // while (true) {
    //     if (myString[idx] == '\0') {  // null character
    //         break;
    //     };

    //     cout << myString[idx] << " " << (int)myString[idx] << endl;
    //     idx++;
    // }
    // cout << myString << endl;

    //ex2

    char source[] = "Copy this";
    char dest[50];  // 메모리를 충분하게 잡아야 함

    // strcpy_s(sequred) 메모리 침범하는 게 해킹시도 일수가 있음
    // 최대 복사해 넣을 수 있는 사이즈를 명시하는 거임
    //     strcpy_s(dest, 50, source);  //dest 에 source 복사
    //strcpy(dest, source);

    //strcat(); 스트링 뒤에 배열글자를 붙여준다.
    //strcmp(); 두문자열 동일한지 비교
    // strcat(dest, source);
    // strcmp() // 같으면 0 다르면 -1 리턴

    // strcmp(),, c style
    // strcat(),, c style
    // 같은 기능을 하는 함수를 작성하시오
    // cout << strcmp(source, dest) << endl;
    strcpy_s(dest, 10, source);

    cout << source << endl;
    cout << dest << endl;

    return 0;
}