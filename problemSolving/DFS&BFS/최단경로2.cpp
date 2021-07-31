#include <iostream>
#include <queue>
#include <vector>
using namespace std;

vector<pair<int, int>> v[20001];
// spfa 알고리즘

int main() {
    ios_base::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);

    int n, m, start;
    cin >> n >> m >> start;

    for (int i = 0; i < m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        v[a].push_back({ b, c });
    }
    int dist[20001];
    for (int i = 0; i < 20001; i++) {
        dist[i] = 1e8;
    };
    int inQ[20001] = {
        0,
    };
    queue<int> q;
    q.push(start);
    inQ[start] = 1;
    dist[start] = 0;

    while (!q.empty()) {
        int cur_node = q.front();
        q.pop();
        inQ[cur_node] = 0;

        for (int i = 0; i < v[cur_node].size(); i++) {
            int next_node = v[cur_node][i].first;
            int weight = v[cur_node][i].second;
            if (dist[next_node] > dist[cur_node] + weight) {
                dist[next_node] = dist[cur_node] + weight;
                if (!inQ[next_node]) {
                    inQ[next_node] = 1;
                    q.push(next_node);
                }
            };
        };
    }

    for (int i = 1; i < n + 1; i++) {
        cout << dist[i] << "\n";
    }

    return 0;
}