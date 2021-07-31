
#include <iostream>
using namespace std;

int main(void) {
    const int numb_rows = 3;
    const int numb_columns = 5;
    for (int row = 0; row < numb_rows; row++) {
        for (int col = 0; col < numb_columns; col++) {
            cout << "[" << row << "]"
                 << "[" << col << "]" << '\t';
            cout << endl;
        }
    }
    cout << endl;

    int array[numb_rows][numb_columns] = {
        { 1, 2 },            // row0 나머지는 0 으로 초기화 된다.
        { 6, 7, 8, 9, 10 },  // row1
        { 11, 12, 13, 14, 15 }
    };  // row major ;
    int array[numb_rows][numb_columns] = { 0 };

    int array[5][4][3];

    // 메모리가 순차적이다.
    for (int row = 0; row < numb_rows; row++) {
        for (int col = 0; col < numb_columns; col++) {
            // cout << (long long)&array[row][col] << '\t';
            cout << array[row][col] << '\t';
        }
        cout << endl;
    }

    return 0;
}