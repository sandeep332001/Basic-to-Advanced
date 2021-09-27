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

vector<int> stockSpan(vector<int> &v)
{
    int i = 0, n = v.size();
    stack<pair<int, int>> st;
    vector<int> res;
    while (i < n)
    {
        int ans = 1;
        while (!st.empty() and st.top().first < v[i])
        {
            pair<int, int> p = st.top();
            st.pop();
            ans += p.second;
        }
        st.push({v[i], ans});
        res.push_back(ans);
        i++;
    }
    return res;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FAST;
    int t = 1;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        vector<int> v(n);
        for (auto &i : v)
            cin >> i;
        vector<int> res = stockSpan(v);
        for (int i = 0, j = 0; i < n; i++, j++)
            cout << v[i] << " = " << res[j] << endl;
        cout << endl;
    }
    return 0;
}
