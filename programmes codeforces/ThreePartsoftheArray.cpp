//                      Name: Three Parts of the Array
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

    ull n;
    cin >> n;
    ull ar[n], ur[n], sar[n], sur[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> ar[i];
        ur[n - 1 - i] = ar[i];
    }
    sar[0] = ar[0];
    sur[0] = ur[0];
    for (size_t i = 1; i < n; i++)
    {

        sar[i] = ar[i] + sar[i - 1];
        sur[i] = ur[i] + sur[i - 1];
    }
    // parray(sar, sar + n);
    // parray(sur, sur + n);
    // ll ans = 0;
    for (ll i = n - 1; i >= 0; i--)
    {
        for (ll j = n - i - 1; j >= 0;)
        {
            
            if (binary_search(sur, sur + j, sar[i]))
            {
                cout << sar[i] << endl;
                return 0;
            }
            else  
            {
                // pt
                break;
            }
        }
    }

    cout << 0 << endl;

    return 0;
}

/*
  Documentation:
   


*/