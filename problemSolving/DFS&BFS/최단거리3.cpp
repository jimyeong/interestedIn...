
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

priority_queue<pair<int, int>, vector<pair<int, int>>> pq;
vector<pair<int, int>> v[20001];

int dist[20001]{ 0 };

void dijkstra(int start) {
    // parent
    dist[start] = 0;

    // cost 가 먼저들어가야 함
    pq.push({ 0, start });
    while (!pq.empty()) {
        int c_weight = -pq.top().first;
        int c_node = pq.top().second;
        pq.pop();
        for (int i = 0; i < v[c_node].size(); i++) {
            int next_node = v[c_node][i].first;
            int next_weight = v[c_node][i].second;

            // 새로 방문할 노드가 가중치가 더 작은 경우
            if (next_weight + dist[c_node] < dist[next_node]) {
                dist[next_node] = next_weight + dist[c_node];
                // 앞에 있는 게 먼저 비교가 되기 때문에, cost 는 앞자리에 써야 한다.
                pq.push({ -(dist[next_node]), next_node });
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int vertex, edge, start;
    cin >> vertex >> edge >> start;
    for (int i = 1; i < vertex + 1; i++) {
        dist[i] = 1e9;  // 10억으로 초기화
    };
    for (int i = 0; i < edge; i++) {
        int a, b, weight;
        cin >> a >> b >> weight;
        v[a].push_back({ b, weight });
    };

    dijkstra(start);

    for (int i = 1; i < vertex + 1; i++) {
        if (dist[i] >= 1e9) {
            cout << "INF\n";

        } else {
            cout << dist[i] << "\n";
        }
    }

    return 0;
}