#include <bits/stdc++.h>

#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    int N;
    int map[101][101] = {
        0,
    };
    long long dp[101][101] = {
        0,
    };
    cin >> N;
    for (int i = 1; i < N + 1; i++) {
        for (int j = 1; j < N + 1; j++) {
            cin >> map[i][j];
        }
    }
    dp[1][1] = 1;
    for (int i = 1; i < N + 1; i++) {
        for (int j = 1; j < N + 1; j++) {
            if (i == 1 && j == 1) {
                dp[i][j] = 1;
            }

            for (int k = 1; k < j; k++) {
                if (dp[i][k] > 0) {
                    if (j == map[i][k] + k) {
                        // dp[i][j] ++  왜 여기서 이런 바보 같은 코드를 썼을까
                        dp[i][j] += dp[i][k];
                    }
                }
            }
            for (int k = 1; k < i; k++) {
                if (dp[k][j] > 0) {
                    if (i == map[k][j] + k) {
                        dp[i][j] += dp[k][j];
                    };
                }
            }
        }
    }

    // for (int i = 1; i < N + 1; i++) {
    //     for (int j = 1; j < N + 1; j++) {
    //         cout << "i: " << i << " , j: " << j << " = " << dp[i][j] << "\n";
    //     }
    // }
    cout << dp[N][N];

    // cout << ans;
    return 0;
}
