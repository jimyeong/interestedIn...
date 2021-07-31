
#include <iostream>
#include <limits>
#include <vector>

using namespace std;

struct Person {
    int age;
    double weight;
};

int main() {
    Person person;
    person.age = 30;
    person.weight = 45;
    Person *ptr = &person;

    Person &ref = person;
    Person &ref2 = *ptr;
    cout << &person << endl;
    cout << &ref << endl;
    cout << &ref2 << endl;

    vector<int> fibbonacci{ 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 };
    int max_number = numeric_limits<int>::lowest();

    for (const auto &n : fibbonacci) {
        max_number = max(n, max_number);
    };
    cout << max_number;

    return 0;
}