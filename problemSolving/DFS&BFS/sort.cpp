
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vtx[1001];
    int n, m, start;
    int visit[1001] = {
        0,
    };

    cin >> n >> m >> start;

    for (int i = 1; i < m + 1; i++) {
        int a, b;
        cin >> a >> b;
        vtx[a].push_back(b);
        vtx[b].push_back(a);
    };

    sort(vtx[1].begin(), vtx[1].end(), greater<>());
    for (int i = 0; i < vtx[1].size(); i++) {
        cout << vtx[1][i] << ' ';
    }

    return 0;
}