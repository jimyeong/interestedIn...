#include <bits/stdc++.h>

#include <iostream>

using namespace std;

// https://www.acmicpc.net/board/view/64286
int main(int argc, char const *argv[]) {
    int n;
    cin >> n;
    int arr[101][101] = {
        0,
    };
    int dp[101][101] = {
        0,
    };
    dp[1][1] = 1;

    for (int i = 1; i < n + 1; i++) {
        for (int j = 1; j < n + 1; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 1; i < n + 1; i++) {
        for (int j = 1; j < n + 1; j++) {
            for (int k = 1; k < j; k++) {
                if (dp[i][k] == 1 && j == k + arr[i][k]) {
                    dp[i][j] += 1;
                }
            }

            for (int k = 1; k < i; k++) {
                if (dp[k][j] == 1 && i == k + arr[k][j]) {
                    dp[i][j] += 1;
                }
            }
            //cout << "i: " << i << ", j: " << j << " = " << dp[i][j] << '\n';
        }
    }
    cout << dp[n][n];

    return 0;
}
