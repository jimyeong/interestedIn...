#include <iostream>
using namespace std;

int main(void) {
    const int num_students = 5;

    int scores[num_students] = { 84, 92, 76, 81, 56 };
    const int arr_size = sizeof(scores) / sizeof(int);  // parameter 로 넘어간 array 의 경우에는 그냥 포인터이기 떄문에, 이런식으로 구할 수 없다.

    int max_score = -9999;
    int min_score = 99999;
    int total_score = 0;

    for (int i = 0; i < num_students; i++) {
        total_score += scores[i];
        max_score = (scores[i] > max_score) ? scores[i] : max_score;
        min_score = (scores[i] < min_score) ? scores[i] : min_score;
    }
    double svg_score = static_cast<double>(total_score) / num_students; // 평균구하기
    cout << max_score << endl;
    cout << min_score << endl;

    return 0;
}