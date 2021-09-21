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

#define n 10

class stacks
{
    int *arr;
    int top;

public:
    stacks()
    {
        arr = new int[n];
        top = -1;
    }

    void stack_push(int x)
    {
        if (top == n - 1)
        {
            cout << "Stack overflow\n";
            return;
        }
        top++;
        arr[top] = x;
    }

    int stack_pop()
    {
        if (top == -1)
        {
            cout << "Stack underflow\n";
            return NULL;
        }
        top--;
        return arr[top + 1];
    }

    int stack_top()
    {
        if (top == -1)
        {
            cout << "Stack is empty ";
            return -1;
        }
        return arr[top];
    }
    bool stack_empty() { return top == -1; }
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
        stacks st;
        st.stack_empty();
        st.stack_push(10);
        cout << st.stack_top();
        cout << st.stack_pop();
        cout << st.stack_top();
    }
    return 0;
}
