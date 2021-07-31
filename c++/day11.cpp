#include <iostream>

using namespace std;

struct Person {
    int age;
    double weight;
};

int main() {
    Person person;
    person.age = 5;
    person.weight = 30;
    Person &ref = person;
    ref.age = 15;
    ref.weight = 55;

    Person *ptr = &person;
    ptr->age = 30;  // pointer 변수가 구조체나 클래스를 를 가르키고 있을 떄 내부의 변수 접근은,  ->
    ptr->weight = 40;
    // (*ptr).age = 20;  // . 접근연산자를 사용하고 싶으면 이렇게 // 잘 안쓰임, 레퍼런스 쓰거나, -> 씀

    Person &ref2 = *ptr;  // derefencing
    ref2.age = 45;

    /* 주소가 같다. */
    cout << &person << endl;
    cout << &ref2 << endl;

    return 0;
}
