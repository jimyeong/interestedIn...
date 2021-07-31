#include <iostream>
using namespace std;

struct Rectangle {
    int length;
    int width;
};
enum StudentName {
    JACKJACK,     // 0
    DASH,         //1
    VIOLET,       //2
    NUM_STUDENT,  //3
};

struct Triangle {
    int startVertex;
    int endVertext;
};

enum DevNames {
    JIMMY,
    SIMMY,
    SIMON,
    NUM_DEVS
};

main() {
    int one_student_score;  // 1 variable;
    int student_scores[5];  // 5int
    //cout << sizeof(one_student_score) << endl;

    // 일렬로 붙어있는 (연속된) 메모리를 가져온다.
    //cout << sizeof(student_scores) << endl;

    one_student_score = 100;
    student_scores[0] = 100;  // 1st element
    student_scores[1] = 80;   // 2nd element
    student_scores[2] = 90;   // 3rd element
    student_scores[3] = 50;
    student_scores[4] = 0;
    // cout << (student_scores[0] + student_scores[1]) / 2.0 << endl;

    // cout << sizeof(Rectangle) << endl; // 8

    Rectangle rect_arr[10];
    Triangle triangle_arr[5];  // 40

    // cout << sizeof(rect_arr) << endl; // 80

    // cout << sizeof(rect_arr) << endl;

    rect_arr[0].length = 1;
    rect_arr[0].width = 2;

    // int my_array[]{ 1, 2, 3, 4, 5 }; uniform intialize
    //int my_array[] = { 1, 2, 3, 4, 5 }; 컴파일러가 추론해서 개수를 채워준다.
    // int my_array[5] = { 1, 2, 3, 4, 5 };
    int my_arr[] = { 1, 2, 3, 4, 5 };
    int k[4] = { 1, 2, 3, 4 };
    cout << my_array[0] << endl;
    cout << my_array[1] << endl;
    cout << my_array[2] << endl;
    cout << my_array[3] << endl;
    cout << my_array[4] << endl;

    cout << my_array[JACKJACK] << endl;

    // enum 마지막에 num_Studnt 쓰고 넣으면 좋다
    int student_scores[NUM_STUDENT];

    return 0;
}