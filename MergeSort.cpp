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

void merged(vector<int> &v, int l, int mid, int r)
{

    int n1 = mid - l + 1;
    int n2 = r - mid;

    vector<int> v1(n1), v2(n2);

    f(i, 0, n1) v1[i] = v[l + i];
    f(i, 0, n2) v2[i] = v[mid + 1 + i];
    int k = 0, i = 0, j = 0;
    while (i < n1 && j < n2)
    {
        if (v1[i] > v2[j])
        {
            v[l + k] = v2[j];
            j++;
        }
        else
        {
            v[l + k] = v1[i];
            i++;
        }
        k++;
    }

    while (j < n2)
    {
        v[l + k] = v2[j];
        j++, k++;
    }
    while (i < n1)
    {
        v[l + k] = v1[i];
        i++, k++;
    }
}

void mergeSort(vector<int> &v, int l, int r)
{
    if (l < r)
    {
        int mid = l + (r - l) / 2;
        mergeSort(v, l, mid);
        mergeSort(v, mid + 1, r);
        merged(v, l, mid, r);
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
        int n;
        cin >> n;
        vector<int> v(n);
        f(i, 0, n) cin >> v[i];
        mergeSort(v, 0, n - 1);
        for (auto x : v)
            cout << x << " ";
    }
    return 0;
}
