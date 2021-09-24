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

class queues
{
    int *arr;
    int front;
    int back;

public:
    queues()
    {
        arr = new int[n];
        front = back = -1;
        cout << "Max queue size is " << n << endl;
    }

    void enqueue(int x)
    {
        if (front == -1 && back == n - 1)
        {
            cout << "Overflow\n";
            return;
        }

        if (front == -1)
            front++;
        back++;
        arr[back] = x;
    }

    void dequeue()
    {
        if (front > back || front == -1)
        {
            cout << "underflow\n";
            front = back = -1;
            return;
        }
        arr[front] = -1;
        front++;
    }
    int peek()
    {
        if ((front > back) || front == -1)
        {
            cout << "No element\n";
            return -1;
        }
        return arr[front];
    }

    bool empty()
    {
        if (front == back && front == -1)
            return true;
        if (front > back)
            return true;
        return false;
    }

    void print()
    {
        if (front > back || front == -1)
        {
            cout << "Sorry no queue\n";
            return;
        }
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
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
        q.enqueue(10);
        q.enqueue(1);
        q.enqueue(12);
        q.enqueue(11);
        q.enqueue(16);
        q.enqueue(13);
        q.print();
        q.dequeue();
        q.print();
        q.dequeue();
        q.dequeue();
        q.dequeue();
        q.dequeue();
        q.dequeue();
        q.dequeue();
        q.dequeue();
        q.dequeue();
        q.print();
    }
    return 0;
}
