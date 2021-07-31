#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 정적array
    // 동적array

    // array<int,5> arr;
    int *my_arr = new int[5];

    vector<int> arr = { 1, 2, 3, 4, 5 };  // vector는 블록밖으로 나가면 사라진다. 즉 메모리 leak되지 않는다. 자기의 길이를 알고있다.
    cout << arr.size() << endl;

    arr = { 1, 2, 3 };
    cout << arr.size() << endl;

    vector<int> arr3{ 1, 2, 3, 4, 5, 6, 7 };
    
    arr3.resize(2);  // 사이즈를 맘대로 바꿀 수가 있다. //  늘일수도 줄일수도 있음 아주편함

    cout << arr3.size() << endl;

    for (auto &itr : arr3) {
        cout << itr << " ";
    };
    cout << endl;
    cout << arr3.at(2) << endl;
    cout << arr.size() << endl;

    delete[] my_arr;

    return 0;
}