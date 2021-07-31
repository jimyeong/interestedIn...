#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int nx[8]{ 1, -1, -2, -2, -1, 1, 2, 2 };
int ny[8]{ -2, -2, -1, 1, 2, 2, 1, -1 };

stack<pair<int, pair<int, int>>> s;
int visited[300][300] = {
    0,
};

void dfs(int start_y, int start_x, int end_y, int end_x, int map_size, int &count) {
    s.push({ count, { start_y, start_x } });
    visited[start_y][start_x] = 1;
    while (!s.empty()) {
        int cur_y = s.top().second.first;
        int cur_x = s.top().second.first;
        count = s.top().first;

        s.pop();
        for (int i = 0; i < 8; i++) {
            int next_y = cur_y + ny[i];
            int next_x = cur_x + nx[i];
            int next_count = count + 1;
            cout << next_y << " " << next_x << " "
                 << "count : " << count << "\n";
            if (next_y == end_y && next_x == end_x) {
                count = next_count;
                visited[next_y][next_x] = 1;
            };
            if (next_y < 0 || next_y > map_size - 1) {
                continue;
            };
            if (next_x < 0 || next_x > map_size - 1) {
                continue;
            };
            if (visited[next_y][next_x] == 1) {
                continue;
            };
            if (visited[next_y][next_x] == 0) {
                visited[next_y][next_x] = 1;
                s.push({ next_count, { next_y, next_x } });
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int numb;
    cin >> numb;
    for (int i = 0; i < numb; i++) {
        int map_size, start_y, start_x, end_y, end_x;
        cin >> map_size >> start_y >> start_x >> end_y >> end_x;
        int count = 0;
        dfs(start_y, start_x, end_y, end_x, map_size, count);
        cout << count << "\n";
    }
    return 0;
}