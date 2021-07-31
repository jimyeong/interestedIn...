#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> v[6];
    stack<int> s;

    v['A' - 'A'].push_back('E' - 'A');
    v['A' - 'A'].push_back('B' - 'A');

    v['B' - 'A'].push_back('D' - 'A');
    v['B' - 'A'].push_back('C' - 'A');

    v['E' - 'A'].push_back('G' - 'A');
    v['E' - 'A'].push_back('F' - 'A');

    s.push(0);
    while (!s.empty())
    {
        int node = s.top();
        cout << (char)(node + 'A') << "\n";
        s.pop();

        for (int i = 0; i < v[node].size(); i++)
        {
            s.push(v[node][i]);
        }
    }

    return 0;
}
