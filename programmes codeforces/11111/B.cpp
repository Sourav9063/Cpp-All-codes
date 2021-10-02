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

    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        // vector < pair<int, ll> vp;
        ll arr[n], sarr[n];
        for (size_t i = 0; i < n; i++)
        {
            cin >> arr[i];
            sarr[i] = arr[i];
            // vp.pb(make_pair(i + 1, arr[i]));
        }
        sort(sarr, sarr + n);
        // parray(sarr, sarr + n);
        int ans = 0;
        vector<int> l, r, d;
        for (size_t i = 0; i < n; i++)
        {
                //   parray(arr, arr + n);

            if (arr[i] != sarr[i])
            {
                for (size_t j = i + 1; j < n; j++)
                {
                    if (arr[j] == sarr[i])
                    {
// deb(i)
// deb(j)

                        l.pb(i + 1);
                        r.pb(j + 1);

                        d.pb(j - i);
                        int tmp = arr[j];

                        ans++;
                        for (size_t k = j; k > i; k--)
                        {

                            // ll t1 = arr[k];
                            // ll t2 = arr[k - 1];
                            // arr[k] = t2;
                            // arr[k - 1] = t1;

                            swap(arr[k], arr[k - 1]);
                            // arr[k] = arr[k - 1];
                        }

                        arr[i] = tmp;
                        break;
                    }
                }
                    //   parray(arr, arr + n);
            }
        }

        cout << ans << endl;
        for (size_t i = 0; i < l.size(); i++)
        {
            cout << l[i] << " " << r[i] << " " << d[i] << endl;
        }
  
    }

    return 0;
}

/*
  Documentation:
   


*/