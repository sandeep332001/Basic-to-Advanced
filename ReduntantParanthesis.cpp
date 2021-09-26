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

int op(char s)
{
    if (s == '+' or s == '-' or s == '*' or s == '/')
        return 1;
    return 0;
}

int redundantParenthesis(string s)
{
    stack<int> st;
    int i = 0, n = s.size();
    int ans = 0;
    while (i < n)
    {
        if (s[i] == '(')
            st.push('(');
        else if (op(s[i]))
            st.push(s[i]);
        else if (s[i] == ')')
        {
            if (st.empty())
                ans++;
            else
            {
                if (st.top() == '(')
                    ans++;
                while (st.top() != '(')
                    st.pop();
                st.pop();
            }
        }
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
        string s;
        cin >> s;
        cout << redundantParenthesis(s);
    }
    return 0;
}
