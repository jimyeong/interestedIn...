#include <iostream>
using namespace std;
#include <array>
#include <vector>

int main() {
    // array 정적의 std 라이브러리
    array<int, 12> arr{ 1, 42, 2, 3, 18, 22, 4, 5, 14, 6, 9 };
    cout << arr.at(5) << endl;
    sort(arr.begin(), arr.end());
    cout << arr.size() << "\n";
    for (auto &num : arr) {
        cout << num << " ";
    };
    cout << "\n";

    // vector 동적 array 의 라이브러리
    vector<int> v{ 1, 2, 34, 5, 6, 7 };
    v.resize(22);
    v = { 2, 3, 4 };

    cout << v.at(2) << "\n";
    sort(v.begin(), v.end());

    for (int &n : v) {
        cout << n << " ";
    };
    cout << "\n";

    return 0;
}