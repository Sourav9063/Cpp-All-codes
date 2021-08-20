//                      Name: Lazy porpagation
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
ll arr[100005];
struct
{
    ll sum, prop;
} tree[100005 * 4];

void init(int node, int b, int e)
{
    int mid = (b + e) /2;
    int leftNode = node << 1;
    int rightNode = (node << 1) + 1;
    if (b == e)
    {
        tree[node].sum = arr[b];

        return;
    }
    init(leftNode, b, mid);
    init(rightNode, mid + 1, e);
    tree[node].sum = tree[leftNode].sum + tree[rightNode].sum;
 
}

void update(int node, int b, int e, int i, int j, ll x)
{
    int mid = (b + e) /2;
    // ll tmpprop, tmpsum;
    int leftNode = node << 1;
    int rightNode = (node << 1) + 1;
    if (b > j || e < i)
    {
        return;
    }
    if (b >= i && e <= j)
    {
        tree[node].prop += x;
        tree[node].sum += (e - b + 1) * x;
        //  tmpprop = tree[node].prop;
        //  tmpsum = tree[node].sum;
         return;
    }
    update(leftNode, b, mid, i, j, x);
    update(rightNode, mid + 1, e, i, j, x);
    tree[node].sum = tree[leftNode].sum + tree[rightNode].sum + (e - b + 1) * tree[node].prop; // *x hobe na karon prop value zog kore asche ja x er soman noy
}
int query(int node, int b, int e, int i, int j, int carry = 0)
{
    int mid = (b + e) / 2;
    int leftNode = node << 1;
    int rightNode = (node << 1) + 1;
    if (b > j || e < i)
    {
        return 0;
    }
    if (b >= i && e <= j)
    {
        return tree[node].sum + carry * (e - b + 1);
    }
    return query(leftNode, b, mid, i, j,carry+ tree[node].prop) + query(rightNode, mid + 1, e, i, j,carry+ tree[node].prop);
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
    for (ll i = 1; i <= n; i++)
  
    {
        cin >> arr[i];
    }
    // parray(arr+1, arr + n+1);
    init(1, 1, n);
    update(1,1,n,1,5,+2);

    for (ll i = 1; i <= n*4; i++)
    {
   
        cout << tree[i].sum << endl;
    }
pt
    cout << query(1, 1, n, 2, 6) << endl;

    return 0;
}

/*
  Documentation:
   


*/