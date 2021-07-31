#include <bits/stdc++.h>

#include <iostream>
using namespace std;

priority_queue<pair<int, int>, vector<int, int>> pq;

int main(void) {
    pq.push(make_pair(-1, 1));
    pq.push(make_pair(-2, 2));
    pq.push(make_pair(-3, 3));
    pq.push(make_pair(-4, 4));
    pq.push(make_pair(-5, 5));
    pq.push(make_pair(-6, 6));

    // pq.pop();
    // pq.pop();
    // cout << "pq top : " << pq.top() << endl;
    // if (!pq.empty()) {
    //     cout << "pq size: " << pq.size() << endl;
    // };

    // while (!pq.empty()) {
    //     cout << pq.top() << endl;
    //     pq.pop();
    // };

    // cout << endl;
    cout << pq.top().first << endl;
    pq.pop();

    cout << pq.top().first << endl;
    pq.pop();

    cout << pq.top() << endl;
    pq.pop();

    return 0;
}