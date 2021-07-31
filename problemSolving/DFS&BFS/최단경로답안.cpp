#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;

vector<pii> v[20001];

int main() {
    ios_base::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    int start;
    cin >> start;
    for (int i = 0; i < m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        v[a].push_back({ b, c });
    }
    int dist[20001];
    for (int i = 1; i <= n; i++) {
        dist[i] = 1e8;
    }
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
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        cout << dist[i] << "\n";
    }
}