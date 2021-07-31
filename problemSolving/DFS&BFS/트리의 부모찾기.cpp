#include <iostream>

using namespace std;
#include <vector>

vector<int> v[100001];
int visit[100001]{ 0 };
int parent[100001]{
    0,
};

void dfs(int parent_node, int start_node) {
    // cout << start_node << " ";
    // leaf 노드가 없는 경우는, 포문 블럭 안에 있는 코드가 실행이 안되고 있었다.
    visit[start_node] = 1;  // 포문 내부가 아니라, 여기서 해줘야, 순서가 맞는다, 코드 블록 안에 들어와야 방문한 것
    parent[start_node] = parent_node;
    for (int i = 0; i < v[start_node].size(); i++) {
        int next_node = v[start_node][i];
        if (visit[next_node] == 0) {
            // 재귀함수는, dfs 처럼 작동하기 떄문에, visit[next_node] = 1 이것을 이 뒤에 쓰는지, 앞에쓰는지 에 따라 결과가 상당히 다르다.
            dfs(start_node, next_node);
        }
    }
}
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n - 1; i++) {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    dfs(0, 1);
    for (int i = 2; i < n + 1; i++) {
        cout << parent[i] << endl;
    }
    return 0;
}