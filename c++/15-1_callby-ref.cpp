#include <cmath>
#include <iostream>

using namespace std;
typedef int *pint;

void printElement(vector<int>(&arr)){
    // array를 보내야할 떄는, 동적 array 를 쓰는 게 낫다.

};
void addOne(int &y) {
    // call by ref  참조에 의한 호출
    y = y + 1;
};
void getSinCos(const double &degrees, const double &sin_out, double &cos_out) {
    static const double pi = 3.141592;
    const double radians = degrees * pi / 180.0;
    sin_out = sin(radians);
    cos_out = cos(radians);
};
void foo(const int &x) {  // 요렇게 하면 좋다. 편하다.
    cout << x << endl;
}
void ptrRef(pint &ptr) {  // (int *)&ptr // int *&ptr
    cout << ptr << " " << endl;
};
int main() {
    int x = 5;
    cout << x << " " << &x << endl;
    addOne(x);
    cout << x << " " << &x << endl;
    double sin(0.0);
    double cos(0.0);
    getSinCos(30.0, sin, cos);  // return 값을 여러개 내보내야 하는 함수의 경우, 이렇게 call by ref로, 우회적으로 구현할 수 도있다.
    foo(6);
    int arr[]{ 1, 2, 3, 4 };

    int *ptr = &x;
    cout << ptr << " " << endl;
    ptrRef(ptr);

    vector<int> arr{ 1, 2, 3, 4 };
    printElement(arr);

    // 참조에의한 호출, 값에의한 호출은 장단점이 분명하다.

    return 0;
}