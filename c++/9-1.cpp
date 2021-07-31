#include <iostream>

using namespace std;

int main() {
    /* *
     * 동적할당 배열
     *  */

    /* int length;
    cin >> length;
    int array[length];
    int *array = new int[length]{ 1, 2, 3, 4, 5 };
    array[0] = 1;
    array[1] = 2;

    for (int i = 0; i < length; i++) {
    cout << (uintptr_t)&array[i] << endl;
    cout << array[i] << endl;
    }
    delete[] array;
     */

    int length;
    cin >> length;
    int *array = new int[length]{ 1, 2, 3, 4, 5, 6 };  // error

    int fixedArray[] = { 1, 2, 3, 4, 5 };
    int *array = new int[5]{ 1, 2, 3, 4, 5 };
    for (int i = 0; i < 5; i++) {
        cout << array[i] << endl;
    }
    delete[] array;
    array = nullptr;

    /* resizing 이미 결정된 배열 사이즈를 바꿀 수 있는 가 -> 직접적으로 안된다. 다른 방법을 써야 한다. */

    return 0;
}