#include <bits/stdc++.h>

#include <iostream>

using namespace std;

int arr[501][2];
long long dp[501] = {
    0,
};
// 8

int main(int argc, char const *argv[]) {
    int n;
    cin >> n;

    for (int i = 1; i < n + 1; i++) {
        cin >> arr[i][0] >> arr[i][1];
    }

    for (int i = 1; i < n; i++) {
        for (int j = i + 1; j < n + 1; j++) {
            if (arr[i][0] < arr[j][0] && arr[i][1] > arr[j][1]) {
                // cout << "i: " << i << " j: " << j << ",  " << arr[i][1] << " : " << arr[j][1] << " \n";
                dp[i] += 1;
            }
        }
    }

    int flag = 0;
    int k = 0;
    for (int i = 1; i < n + 1; i++) {
        cout << dp[i];
        if (flag == 1) {
            continue;
        }
        if (dp[i] == 0) {
            k = i - 1;
            flag = 1;
        }
    }
    cout << k;

    return 0;
}
