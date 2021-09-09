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

    int n, m;
    cin >> n >> m;
    map<string, int> s;
    for (size_t i = 0; i < n + m; i++)
    {
        string stmp;
        cin >> stmp;
        s[stmp]++;
    }
    int dupcount = 0;
    for (auto s1 : s)
    {
        if (s1.second > 1)
        {
            dupcount+=s1.second/2;
        }
    }
 int   nu = n - dupcount;
 int mu = m - dupcount;
//  deb(nu)
//  deb(mu)
 if (nu > mu)
     cout << "YES" << endl;
 else if (mu > nu)
     cout << "NO" << endl;
 else
 {
     cout << ((nu + mu+dupcount )% 2 ? "YES" : "NO") << endl;
    }
    return 0;
}

/*
  Documentation:
   


*/