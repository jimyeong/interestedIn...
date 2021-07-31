#include <iostream>
using namespace std;

// parameter 가 array 로 보이지만, 내부적으로는 포인터이다.

struct MyStruct {
    int array[5] = { 9, 7, 5, 3, 1 };
};

void doSomething(MyStruct *ms) {
    // array도 포인터라면, 8이 나왔을 텐데, 실제 배열이 복사되서 갔음, 클래스나, struct 내부에선 이렇게 된다.
    cout << sizeof((*ms).array) << endl;  // 20
}

void printArray(int *array /* = int array[]*/) {
    cout << sizeof(array) << endl;
    cout << *array << endl;

    *array = 100;
}

using namespace std;
int main() {
    int array[5] = { 9, 7, 5, 3, 1 };
    cout << array[0] << " " << array[1] << endl;

    // array 변수는 사실 포인터임.
    cout << array << endl;
    cout << &(array[0]) << endl;  // 위와 같은 주소가 나온다.

    cout << *array << endl;  // array[0] 이 나옴

    // char name[] = "jackjack";
    // cout << *name << endl;  // j 가 나온다.

    int *ptr = array;
    cout << ptr << endl;   // array 주소가 나온다.
    cout << *ptr << endl;  // 9가 나온다.
    cout << endl;

    cout << sizeof(ptr) << endl;    // 8
    cout << sizeof(array) << endl;  // 20
    printArray(array);              //
    cout << endl;

    cout << array[0] << " " << *array << endl;  //  printArray에서 포인터 dereference 를 바뀌니까 여기서도 값이 바뀌었다.,값이 바뀐다.

    cout << *ptr << " " << *(ptr + 1) << endl;  // potiner arithmetic 포인터 연산이라고 부른다. 메모리 주소에 값을 넣고 빼고 해서 deref 하는 거

    MyStruct ms;
    cout << ms.array[0] << endl;
    cout << sizeof(ms.array) << endl;  // 20
    doSomething(&ms);

    return 0;
}