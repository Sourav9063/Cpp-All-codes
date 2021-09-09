//                      Name: Pair of Topics
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
        cout << *st++ << ' '; /*sf("%d", st++);*/
}

int main()
{
    Sourav;

#ifndef ONLINE_JUDGE
    freopen("C:\\Users\\my_code\\input.in", "r", stdin);
    freopen("C:\\Users\\my_code\\output.in", "w", stdout);
#endif

    ll n;
    cin >> n;
    ll ans = 0;
    ll a[n], b[n];
    sarray(a, a + n);
    sarray(b, b + n);
    vector<ll> difa_b, difb_a;
    set<ll> s;
    for (size_t i = 0; i < n; i++)
    {
        difa_b.pb(a[i] - b[i]);
        // s.insert(difa_b[i]);
        // difb_a.pb(b[i] - a[i]);
    }
    sort(all(difa_b));
    // sort(difa_b, difa_b + n);
    // sort(difb_a, difb_a + n);
    // parray(difa_b, difa_b + n);
    // nl
    //     parray(difb_a, difb_a + n);
    // cout << s.size() << endl;
    for (size_t i = 0; i < n; i++)
    {
        // for (size_t j = 0; j < n; j++)
        // {

        //     if (difa_b[i] > difb_a[j])
        //     {
        //         ans++;
        //     }
        //     else
        //     {
        //         break;
        //     }
        // }
        // for (ll j = n - 1; j >= 0; j--)
        // {
        //     if (i == j)
        //         continue;
        //     if (difa_b[i] > -1 * difa_b[j])
        //     {
        //         ans++;
        //         // deb(ans)
        //     }
        //     else
        //     {
        //         break;
        //     }
        // }
        // nl

        if (difa_b[i] <= 0)
            continue;
        ll pos = lower_bound(difa_b.begin(), difa_b.end(), (-1 * difa_b[i] )+ 1) - difa_b.begin();
        ans += (i - pos);
    }
    cout << ans << endl;

    return 0;
}

/*
  Documentation:
   


*/