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

bool is_sorted(vector<int> &arr, int index)
{

    if (index >= (arr.size() - 1))
        return true;
    if (arr[index] <= arr[index + 1])
        return is_sorted(arr, index + 1);
    return false;
}

int testcase(int t)
{
    while (t--)
    {
        int n;
        cin >> n;
        vi arr(n);
        // iota(all(arr), 1);
        f(i, 0, n) cin >> arr[i];
        cout << is_sorted(arr, 0);
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
    // cin>>t;
    testcase(t);
    return 0;
}