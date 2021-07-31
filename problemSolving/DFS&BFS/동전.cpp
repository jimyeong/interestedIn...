#include <math.h>
#include <memory.h>

#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
typedef long long ll;
int n, m;
int arr[101];
int dp[10001];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    cin >> n >> m;
    dp[0] = 0;
    for (int i = 1; i <= m; i++) {
        dp[i] = 1e9;
    }
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] <= m)
            dp[arr[i]] = 1;
    }
    for (int i = 0; i < n; i++) {
        for (int j = arr[i]; j <= m; j++) {
            dp[j] = min(dp[j], dp[j - arr[i]] + 1);
        }
    }
    cout << (dp[m] < 1e9 ? dp[m] : -1);
};