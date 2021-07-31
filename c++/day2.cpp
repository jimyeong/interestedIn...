#include <iostream>
using namespace std;

// 64 bit 에서는 point 변수 8byte
// 32 bit 에서는 point 변수는 4byte

// doSomething 의 파라미터는 배열이 아니라 포인터이다.
// compiler가 실제로 포인터로 처리하는 데, 프로그래밍 편의상 배열처럼 쓴 거임

// 함수 호출부에서 인자로 넘겨준, 변수의 주소가 복사가 되서 파라미터 포인터에 담긴다.
// 첫번째 주소만 복사해서 담긴다.

// void doSomething(int student_scores[20]) // 여기서 20 써줄 필요 없음
void doSomething(int student_scores[]) {
    // 즉 이 스코프 안에서 student_Stores는 사실 포인터 변수이다.
    // main 함수에서 선언한 배열주소가 아님
    cout << (long long)&(student_scores) << endl;

    // 여기서 studnet_stores[0] 은 main 함수에서 선언한 배열주소가 찍힌다.
    cout << (long long)&(student_scores[0]) << endl;
    cout << student_scores[1] << endl;
    cout << student_scores[2] << endl;

    cout << "Size in dosomething : " << sizeof(student_scores) << endl;  // 8
}

int main(void) {
    const int num_student = 20;

    // 배열은 이름 자체가 주소로 사용이 된다. 주소 연산자를 따로 붙일 필요 없다.
    // 배열 주소 자체를 다루는 게, 배열 원소 를 전부 복사해서 다루는 것보다 효율적이라서
    int student_scores[num_student] = { 1, 2, 3, 4, 5 };

    // cast from pointer to smaller type 'int' loses information

    // cout << (long long)&(student_scores[0]) << endl;
    // cout << (long long)&(student_scores[1]) << endl;
    // cout << (long long)&(student_scores[2]) << endl;
    cout << (long long)&(student_scores) << endl;
    cout << (student_scores[1]) << endl;
    cout << (student_scores[2]) << endl;

    // cout << sizeof(student_scores) << endl;

    cout << "Size in main : " << sizeof(student_scores) << endl;  // 80
    doSomething(student_scores);

    return 0;
}