#include <iostream>
#include <stack>
using namespace std;

int map[50][50] = {
    0,
};
int visited[50][50] = {
    0,
};

stack<pair<int, int>> s;

int nx[] = { 0, 0, 1, -1, 1, -1, -1, 1 };
int ny[] = { 1, -1, 0, 0, 1, 1, -1, -1 };
int answer = 0;

void dfs(int x, int y, int max_x, int max_y) {
    s.push({ x, y });
    visited[y][x] = 1;
    while (!s.empty()) {
        int cur_x = s.top().first;
        int cur_y = s.top().second;
        s.pop();
        for (int i = 0; i < 8; i++) {
            int next_x = nx[i] + cur_x;
            int next_y = ny[i] + cur_y;
            if (next_x < 0 || next_x > max_x - 1) {
                continue;
            };
            if (next_y < 0 || next_y > max_y - 1) {
                continue;
            };
            if (visited[next_y][next_x] == 1) {
                continue;
            }
            if (map[next_y][next_x] == 0) {
                continue;
            }
            s.push({ next_x, next_y });
            visited[next_y][next_x] = 1;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int w, h;
    while (1) {
        cin >> w >> h;
        answer = 0;
        if (!w && !h) {
            break;
        }
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                cin >> map[i][j];
                visited[i][j] = 0;
            }
        }
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                if (map[i][j] == 1 && visited[i][j] == 0) {
                    int y = i;
                    int x = j;
                    answer++;
                    dfs(x, y, w, h);
                }
            }
        }
        cout << answer << "\n";
    }
    return 0;
}