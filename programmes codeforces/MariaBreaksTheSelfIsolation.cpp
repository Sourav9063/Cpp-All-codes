//                      Name: https://codeforces.com/contest/1358/problem/B
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
        ll a[n + 1] = {0};
        // set<ll> re;
        // ll sum[200100] = {0};
        for (ll i = 1; i <= n; i++)
        {
            cin >> a[i];
            // re.insert(a[i]);
            // sum[a[i]]++;
        }
        ans = 1;
        tmp=0;
        // vector<ll>r;
        // for(auto it:re)r.pb(it);

        //       for (ll i = 0; i < re.size(); i++)
        //       {
        //           deb(ans)
        //           if(ans+sum[r[i]]-1>=r[i])
        //           {
        //               ans+=sum[r[i]];
        //           }

        //           else
        //           {
        //               break;
        //           }

        //       }

        sort(a + 1, a + n + 1);
        for (int i = 1; i <= n; i++)
        {
            if (ans + i - 1 >= a[i])
            {
                tmp = i;
                // deb(ans+i-1)
                // deb(a[i])
            }
        }

        cout << ans + tmp << endl;
    }

    return 0;
}

/*
  Documentation:
   


ll power_x(int x, unsigned y)
{
    if(y==0)
        return 1;
    if(!(y&1))
        return power_x(x,y>>1)*power_x(x,y>>1);
    return x*power_x(x,y>>1)*power_x(x,y>>1);
}

*/