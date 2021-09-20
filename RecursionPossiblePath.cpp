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

int posible_path(int start, int end)
{
    int ans = 0;
    if (start == end)
    {
        return 1;
    }
    if (start > end)
        return 0;
    for (int i = 1; i <= 6; i++)
    {
        if (start + i <= end)
        {
            ans += posible_path(start + i, end);
        }
    }
    return ans;
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
        int start, end;
        cin >> start >> end;
        cout << posible_path(start, end);
    }
    return 0;
}
