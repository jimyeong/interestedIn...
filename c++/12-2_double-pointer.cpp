#include <iostream>

using namespace std;
// 이중포인터는 종종 써봤다고 하심 -> 2차원 행렬 구현할 떄
// 삼중부터는 가끔씩 나온다고 함
int main() {
    /* 
    int *ptr = nullptr;
    int **ptrptr = nullptr;

    int value = 5;
    ptr = &value;
    ptrptr = &ptr;
    cout << ptr << " " << *ptr << " " << &ptr << endl;
    cout << ptrptr << " " << *ptrptr << " " << &ptrptr << endl;
    cout << **ptrptr << endl;
     */

    const int row = 3;
    const int col = 5;
    const int s2da[row][col] = {
        { 1, 2, 3, 4, 5 },
        { 6, 7, 8, 9, 10 },
        { 11, 12, 13, 14, 15 }
    };
    int *matrix = new int[row * col];
    // delete[] matrix;

    // 1차원 array를 2차원 array 처럼 사용하는 방법, 생각해보자
    for (int r = 0; r < row; r++) {
        for (int c = 0; c < col; c++) {
            matrix[c + col * r] = s2da[r][c];  // 따져볼것
        }
    }

    /* 
    int **matrix = new int* [row];
    for (int r = 0; r < row; r++) {
        matrix[r] = new int[col];
    }

    int *r1 = new int[col]{ 1, 2, 3, 4, 5 };
    int *r2 = new int[col]{ 6, 7, 8, 9, 10 };
    int *r3 = new int[col]{ 11, 12, 13, 14, 15 };

    for (int r = 0; r < row; r++) {
        for (int c = 0; c < col; c++) {
            matrix[r][c] = s2da[r][c];
        }
    }


    // delete
    for (int r = 0; r < row; r++) {
        delete[] matrix[r];
    }
    delete[] matrix;
 */
    /* 
    delete[] r1;
    delete[] r2;
    delete[] r3;
    delete[] matrix;
     */

    for (int r = 0; r < row; r++) {
        for (int c = 0; c < col; c++) {
            cout << matrix[c + col * r] << " ";
        }
        cout << endl;
    }
    delete[] matrix;

    return 0;
}