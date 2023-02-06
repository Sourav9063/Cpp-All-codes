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
inline void sarray(T* st, T* nd)
{
    while (st < nd)
        cin >> *st++; /*sf("%d", st++);*/
}
template <class T>
inline void parray(T* st, T* nd)
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

    ll n, k;
    string s;
    cin >> n >> k;
    cin >> s;
    ll q;
    cin >> q;
    priority_queue<ll> pq;
    map<ll, pair<ll, pair<ll, ll>>> mp;
    pq.push(n);
    for (ll i = 1; i <= k; i++)
    {
        ll tmp = pq.top();
        pq.pop();
        if (tmp % 2 == 0)
        {
            if (s[i - 1] == 'R')
            {
                int tmp2 = mp[tmp / 2 + 1].first;
                if (tmp2 == 0) {
                    //    mp[tmp / 2+1]={i,{}}
                    // ToDo::
                }

                pq.push(tmp / 2);
                pq.push(tmp / 2 - 1);
            }
            else
            {

                mp[tmp / 2] = i;
                pq.push(tmp / 2);
                pq.push(tmp / 2 - 1);
            }
        }
        else {

            mp[tmp / 2 + 1] = i;
            // deb(tmp/2)
            pq.push(tmp / 2);
            pq.push(tmp / 2);
        }


    }

    for (ll i = 0; i < q; i++)
    {

        ll tmp;
        cin >> tmp;
        ll tmpans = mp[tmp];
        cout << (tmpans == 0 ? -1 : mp[tmp]) << endl;
    }



    return 0;
}

/*
  Documentation:



*/