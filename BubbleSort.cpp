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

void swap(int &a, int &b)
{
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}

void bubble_sort(vi &v)
{
    int length = v.size();
    for (int i = 0; i < length - 1; i++)
    {
        bool swapped = false;
        for (int j = 0; j < length - i - 1; j++)
        {
            if (v[j + 1] < v[j])
            {
                swap(v[j + 1], v[j]);
                swapped = true;
            }
        }
        if (!swapped)
            return;
    }
}

int testcase(int t)
{
    while (t--)
    {
        int n;
        cin >> n;
        vi v(n);
        f(i, 0, n) cin >> v[i];
        bubble_sort(v);
        for (auto x : v)
            cout << x << " ";
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