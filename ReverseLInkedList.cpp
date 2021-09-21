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

class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtTail(Node *&head, int val)
{
    Node *n = new Node(val);

    if (head == NULL)
    {
        head = n;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

Node *reverselist(Node *&head)
{
    Node *prevptr = NULL;
    Node *currptr = head;
    Node *nextptr;

    while (currptr != NULL)
    {
        nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
    }
    return prevptr;
}

void printlist(Node *&head)
{
    if (head == NULL)
    {
        cout << "No linked list";
        return;
    }
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
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
        Node *head = NULL;
        insertAtTail(head, 10);
        insertAtTail(head, 17);
        insertAtTail(head, 13);
        insertAtTail(head, 11);
        insertAtTail(head, 14);
        insertAtTail(head, 17);
        printlist(head);
        Node *newHead = NULL;
        newHead = reverselist(head);
        cout << "\n";
        printlist(newHead);
    }
    return 0;
}
