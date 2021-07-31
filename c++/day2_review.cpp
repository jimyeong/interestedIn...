#include <iostream>
using namespace std;

enum STUDENTS_NAME {
    JACKJACK,
    JIMMY,
    SIMMY,
    TOM,
    JUDAS,
    JAMES,
    NUM_STUDENTS
};

struct Rectangle {
    int length;
    int width;
};

// 파라미터는 포인터다. 포인터 크기는 8byte(64bit 환경일 떄)
int doSomething(int students_scores[]) {
    cout << "size of doSomething : " << sizeof(students_scores) << endl;
    cout << (long long)&(students_scores) << endl;
    cout << (long long)&(students_scores[0]) << endl;
    return 0;
}

int main(void) {
    /* code */
    int students_scores[NUM_STUDENTS] = { 1, 2, 3, 4 };
    cout << "size of Main : " << sizeof(students_scores) << endl;
    cout << (long long)&(students_scores) << endl;

    doSomething(students_scores);

    return 0;
}
