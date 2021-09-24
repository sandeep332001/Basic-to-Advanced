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

class queues
{
    stack<int> st1, st2;

public:
    void push(int x)
    {
        st1.push(x);
    }
    int pop()
    {
        if (st1.empty() and st2.empty())
        {
            cout << "Underflow  ";
            return -1;
        }
        if (st2.empty())
        {
            while (!st1.empty())
            {
                st2.push(st1.top());
                st1.pop();
            }
        }

        int top = st2.top();
        st2.pop();
        return top;
    }

    bool empty()
    {
        if (st1.empty() and st2.empty())
            return true;
        return false;
    }
};

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
        queues q;
        q.push(12);
        q.push(1);
        q.push(13);
        q.push(11);
        cout << q.pop() << endl;
        cout << q.pop() << endl;
        cout << q.pop() << endl;
        cout << q.pop() << endl;
        cout << q.pop() << endl;
        q.push(10);
        q.push(14);
        q.push(4);
        cout << q.pop() << endl;
        cout << q.pop() << endl;

        q.push(6);
    }
    return 0;
}
