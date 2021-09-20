/* Sandeep Code's Only */
#include <bits/stdc++.h>
using namespace std;

#define f(i, m, n) for (int i = m; i < n; i++)
#define fe(i, m, n) for (int i = m; i <= n; i++)
typedef long long ll;

#define endl "\n"
#define pu push_back
#define pp pop_back

#define FAST                                                   \
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0); \
    srand(time(NULL));
#define MOD 1000000007
#define INF LONG_LONG_MAX
#define MINF LONG_LONG_MIN

bool myCompare(pair<int, int> p1, pair<int, int> p2)
{
    return p1.first < p2.first;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    int t = 1;
    // cin>>t;
    while (t--)
    {
        int arr[] = {10, 12, 1, 13, 24, 3, 5, 90};
        vector<pair<int, int>> v;
        f(i, 0, sizeof(arr) / sizeof(arr[0])) v.push_back(make_pair(arr[i], i));
        sort(v.begin(), v.end(), myCompare);
        f(i, 0, sizeof(arr) / sizeof(arr[0])) cout << v[i].second << " ";
    }
    return 0;
}
