#include <string.h>

#include <climits>
#include <iostream>
#include <limits>
#include <queue>
#include <vector>

// 내코드랑 비교해보기
using namespace std;
priority_queue<pair<int, int>, vector<pair<int, int> > > q;

int dp[20001] = {
    0,
};

vector<pair<int, int> > v[20001];

void dijkstra(int start) {
    dp[start] = 0;
    q.push({ 0, start });
    while (!q.empty()) {
        int cur_weight = -q.top().first;
        int cur_node = q.top().second;
        q.pop();
        for (int i = 0; i < v[cur_node].size(); i++) {
            int next_node = v[cur_node][i].first;
            int next_weight = v[cur_node][i].second;
            if (dp[next_node] > dp[cur_node] + next_weight) {
                dp[next_node] = dp[cur_node] + next_weight;
                q.push({ -dp[next_node], next_node });
            }
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
        dp[i] = 3000001;  // x + 10억 < 21억
    };

    dijkstra(start);

    for (int i = 1; i < vertex + 1; i++) {
        if (dp[i] >= 3000001) {
            cout << "INF\n";
        } else {
            cout << dp[i] << "\n";
        };
    }

    return 0;
}