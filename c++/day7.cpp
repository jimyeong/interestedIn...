#include <iostream>
using namespace std;

void solution(char *words) {
    cout << "solution is running " << endl;
    int i = 0;
    while (true) {
        if (*(words + i) == '\0') {
            break;
        }
        cout << *(words + i);
        i++;
    }
    cout << endl;
}

int main() {
    int value = 7;
    int *ptr = &value;

    double value1 = 8.0;
    double *ptr_d = &value1;

    cout << uintptr_t(ptr - 1) << endl;
    cout << uintptr_t(ptr) << endl;
    cout << uintptr_t(ptr + 1) << endl;
    cout << uintptr_t(ptr + 2) << endl;

    cout << endl;

    cout << uintptr_t(ptr_d - 1) << endl;
    cout << uintptr_t(ptr_d) << endl;
    cout << uintptr_t(ptr_d + 1) << endl;
    cout << uintptr_t(ptr_d + 2) << endl;

    int array[] = { 9, 7, 5, 3, 1 };

    cout << array[0] << " " << (uintptr_t)&array[0] << endl;
    cout << array[1] << " " << (uintptr_t)&array[1] << endl;
    cout << array[2] << " " << (uintptr_t)&array[2] << endl;
    cout << array[3] << " " << (uintptr_t)&array[3] << endl;

    cout << endl;

    ptr = array;

    for (int i = 0; i < 5; i++) {
        // cout << array[i] << " " << (uintptr_t)&array[i] << endl;
        cout << *(ptr + i) << " " << (uintptr_t)(ptr + i) << endl;
    }

    cout << endl;

    char name[] = "Jack Jack";
    const int n_name = sizeof(name) / sizeof(char);
    char *ptr_cc = name;

    for (int i = 0; i < n_name; i++) {
        // cout << *(ptr_cc + i);
    }

    cout << endl;

    //while 문과 break 를 사용해서
    // 문자열을 출력하되, null문자를 출력하지 않는 함수를 만드시오
    // pointer를 사용하여라.
    solution(name);

    return 0;
}