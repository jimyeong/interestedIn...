#include <iostream>
#include <string>


using namespace std;

// 선언과 정의의 분리 definition declartion
void print1(int x = 10, int y = 20, int z = 30);  // declation // in header

// deault parameter, optional parameter // 선언에 기본 파라미터가 있다면, 정의엥서는 디폴트 파라미터 사용하면 안된다.
// 정의에 쓰고 선언에 안써도 되지만, 보통 프로그래머들이 함수 명세를 확인하려고 header 를 확인하기 떄문에, 주로 header 파일에 있는 선언에, 사용한다.
void print1(int x, int y, int z) {
    cout << x << " " << y << " " << z << endl;
};

void print(int x){};

void print(int x, int y = 20){};  // 이렇게 되면 ambiguis call 이 된다. 파라미터를 한개만 썼을 때 위케이스인지 아래 케이스인지 헤깔림 // 이때는 디폴트 파라미터를 없애야 한다.

int main() {
    print1(10);
    print1();
    print1(100, 200);
    print1(100, 300);

    // print();

    return 0;
}