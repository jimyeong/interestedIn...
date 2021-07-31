#include <iostream>
#include <vector>

using namespace std;

vector<int> v[1001];
bool visit[1001] = {
    0,
};

void dfs(int cur_node) {
    cout << cur_node << " ";
    for (int i = 0; i < v[cur_node].size(); i++) {
        int next_node = v[cur_node][i];
        if (visit[next_node] == 0) {
            dfs(next_node);
            visit[next_node] = 1;
        }
    }
}

int main() {
    int n, m, start;
    cin >> n >> m >> start;
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    };

    for (int i = 1; i < n + 1; i++) {
        sort(v[i].begin(), v[i].end());
    };

    dfs(start);
    visit[start] = 1;

    return 0;
}