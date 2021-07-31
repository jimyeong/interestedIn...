#include <bits/stdc++.h>

#include <iostream>

using namespace std;

int nx[4] = { 1, -1, 0, 0 };
int ny[4] = { 0, 0, 1, -1 };
int main(int argc, char const *argv[]) {
    ios_base::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);

    int n, m;
    queue<pair<int, pair<int, int> > > q;
    cin >> n >> m;
    // char 배열 초기화
    // char 가 int 로 출력이 가능하고, int 를 char로 출력이 가능하다. 아스키코드 덕분에
    char map[101][101];
    int visit[101][101] = {
        0,
    };

    for (int i = 1; i < n + 1; i++) {
        for (int j = 1; j < m + 1; j++) {
            cin >> map[i][j];
        };
    };

    // cout << "map[1][1]: " << map[1][1];

    q.push(make_pair(1, make_pair(1, 1)));
    visit[1][1] = 1;

    while (!q.empty()) {
        int move = q.front().first;
        int x = q.front().second.first;
        int y = q.front().second.second;

        q.pop();

        if (x == n && y == m) {
            cout << move << "\n";
            break;
        }

        for (int i = 0; i < 4; i++) {
            int next_x = x + nx[i];
            int next_y = y + ny[i];

            if (next_x > n || next_x < 1) {
                continue;
            }
            if (next_y > m || next_y < 1) {
                continue;
            };
            if (map[next_x][next_y] == '0') {
                continue;
            };
            if (visit[next_x][next_y] == 1) {
                continue;
            }
            visit[next_x][next_y] = 1;
            q.push(make_pair(move + 1, make_pair(next_x, next_y)));
        };
    }
    return 0;
}
