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
        ll n;
        cin >> n;
        ll a[n + 2];
        ll mx = INT64_MIN;
        for (size_t i = 0; i < n + 2; i++)
        {
            cin >> a[i];
            mx = max(mx, a[i]);
        }
        ll cumsum = 0;
        bool fm = false;
        for (size_t i = 0; i < n + 2; i++)
        {

         
            if (a[i] == mx &&!fm)
            {
                a[i] = 0;
                fm = true;
                // deb(i)
            }
            cumsum += a[i];
        }
      
  
        ll ex = cumsum - mx;
        bool flag = false;
        // bool flagmx = false;
        vector<ll> v;
        for (size_t i = 0; i < n + 2; i++)
        {
            if (a[i] == ex && !flag)
            {
                flag = true;
                a[i] = 0;
            }
            //  if(a[i]==mx&&!flagmx){
            //     flagmx = true;
            // }
            if (a[i] != 0)
                v.push_back(a[i]);
        }

        if (!flag||v.size()!=n)
        {
            cout << -1;
        }
        else
        {
            for (auto &i : v)
            {
                cout << i << " ";
            }
        }
        nl
    }

    return 0;
}

/*
  Documentation:
   


*/