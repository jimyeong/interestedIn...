#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int connected_comp = 0;
vector<int> v[1001];
stack<int> s;

int visited[1001]{
    0,
};

void dfs(int start_edge) {
    s.push(start_edge);
    while (!s.empty()) {
        int cur_node = s.top();
        s.pop();
        if (visited[cur_node] == 0) {
            visited[cur_node] = 1;
            for (int i = 0; i < v[cur_node].size(); i++) {
                int next_node = v[cur_node][i];
                if (visited[next_node] == 0) {
                    s.push(next_node);
                }
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int vertex, edge;
    cin >> vertex >> edge;
    for (int i = 0; i < edge; i++) {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    };

    // for문으로 dfs 를 시작시키되, 이미 방문된 노드의 경우에는 제외하기로 하였다.
    // 그렇게해서, 포문 내부에서 몇번의 dfs 함수가 실행되었는지를 찾았다.
    for (int i = 1; i < vertex + 1; i++) {
        if (visited[i] == 0) {
            connected_comp++;
            dfs(i);
        }
    }
    cout << connected_comp;
    return 0;
}