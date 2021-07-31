#include <bits/stdc++.h>

#include <iostream>

using namespace std;
#include <vector>
int nx[4] = { 0, 0, 1, -1 };
int ny[4] = { 1, -1, 0, 0 };
int main(int argc, char const *argv[]) {
    int m, n;
    int ans = 0;
    int box[1001][1001] = {
        0,
    };
    int visit[1001][1001] = {
        0,
    };

    cin >> m >> n;
    // vector<pair<int, pair<int, int>>> v[n + 1] = ;
    queue<pair<int, pair<int, int> > > q;

    for (int i = 1; i < n + 1; i++) {
        for (int j = 1; j < m + 1; j++) {
            cin >> box[i][j];
            if (box[i][j] == 1) {
                q.push(make_pair(0, make_pair(i, j)));
                visit[i][j] = 1;
            }
        }
    };

    while (!q.empty()) {
        int day = q.front().first;
        int y = q.front().second.first;
        int x = q.front().second.second;

        q.pop();

        for (int i = 0; i < 4; i++) {
            int next_x = x + nx[i];
            int next_y = y + ny[i];

            if (next_x > m || next_y > n) {
                continue;
            }
            if (next_x <= 0 || next_y <= 0) {
                continue;
            }
            if (box[next_y][next_x] == -1) {
                continue;
            }
            if (visit[next_y][next_x] == 1) {
                continue;
            }
            q.push(make_pair(day + 1, make_pair(next_y, next_x)));
            visit[next_y][next_x] = 1;
            // box[next_x][next_y] = 1;
            ans = day + 1;
        }
    };

    for (int i = 1; i < n + 1; i++) {
        for (int j = 1; j < m + 1; j++) {
            if (visit[i][j] == 0 && box[i][j] == 0) {
                ans = -1;
            }
        }
    }

    cout << ans;

    return 0;
}
