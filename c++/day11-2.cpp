#include <algorithm>
#include <iostream>
#include <limits>
#include <vector>

using namespace std;

int main() {
    /* int fibonacci[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 }; */
    vector<int> fibonacci{ 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 };

    // auto 는 들어올 타입을 알아서 확정해준다.
    /* for (auto& number : fibonacci) {
        number = 4;
    } */
    // change array values
    /* for (const auto& number : fibonacci) {
        cout << number << " ";
    }; */

    int max_number = numeric_limits<int>::lowest();

    // array를 foreach 를 쓰면 동적할당할 수 가 없다.

    for (const auto &n : fibonacci) {
        max_number = max(max_number, n);
    }

    cout << max_number << endl;
}