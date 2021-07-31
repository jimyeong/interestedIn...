#include <string.h>

#include <iostream>
#include <limits>
#include <queue>
#include <vector>
#include <climits>

using namespace std;
vector<pair<int, int>> v[20001];
queue<pair<int, int>> q;

int dp[20001]{
    0,
};

void dijkstra(vector<pair<int, int>> (&v)[20001], int start) {
    q.push({ start, 0 });
    while (!q.empty()) {
        int cur_node = q.front().first;
        int cur_weight = q.front().second;
        q.pop();
        dp[cur_node] = min(dp[cur_node], cur_weight);
        for (int i = 0; i < v[cur_node].size(); i++) {
            int next_node = v[cur_node][i].first;
            int next_weight = v[cur_node][i].second;
            q.push({ next_node, next_weight + cur_weight });
        }
    }
};

int main() {
    int vertex, edge;
    int start;
    cin >> vertex >> edge >> start;

    for (int i = 0; i < edge; i++) {
        int a, b, weight;
        cin >> a >> b >> weight;
        v[a].push_back({ b, weight });
    };
    for (int i = 1; i < vertex + 1; i++) {
        dp[i] = INT_MAX;
    };

    dijkstra(v, start);

    for (int i = 1; i < vertex + 1; i++) {
        int answer = dp[i];
        if (answer == INT_MAX) {
            char answer[] = "INF";
            cout << answer << "\n";
        } else {
            cout << answer << "\n";
        };
    };

    return 0;
}