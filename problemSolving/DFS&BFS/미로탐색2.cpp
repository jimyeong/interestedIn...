#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>

using namespace std;
int nx[4] = { 0, 0, -1, 1 };
int ny[4] = { -1, 1, 0, 0 };
// 0 : 왼쪽, 1 : 오른쪽, 2 : 위쪽, 3 : 아래쪽
int main() {
    ios_base::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    char map[101][101];
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> map[i][j];
        }
    }

    queue<pair<int, pair<int, int> > > q;
    int visit[101][101] = {
        0,
    };

    q.push({ 1, { 1, 1 } });
    visit[1][1] = 1;

    while (!q.empty()) {
        int _move = q.front().first;
        int x = q.front().second.first;
        int y = q.front().second.second;
        q.pop();
        if (x == n && y == m) {
            cout << _move;
            break;
        }
        for (int i = 0; i < 4; i++) {
            int next_x = x + nx[i];
            int next_y = y + ny[i];

            if (next_x < 1 || next_x > n) {
                continue;
            }
            if (next_y < 1 || next_y > m) {
                continue;
            }
            if (visit[next_x][next_y] == 1) {
                continue;
            }
            if (map[next_x][next_y] == '0') {
                continue;
            }
            q.push({ _move + 1, { next_x, next_y } });
            visit[next_x][next_y] = 1;
        }
    }
}