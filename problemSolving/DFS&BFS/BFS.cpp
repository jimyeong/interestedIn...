#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> v[7];
queue<int> q;

int main(int argc, char const *argv[])
{
    v['A' - 'A'].push_back('B' - 'A');
    v['A' - 'A'].push_back('E' - 'A');

    v['B' - 'A'].push_back('C' - 'A');
    v['B' - 'A'].push_back('D' - 'A');

    v['E' - 'A'].push_back('F' - 'A');
    v['E' - 'A'].push_back('G' - 'A');

    q.push(0);

    while (!q.empty())
    {
        int node = q.front();
        cout << (char)(node + 'A') << ' ';
        q.pop();
        for (int i = 0; i < v[node].size(); i++)
        {
            q.push(v[node][i]);
        }
    }

    return 0;
}
