#include <iostream>  // preprocessor

//  복습을 위해서 생각할 문제
// 1 표현식과 명령문의 차이
// 2. 함수와 라이브러리의 차이
// 3. c++ 에서 문장을 끝내는 기호 -> ;
// 4. 문법 오류란 무엇인가 ->
int main(void) {
    // namespace
    // 비슷한 이름, 비슷한 기능 함수들을 묶어서 사용하려고 이름공간 namespace 사용한다.
    // std 표순 라이브러리의 일부

    int x = 2;
    x = 5;
    int y = x + 3;

    // << output operator
    std::cout << 1 + 3 << std::endl;
    return 0;
}