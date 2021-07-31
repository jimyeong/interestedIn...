#include <bits/stdc++.h>

#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    int n;
    long long dp[101] = {
        0,
    };
    cin >> n;

    dp[1] = 1;
    dp[2] = 1;
    dp[3] = 1;
    dp[4] = 2;
    dp[5] = 2;

    while (n-- > 0) {
        int k;
        cin >> k;

        if (k >= 5) {
            for (int i = 5; i < k + 1; i++) {
                dp[i] = dp[i - 5] + dp[i - 1];
            }
            cout << dp[k] << '\n';

        } else {
            cout << dp[k] << '\n';
        }
    }

    return 0;
}
