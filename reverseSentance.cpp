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

string reverseString(string str)
{

    stack<string> st;

    for (int i = 0; i < str.length(); i++)
    {
        string word = "";
        while ((str[i] != ' ') && (i < str.length()))
        {
            word += str[i];
            i++;
        }
        st.push(word);
    }
    string ans = "";
    while (!st.empty())
    {
        ans += st.top() + " ";
        st.pop();
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
        string str;
        getline(cin, str);

        cout << reverseString(str);
    }
    return 0;
}