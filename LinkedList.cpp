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
    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtHead(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    n->next = head;
    head = n;
}

void insertAtPostion(node *&head, int pos, int val)
{
    node *n = new node(val);
    node *temp = head;

    if (!pos)
    {
        n->next = head;
        head = n;
        return;
    }

    while (temp->next != NULL && --pos)
    {
        temp = temp->next;
    }
    n->next = temp->next;
    temp->next = n;
}

void insertAtTail(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    return;
}

void printNode(node *head)
{
    if (head == NULL)
        return;
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
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
        node *head = NULL;
        insertAtTail(head, 10);
        insertAtTail(head, 20);
        insertAtTail(head, 30);
        insertAtHead(head, 19);
        insertAtPostion(head, 1, 39);
        insertAtTail(head, 40);
        insertAtTail(head, 50);

        printNode(head);
    }
    return 0;
}
