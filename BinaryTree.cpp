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
    Node *left, *right;
    Node(int val)
    {
        data = val;
        left = NULL, right = NULL;
    }
};

void inorder(Node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
void preorder(Node *root)
{
    if (root == NULL)
        return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(Node *root)
{
    if (root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
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
        Node *root = new Node(1);
        root->left = new Node(2);
        root->right = new Node(3);
        root->left->right = new Node(4);
        root->right->right = new Node(5);
        postorder(root);
        cout << endl;
        inorder(root);
        cout << endl;
        preorder(root);
        cout << endl;
    }
    return 0;
}
