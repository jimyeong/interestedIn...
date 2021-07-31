#include <iostream>
#include <typeinfo>
using namespace std;

typedef int *pint;
// 나는 컴파일러를 gcc 를 쓰고 있는 데 vscode 컴파일러도 있다.

// parameter 에서는 포인터가 타입오른쪽에 붙는다.
int *doSomething(int *prtr_a) {
    return 0;
}

struct Something {
    int a;
    int b;
    int c;
    int d;
};

int main(int argc, char const *argv[]) {
    // pointer도 , 데이터 타입은 있다/
    // memory adress는 타입과 는 상관없다. 중립적이지만, 기본적으로는, 모든 타입에 대해서는 사이즈가 같지만 8byte 타입을 준다, dereferencing 떄문에.
    // dereferencing 할때 필요하기 떄문에, 타입을 사용한다.
    int x = 5;
    double d = 1.0;

    //int *ptr_x = &x;

    // 별을 붙여주어야 한다.
    int *ptr_x;
    double *ptr_d;

    // 64 byte 에서는 주소가 더 길다,
    // 당연히 더 많은 주소를 표현하기 위해서, 주소가 8 byte 가 된다.
    // cout << sizeof(x) << endl; 4
    // cout << sizeof(d) << endl; 8
    // cout << sizeof(&x) << " " << sizeof(ptr_x) << endl; 8 8
    // cout << sizeof(&d) << " " << sizeof(ptr_d) << endl; 8 8
    int p = 4;
    double q = 4.5;

    int *ptr_p;
    double *ptr_q;

    cout << sizeof(p) << endl;
    cout << sizeof(q) << endl;

    cout << sizeof(&p) << " " << sizeof(ptr_p) << endl;
    cout << sizeof(&q) << " " << sizeof(ptr_q) << endl;

    Something t;
    Something *tt;

    cout << sizeof(t) << endl;
    cout << sizeof(tt) << endl;

    Something ss;
    Something *ptr_s;

    //cout << sizeof(Something) << endl;  // 16byte, int 형 데이터가 4개니까
    //cout << sizeof(ptr_s) << endl;      // pointer는 8byte 임, 주소는 그저 8byte  

    // 초기화가 안되있으면 쓰레기 값이 들어간다.
    // cout << *ptr_x << endl;

    // cout << ptr_x << endl;
    // cout << *ptr_x << endl;

    // cout << ptr_d << endl;
    // cout << *ptr_d << endl;

    // cout << typeid(ptr_x).name() << endl; // PI pointer to Int

    // 배열을 파라미터로 전달하면, 파라미터에서 데이터 복사가 일어나기 떄문에, 데이터가 배열에 100만건이 있으면,
    // 비효율을 야기한다.
    // 그래서 포인터를 쓴다. 배열 시작 주소랑, 길이만 알려주려고

    // 다른언어에서도 포인터 안쓰는 것처럼 보이지만, 내부적으로는 다 포인터를 사용한다.

    return 0;
}
