

#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int> > v[100001];  // first 연결된 노드 정보, second 연결 길이

int parent[100001] = {
    0,
};
int aw = 0;
int dfs(int cur_node, int node_parent) {  // cur_node 부터 리프노드까지 가장 긴 길이를 반환

    int result = 0;
    vector<int> child;
    for (int i = 0; i < v[cur_node].size(); i++) {
        int next_node = v[cur_node][i].first;     // 정점
        int next_length = v[cur_node][i].second;  // 가중치

        if (next_node == node_parent) {
            // 진행을 하지않음
        } else {
            int next_dist = dfs(next_node, cur_node) + next_length;  // 현재길이 + 다음길이를 더해준다.
            child.push_back(next_dist);                              // child에 다음 간선길이를 더해준다.
        }
    }
    sort(child.rbegin(), child.rend());  // 정렬

    // 단말노드일 떄
    if (child.size() == 0) {
        result = 0;
    } else if (child.size() == 1) {
        // 자식노트를 하나 가질 떄
        result = child[0];
    } else {
        // 자식노드를 2개 가질 떄

        aw = max(aw, child[0] + child[1]);  // aw는 현재까지의 최종 지름
        result = child[0];
    }

    cout << cur_node << " 번 노드\n";
    cout << "가장 긴 한쪽 길이 : " << result << "\n";
    if (child.size() >= 2) {
        cout << cur_node << " 번 노드가 지름에 포함되는 경우 길이 : " << (child[0] + child[1]) << "\n";
    }
    return result;  // 0
}

int main(int argc, char const *argv[]) {
    int n;
    cin >> n;
    return 0;
}
