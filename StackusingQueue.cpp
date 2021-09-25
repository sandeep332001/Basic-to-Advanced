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

class stacks
{
    queue<int> q1, q2;
    int N;

public:
    stacks()
    {
        N = 0;
    }
    void push(int data)
    {
        //q2 will be empty and q1 will full like stack
        N++;
        q2.push(data);
        while (!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        while (!q2.empty())
        {
            q1.push(q2.front());
            q2.pop();
        }
    }

    int pop()
    {
        if (q1.empty())
        {
            cout << "Underflow";
            return -1;
        }
        N--;
        int front = q1.front();
        q1.pop();
        return front;
    }

    bool empty()
    {
        if (q1.empty())
            return true;
        return false;
    }
    int top(){
        return q1.front();
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
        stacks st;
        st.push(13);
        st.push(12);
        st.push(11);
        st.push(1);
        cout << st.pop() << endl;
        st.push(2);
        st.push(32);
        cout << st.pop() << endl;
        st.push(42);
        st.push(52);
        cout << st.pop() << endl;
        cout << st.pop() << endl;
        cout << st.pop() << endl;
        cout << st.pop() << endl;
        cout << st.pop() << endl;
        cout << st.pop() << endl;
        cout << st.pop() << endl;
    }
    return 0;
}
