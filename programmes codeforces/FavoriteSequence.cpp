//                      Name: Favorite Sequence
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
        // deque<ll> a(n);
        // ll arr[n];
        // queue<ll> l;
        // stack<ll> r;
        // vector<ll> l, r;
        //     for (size_t i = 1; i <= n; i++)
        //     {
        //         ll tmp;
        //         cin >> tmp;
        //         if (i % 2 == 1)
        //             l.push(tmp);
        //         else
        //             r.push(tmp);
        //     }
        //     // reverse(all(r));

        //   while (!l.empty()||!r.empty())
        //   {
        //       if(!l.empty()){
        //           cout << l.front() << " ";
        //           l.pop();
        //       }
        //       if(!r.empty()){
        //           cout << r.top() << " ";
        //           r.pop();
        //       }
        //   }

        int lval = n / 2 + n % 2;
        vector<ll> left, right;
        for (size_t i = 0; i < lval; i++)
        {
            ll tmp;
            cin >> tmp;
            left.pb(tmp);
        }
        for (size_t i = lval; i < n; i++)
        {
            ll tmp;
            cin >> tmp;

            right.pb(tmp);
        }
        reverse(all(right));
        for (size_t i = 0; i < lval - (n % 2); i++)
        {
            cout << left[i] << " " << right[i]<<" ";
        }
        if (n % 2)
            cout << left.back();

        nl
    }

    return 0;
}

/*
  Documentation:
   


*/