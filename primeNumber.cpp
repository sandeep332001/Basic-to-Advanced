/* Sandeep Code's Only */
#include <bits/stdc++.h>
using namespace std;

#define F first
#define S second
#define MP make_pair
#define f(i, m, n) for (int i = m; i < n; i++)

#define pii pair<int, int>
#define pll pair<ll, ll>

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pi;

#define endl "\n"
#define pu push_back
#define pp pop_back
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()

#define FAST                                                   \
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0); \
    srand(time(NULL));
#define MOD 1000000007
#define INF LONG_LONG_MAX
#define MINF LONG_LONG_MIN

int testcase(int t)
{
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        int n = 10000;
        vector<bool> is_prime(n + 1, 1);
        is_prime[0] = is_prime[1] = 0;
        int i = 2;
        while (i * 2 <= n)
        {
            is_prime[2 * i] = 0;
            i++;
        }
        for (int i = 3; i <= n; i += 2)
            if (is_prime[i])
            {
                int j = 2;
                while (i * j <= n)
                {
                    is_prime[i * j] = 0;
                    j++;
                }
            }
        for (i = l; i < r; i++)
            if (is_prime[i])
                cout << i << " ";
    }

    return 0;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    int t = 1;
    // cin >> t;
    testcase(t);
    return 0;
}