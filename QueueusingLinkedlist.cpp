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

class node
{
public:
    int data;
    node *next;
};

class queues
{

    node *head, *tail;

public:
    queues()
    {
        head = NULL;
        tail = NULL;
    }
    
    void enqueue(int data)
    {
        node *tmp = new node;
        tmp->data = data;
        tmp->next = NULL;

        if (head == NULL)
        {
            head = tmp;
            tail = tmp;
        }
        else
        {
            tail->next = tmp;
            tail = tail->next;
        }
    }
    void deque()
    {
        if (head == NULL)
        {
            cout << "underflow\n";
            return;
        }
        node *tmp = head;
        head = head->next;
    }
    int peek()
    {
        if (head == NULL)
        {
            cout << "No element\n";
            return -1;
        }
        return head->data;
    }
    bool empty()
    {
        if (head == NULL)
            return true;
        return false;
    }

    void print()
    {
        node *tmp = head;
        if (head == NULL)
        {
            cout << "No element\n";
            return;
        }
        do
        {
            cout << tmp->data << " ";
            tmp = tmp->next;
        } while (tmp != NULL);

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

        q.enqueue(12);
        q.enqueue(1);
        q.enqueue(13);
        q.enqueue(11);
        q.print();
        q.deque();
        q.deque();
        q.print();
        cout << q.peek();
        q.deque();
        q.deque();
        q.deque();
        q.print();
    }
    return 0;
}
