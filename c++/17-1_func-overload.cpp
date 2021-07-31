
#include <iostream>

using namespace std;
int add(int x, int y) {
    return x + y;
};

double add(double x, double y) {
    return x + y;
}

// 매개변수가 다르면, 이름이 같아도 다른 함수로 판단을 하고
// 실행시 가장 매칭이 잘되는, 함수로 실행한다.
// 컴파일 할 때 결정이 되어야 한다.
// c++ 에서는 리턴타입이 다른 것만으로는 함수 오버로딩이 안된다.

void getRandom(int &x){};  // 리턴을 안해도 된다, 그냥 참조를 써서 메모리에 직접 접근하면
void getRandom(double &x){};

// int getRandom(int x);
// double getRandom(double x);


typedef int my_int;

void print(int x){};
// 두개는 같은 타입으로 간주되서, overloading 안된다.
// 컴파일러에게 눈속이 안됨
/* void print(my_int x){}; */

void print1(const char *value){};
void print1(int value){};
void print1(float value){};
void print1(unsigned int value); 

int main() {
    int x;
    getRandom(x);

    cout << add(1, 2) << endl;
    cout << add(3.0, 4.0) << endl;
    
    print1(0);
    // ambiguous unsigned int 도 되고 float도 되고
    print1((unsinged int)'a');  // literal 이라서 포인터에 할당이 안됨, 즉 메모리가 없음 -> const를 사용해야 한다.
    // print1({a: "foo"}) 역시 리터럴로 전달하는 거임
    print1(3.14159);            // usigned, float 둘중 어느건지 모르겠다.
    return 0;
}