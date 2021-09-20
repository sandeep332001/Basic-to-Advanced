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

int knapsack(vector<int> v, vector<int> w, int n, int sum)
{
    if (sum <= 0 || n == 0)
        return 0;

    if (w[n - 1] <= sum)
    {
        return max(v[n - 1] + knapsack(v, w, n - 1, sum - w[n - 1]),
                   knapsack(v, w, n - 1, sum));
    }
    return knapsack(v, w, n - 1, sum);
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
        int n, sum;
        cin >> n >> sum;
        vector<int> v(n);
        vector<int> w(n);
        f(i, 0, n) cin >> w[i];
        f(i, 0, n) cin >> v[i];
        cout << knapsack(v, w, n, sum);
    }
    return 0;
}
