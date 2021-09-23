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

int prec(char c)
{
    if (c == '^')
        return 3;
    else if (c == '*' || c == '/')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}

string infixtoPrefix(string &str)
{
    stack<char> st;
    string res = "";

    for (int i = str.length() - 1; i >= 0; i--)
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9'))
        {
            res = str[i] + res;
        }
        else if (str[i] == ')')
        {
            st.push(str[i]);
        }
        else if (str[i] == '(')
        {

            while (!st.empty() && st.top() != ')')
            {
                res = st.top() + res;
                st.pop();
            }
            if (!st.empty())
                st.pop();
        }
        else
        {
            while (!st.empty() && (prec(st.top()) >= prec(str[i])))
            {
                res = st.top() + res;
                st.pop();
            }
            st.push(str[i]);
        }
    }
    while (!st.empty())
    {
        res = st.top() + res;
        st.pop();
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
    // cin>>t;
    while (t--)
    {
        string str;
        getline(cin, str);
        cout << infixtoPrefix(str);
    }
    return 0;
}
