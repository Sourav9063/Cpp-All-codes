//                      Name:
#include <bits/stdc++.h>
using namespace std;

#define ll long long int           //lld
#define ull unsigned long long int //llu

#define pt cout << "*" \
                << "\n";
#define nl cout << "\n";
#define deb(x) cout << #x << "=" << x << "\n";

#define pb(a) emplace_back(a)
#define all(x) (x).begin(), (x).end()
#define rSort(x) sort((x).rbegin(), (x).rend())

#define Sourav                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
//template<typename... T>void read(T&... args) {((cin >> args), ...);}
template <class T>
inline void sarray(T *st, T *nd)
{
    while (st < nd)
        cin >> *st++; /*sf("%d", st++);*/
}
template <class T>
inline void parray(T *st, T *nd)
{
    while (st < nd)
        cout << *st++ << endl; /*sf("%d", st++);*/
}
ll tmp, ans;
#define midDef ((b + e) / 2)
int arr[100005];
int tree[100005 * 3];
void init(int node, int b, int e)
{
    int leftNode = node * 2;
    int rightNode = node * 2 + 1;
    int mid = (b + e) / 2;
    // cout << INT64_MIN << endl;

    if (b == e)
    {
        tree[node] = arr[b];
        // reached the leaf
        // base case
        return;
    }
    init(leftNode, b, mid); // goes to left node. creates children
    init(rightNode, mid + 1, e);
    tree[node] = tree[leftNode] + tree[rightNode];
}
int query(int node, int b, int e, int i, int j)
{
    int leftNode = node * 2;
    int rightNode = node * 2 + 1;
    int mid = (b + e) / 2;
    if (b > j || e < i)
    {
        //b---e
        //          i-----------j
        //////////////////////////////////////////
        //                  b---e
        //i-------------j
        return 0; //out of the segment. no need to dive deep
        // return INT64_MIN;
    }
    if (b >= i && e <= j)
    {
        //      b---e
        //  i------------j
 
        //the segment is inside the query;
        return tree[node];
    }
    int queryLeft = query(leftNode, b, mid, i, j);
    int queryRight = query(rightNode, mid + 1, e, i, j);
    return queryLeft + queryRight;
    // return max(queryLeft, queryRight); 
}
void update(int node, int b, int e, int i, int newValue)
{
    /// updates the tree with new value to its leaf. thus changes all sum of the upper nodes
    if (b > i || e < i) //out of the segment
        return;
    if (b <= i && e <= i)
    {
        tree[node] = newValue;
        return;
    }
    int leftNode = node * 2;
    int rightNode = node * 2 + 1;
    int mid = (b + e) / 2;
    update(leftNode, b, mid, i, newValue);
    update(rightNode, mid + 1, e, i, newValue);
    tree[node] = tree[leftNode] + tree[rightNode];
}

int main()
{
    
    Sourav;

#ifndef ONLINE_JUDGE
    freopen("C:\\Users\\my_code\\input.in", "r", stdin);
    freopen("C:\\Users\\my_code\\output.in", "w", stdout);
#endif

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    //for calculation start with 1
    {
        cin >> arr[i];
    }

    init(1, 1, n); //first node, start from 1, end in n
    for (int i = 0; i < n * 3; i++)
    {
        deb(tree[i]);
    }
    update(1, 1, n, 3, 100);
    for (int i = 0; i < n * 3; i++)
    {
        deb(tree[i]);
    }
    cout << query(1, 1, n, 3, 2) << endl;

    return 0;
}

/*
  Documentation:


*/