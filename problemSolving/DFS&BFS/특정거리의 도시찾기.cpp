
#include <iostream>

using namespace std;

#define INF 3000001

vector<int> v[300001];
priority_queue<pair<int, int>, vector<pair<int, int>>> q;
int cost[300001];
int n, m, k, x;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m >> k >> x;

    // 비용초기화
    for (int i = 1; i < 300001; i++) {
        cost[i] = INF;
    };
    // 출발도시 초기화
    cost[x] = 0;

    for (int i = 0; i < m; i++) {
        // cin >> arr[i][0] >> arr[i][1];
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
    };
    q.push(make_pair(0, x));

    while (!q.empty()) {
        int vertex = q.top().second;
        q.pop();
        for (int i = 0; i < v[vertex].size(); i++) {
            int next = v[vertex][i];

            if (cost[vertex] + 1 < cost[next]) {
                cost[next] = cost[vertex] + 1;
                q.push(make_pair(-cost[next], next));
            }
        }
    }
    int flag = 0;
    for (int i = 1; i < n + 1; i++) {
        if (cost[i] == k) {
            flag = 1;
            cout << i << '\n';
        }
    }
    if (!flag) {
        cout << -1;
    }
    /* code */
    return 0;
}