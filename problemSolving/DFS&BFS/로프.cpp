#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    int k, total;

    cin >> k;
    int arr[k];
    for (int i = 0; i < k; i++) {
        cin >> arr[i];
        total += arr[i];
    };
    sort(arr, arr + k);
    // int max[k + 1];
    // memset(max, 0, k + 1);
    int limit = 0;
    int i = k - 1;
    int n = 1;
    while (i >= 0) {
        if (limit < arr[i] * n) {
            limit = arr[i] * n;
        }
        i--;
        n++;
    }
    cout << limit;

    return 0;
}
