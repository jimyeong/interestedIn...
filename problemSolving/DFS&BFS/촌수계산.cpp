#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int relation[101]{ 0 };

void bfs(vector<int> (&v)[101], int (&visited)[101], int from, int end) {
    queue<pair<int, int>> q;
    q.push({ 0, from });
    while (!q.empty()) {
        int cur_node = q.front().second;
        int cur_relation = q.front().first;
        relation[cur_node] = cur_relation;
        visited[cur_node] = 1;
        q.pop();
        for (int i = 0; i < v[cur_node].size(); i++) {
            int next_node = v[cur_node][i];
            if (visited[next_node] == 0) {
                q.push({ cur_relation + 1, next_node });
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int vertex;
    int a, b;
    int relation_number;
    cin >> vertex >> a >> b >> relation_number;
    int visited[101]{ 0 };
    vector<int> v[101];
    for (int i = 0; i < relation_number; i++) {
        int p, q;
        cin >> p >> q;
        v[p].push_back(q);
        v[q].push_back(p);
    }
    bfs(v, visited, a, b);
    int answer = relation[b] == 0 ? -1 : relation[b];
    cout << answer << "\n";

    return 0;
}
