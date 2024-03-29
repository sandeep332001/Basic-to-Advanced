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

void tower_of_hanoi(int n, char src, char dest, char helper, int &cnt)
{
    if (n == 0)
    {
        return;
    }
    tower_of_hanoi(n - 1, src, helper, dest, cnt);
    cout << "Move from " << src << " to " << dest << endl;
    cnt++;
    tower_of_hanoi(n - 1, helper, dest, src, cnt);
}

int testcase(int t)
{
    while (t--)
    {
        int n;
        int cnt = 0;
        cin >> n;
        tower_of_hanoi(n, 'A', 'C', 'B', cnt);

        // cnt == pow(2,n) -1; this is ans for shortcut

        cout << "Total no. of Moving Block is " << cnt;
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