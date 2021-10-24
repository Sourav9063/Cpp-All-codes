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
        priority_queue<pair<ll, ll>> pqp;
        for (size_t i = 1; i <= n; i++)
        {
            int tmp;
            cin >> tmp;
            
        if(tmp>0)    pqp.push({tmp, i});
        }
        vector<pair<ll, ll>> ans;
        while (pqp.size() > 1)
        {
            pair<ll, ll> p1 = pqp.top();
    pqp.pop();
    pair<ll, ll>p2 = pqp.top();
            pqp.pop();
            ans.push_back(make_pair(p1.second, p2.second));
            p1.first--;
            p2.first--;
            if (p1.first )
                pqp.push(p1);
            if (p2.first != 0)
                pqp.push(p2);
        }
        cout<<ans.size()<<endl;
        for (auto i:ans)
        {
          cout<<i.first<<" "<<i.second<<endl;
        }
        // for (size_t i = 0; i < n; i++)
        // {
        //     cout << pqp.top().first << " " << pqp.top().second << endl;
        //     pqp.pop();
        // }

        // nl
    }

    return 0;
}

/*
  Documentation:
   


*/