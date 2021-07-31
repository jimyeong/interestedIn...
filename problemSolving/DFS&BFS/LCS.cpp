#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string a, b;
    cin >> a >> b;
    int dp[2][1001];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 1001; j++) {
            dp[0][j] = -1;
            dp[1][j] = 0;
        }
    };
    for (int i = 0; a.size(); i++) {
        char target = a[i];
        int start = 1;
        int j;
        for (j = 0; b.size(); j++) {
            if (target == b[j]) {
                dp[0][j] = j;
                if (j != 0) {
                    dp[1][j] = dp[1][j - 1] + 1;
                } else {
                    dp[1][j] = 1;
                }
                j = j;
            } else {
                if (j != 0) {
                    dp[1][j] = dp[1][j - 1];
                    dp[0][j] = dp[0][j - 1];
                } else {
                    dp[1][j] = 0;
                    dp[0][j] = 0;
                }
            }
        }
    }

    cout << dp[1][a.size() - 1] << endl;

    // 문자열 동작 메커니즘을 잘 모르니깐 어렵다.
    // 아니 어쩌면 로직을 아직 젲대로 잘 못짜는듯

    // 로직이 나와야, 틀린걸 확인하고 고칠 시도를 하는데,
    // 문자열 처리가 미숙해서,

    return 0;
}