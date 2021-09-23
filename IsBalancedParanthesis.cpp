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

bool isBalancedParanthesis(string str)
{
    stack<char> st;
    for (int i = 0; i < str.length(); i++)
    {
        cout << str[i];
        if (str[i] == '(' || str[i] == '{' || str[i] == '[')
        {
            st.push(str[i]);
        }
        else
        {
            bool ans = (st.top() != '(' && str[i] == ')') || (st.top() != '{' && str[i] == '}') || (st.top() != '[' && str[i] == ']');
            if (ans)
                return false;
            st.pop();
        }
    }

    return st.empty();
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
        string str;
        cin >> str;
        cout << isBalancedParanthesis(str);
    }
    return 0;
}
