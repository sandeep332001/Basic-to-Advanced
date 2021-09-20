#include <bits/stdc++.h>
using namespace std;

vector<int> ans(vector<vector<int>> &v)
{
    vector<int> res;
    for (int i = 0; i < v.size() - 1; i++)
    {
        int x1 = v[i][0], x2 = v[i + 1][0], y1 = v[i][1], y2 = v[i + 1][1];

        int dis = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
        res.push_back(dis);
    }
    vector<int>::iterator ip;
    ip = unique(res.begin(), res.end());
    res.resize(distance(res.begin(), ip));
    return res;
}

int main()
{
    int t;
    cin >> t;
    vector<vector<int>> v(t, vector<int>(2, 0));

    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < 2; j++)
            cin >> v[i][j];
    }
    vector<int> vi;
    vi = ans(v);
    for (auto x : vi)
        cout << x << " ";

    return 0;
}