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

int totalTrap(vector<int> &v)
{
    int n = v.size(), ans = 0, i = 0;
    stack<int> st;
    while (i < n)
    {
        while (!st.empty() and (v[st.top()] < v[i]))
        {
            int cur = st.top();
            st.pop();
            if (st.empty())
                break;
            int diff = i - st.top() - 1;
            ans += ((min(v[i], v[st.top()]) - v[cur]) * diff);
        }
        st.push(i);
        i++;
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
        int n;
        cin >> n;
        vector<int> v(n);
        for (auto &i : v)
            cin >> i;
        cout << totalTrap(v);
    }
    return 0;
}
