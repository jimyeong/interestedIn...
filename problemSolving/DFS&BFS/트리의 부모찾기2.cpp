#include <iostream>

using namespace std;
#include <stack>
#include <vector>

vector<int> v[100001];
int visit[100001];
stack<pair<int, int>> s;
int answer[100001]{
    0,
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n - 1; i++) {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    };
    s.push({ 0, 1 });
    while (!s.empty()) {
        int cur_node = s.top().second; // 현재 방문중인 정점
        int parent_node = s.top().first; // 직전에 방문했던 정점(부모노드)
        s.pop();
        if (visit[cur_node] == 0) {
            answer[cur_node] = parent_node;
            visit[cur_node] = 1;
            for (int i = 0; i < v[cur_node].size(); i++) {
                int next_node = v[cur_node][i];
                if (visit[next_node] == 0) {
                    s.push({ cur_node, next_node });
                }
            }
        }
    }

    for (int i = 2; i < n + 1; i++) {
        cout << answer[i] << '\n';
    }
    return 0;
}