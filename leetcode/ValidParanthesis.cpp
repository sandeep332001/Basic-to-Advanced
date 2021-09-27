#include <bits/stdc++.h>
using namespace std;

#define FAST                                                   \
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0); \
    srand(time(NULL));
bool isValid(string s)
{
    stack<char> st;
    int i = 0, n = s.size();
    while (i < n)
    {
        char top = st.empty() ? '#' : st.top();
        if (top == '(' && s[i] == ')')
        {
            st.pop();
        }
        else if (top == '{' && s[i] == '}')
        {
            st.pop();
        }
        else if (top == '[' && s[i] == ']')
        {
            st.pop();
        }
        else
        {
            st.push(s[i]);
        }
        i++;
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
    cout << isValid("{[]}");
}