//                      Name: Card Deck
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
        // int n;
        // cin >> n;
        // int a[n];
        // sarray(a, a + n);
        // // reverse(a, a + n);

        // vector<int> ans;
        // stack<int> tmp;

        // tmp.push(a[n - 1]);

        // for (int i = n - 2; i >= 0; i--)
        // {

        //     if (tmp.top() <= a[i])
        //     {
        //         tmp.push(a[i]);
        //     }
        //     else
        //     {
        //         while (!tmp.empty())
        //         {
        //             ans.pb(tmp.top());
        //             tmp.pop();
        //         }

        //         tmp.push(a[i]);
        //     }
        // }

        //         while (!tmp.empty())
        //         {
        //             ans.pb(tmp.top());
        //             tmp.pop();
        //         }
        // for (auto i : ans)
        // {
        //     cout << i << " ";
        // }
        // nl
        int n;
        cin >> n;
        int b[100003] = {0};
        map<int, int> a;
        for (int i = 0; i < n; i++)
        {
            int tmp;
            cin >> tmp;
            b[i] = tmp;
            a[tmp] = i;
        }
        int p = n;
        for (int i = n; i > 0; i--)
        {
            if (a[i] < p)
            {
                for (int j = 0; a[i] + j < p; j++)
                    cout << b[a[i] + j] << " ";
                p = a[i];
            }
        }
        nl
    }

    return 0;
}

/*
  Documentation:
   


*/