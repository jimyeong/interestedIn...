#include <bits/stdc++.h>

#include <iostream>
using namespace std;
vector<pair<int, int> > v[10001];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, d;

    cin >> n >> d;
    for (int i = 1; i < n + 1; i++) {
        int from, distance, end;
        cin >> from >> end >> distance;

        v[from].push_back(make_pair(end, distance));
        v[from].push_back(make_pair(end, end - from));
    }

        return 0;
}