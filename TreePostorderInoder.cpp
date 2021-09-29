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

int searchElement(vector<int> inorder, int search)
{
    return lower_bound(inorder.begin(), inorder.end(), search) - inorder.begin();
}

Node *treeTransform(vector<int> postorder, vector<int> inorder, int start, int end)
{
    if (start > end)
        return NULL;
    static int idx = postorder.size() - 1;
    int curr = postorder[idx];
    Node *node = new Node(curr);

    idx--;
    if (start == end)
        return node;
    int pos = searchElement(inorder, curr);
    node->right = treeTransform(postorder, inorder, pos + 1, end);
    node->left = treeTransform(postorder, inorder, start, pos - 1);
    return node;
}

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
        int n;
        cin >> n;
        vector<int> postorderArr(n), inorderArr(n);
        for (auto &i : postorderArr)
            cin >> i;
        for (auto &i : inorderArr)
            cin >> i;

        Node *root = treeTransform(postorderArr, inorderArr, 0, n - 1);
        cout << "Inorder ";
        inorder(root);
        cout << "\npreorder ";
        preorder(root);
        cout << "\npostorder ";
        postorder(root);
    }
    return 0;
}
