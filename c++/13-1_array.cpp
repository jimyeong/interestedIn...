#include <array>
#include <iostream>
using namespace std;

void printLength(const array<int, 5> &my_arr) {
    //array도 마찬가지로 포인터 복사가 되기 떄문에, 사이즈가 크면 성능이 떨어진다. 그래서 ref 또는 pointer를 쓴다.
    cout << my_arr.size() << endl;
}

int main() {
    // int arr[5] = {1,2,3,4,5};
    array<int, 5> my_arr = { 1, 21, 3, 40, 5 };  // 위의 코드와 똑같다

    my_arr = { 0, 1, 2, 3, 4 };
    my_arr = { 0, 1, 2 };  // 개수가 부족하면 상관없이 덮어쓸 수 있음
    my_arr = { 1, 21, 3, 40, 5 };

    cout << my_arr[0] << '\n';     // index가 개수보다 많으면, OOI 에러나온다, 일단 접근하고 봄
    cout << my_arr.at(0) << '\n';  // 여기서는, 예외 발생한다. 접근 index가 length보다 클때 , 클래스로 구현된 형태기 때문에 좀 느리다.

    cout << my_arr.size() << endl;
    printLength(my_arr);

    cout << endl;
    // sort(my_arr.begin(), my_arr.end()); 역순정열
    sort(my_arr.rbegin(), my_arr.rend());

    for (auto &element : my_arr) {
        cout << element << " ";  // &달면 복사과정 생략됨 -> 더 빨라짐
    }

    return 0;
}