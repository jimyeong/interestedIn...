#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    int m;
    cin >> m;
    int gasFee[100000] = {
        0,
    };
    int distances[100000] = {
        0,
    };
    int totalDistance = 0;
    int totalFee = 0;

    for (int i = 0; i < m - 1; i++) {
        cin >> distances[i];
        totalDistance += distances[i];
    };

    for (int i = 0; i < m; i++) {
        cin >> gasFee[i];
    };
    int move = 0;
    int x = 0;
    while (move < totalDistance && x <= m - 1) {
        if (gasFee[x] <= gasFee[x + 1]) {
            totalFee += gasFee[x] * distances[x];
            move += distances[x];
            x++;
        } else {
            int k = x;
            int distance_sum = 0;

            while (gasFee[k] <= gasFee[x]) {
                distance_sum += distances[k];
                k++;
            }
            totalFee += gasFee[x] * (distance_sum);
            move += distance_sum;
            x = k;
        }
        cout << "move1: " << move << " \n";
    }

    return 0;
}
