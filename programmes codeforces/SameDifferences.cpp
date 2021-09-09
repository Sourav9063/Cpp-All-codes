//                      Name: Same Differences
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
        cout << *st++ << endl; /*sf("%d", st++);*/
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
        // int n;
        // cin >> n;
        // vector<int> count;
        // for (size_t i = 1; i <= n; i++)
        // {
        //     int a;
        //     cin >> a;
        //     count.pb(a - i);
        // }
        // sort(all(count));
        // int ans = 0;
        // int tmp = count[0];
        // // for (auto  i:count)
        // // {
        // //     deb(i)
        // // }
        // int arr[count.size()] = {0};

        // for (int i = 1; i < count.size(); i++)
        // {
        //     if (count[i] == tmp)
        //     {
        //         arr[tmp]++;
        //         ans += arr[tmp];
        //     }
        //     else
        //     {
        //         tmp = count[i];
        //     }
        // }
        // cout << ans << endl;

        int n;
        cin >> n;
        map<int, int> m;
        ll ans = 0;
        for (size_t i = 1; i <= n; i++)
        {
            int a;
            cin >> a;
            ans += m[a - i];
            m[a - i]++;
        }
        cout << ans << endl;
    }

    return 0;
}

/*
  Documentation:
   
aj-ai=j-i
aj-j=ai-i

*/