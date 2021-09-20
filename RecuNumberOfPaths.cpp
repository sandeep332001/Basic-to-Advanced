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

int number_of_path(int row, int col, int n)
{
    int ans = 0;
    if (row == n && col == n)
    {
        ans++;
        return ans;
    }
    if (row > n || col > n)
        return 0;

    ans += number_of_path(row + 1, col, n);
    ans += number_of_path(row, col + 1, n);
    return ans;

    // return number_of_path(row+1,col,n)+ number_of_path(row,col+1,n);
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
        int n;
        cin >> n;
        cout << number_of_path(0, 0, n - 1);
    }
    return 0;
}
