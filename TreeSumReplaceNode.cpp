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
        left = right = NULL;
    }
};

Node *createTree(vector<int> arr, Node *root, int i, int n)
{
    if (i < n && arr[i])
    {
        Node *curr = new Node(arr[i]);
        root = curr;
        root->left = createTree(arr, root->left, 2 * (i + 1) - 1, n);
        root->right = createTree(arr, root->right, 2 * (i + 1), n);
    }

    return root;
}

int sumReplaceNode(Node *root)
{
    if (root == NULL)
        return 0;
    return root->data += sumReplaceNode(root->left) + sumReplaceNode(root->right);
}

void inorder(Node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
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
        int n;
        cin >> n;
        vector<int> v(n);
        for (auto &i : v)
            cin >> i;
        Node *root;
        root = createTree(v, NULL, 0, n);
        sumReplaceNode(root);
        inorder(root);
    }
    return 0;
}
