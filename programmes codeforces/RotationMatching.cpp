//                      Name:
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
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
        cout << *st++ << ' ';
    nl /*sf("%d", st++);*/
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
    int ap[n + 1], a[n + 1];
    int bp[n + 1], b[n + 1];
    for (size_t i = 1; i <= n; i++)
    {
        int tmp;
        cin >> tmp;
        a[i] = tmp;

        ap[tmp] = i;
    }
    for (size_t i = 1; i <= n; i++)
    {
        int tmp;
        cin >> tmp;
        b[i] = tmp;
        bp[tmp] = i;
    }
    vector<int> ans(n,0);

    for (size_t i = 1; i <=n; i++)
    {
        ll tmp = ap[a[i]] - bp[a[i]];
        // cout << abs(ap[a[i]] - bp[a[i]]);
         if (tmp <0) tmp+=n;
         ans[tmp]++;
    }
    rSort(ans);

    cout<<ans[0];
    nl
    return 0;
}

/*
  Documentation:
   


*/