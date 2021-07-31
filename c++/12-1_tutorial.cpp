#include <iostream>

using namespace std;

int main() {
    const int row = 3;
    const int col = 5;
    const int s2da[row][col] = {
        { 1, 2, 3, 4, 5 },
        { 6, 7, 8, 9, 10 },
        { 11, 12, 13, 14, 15 }
    };

    int **matrix = new int *[row];
    cout << sizeof(matrix) << endl;   // 8
    cout << sizeof(*matrix) << endl;  // 8
    for (int r = 0; r < row; r++) {
        matrix[r] = new int[col];
    };
    

    return 0;
}