//                      Name: https://codeforces.com/problemset/problem/1292/A
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
int a[3][10000000];
int main()
{
    Sourav;

#ifndef ONLINE_JUDGE
    freopen("C:\\Users\\my_code\\input.in", "r", stdin);
    freopen("C:\\Users\\my_code\\output.in", "w", stdout);
#endif

    int n, q;
    cin >> n >> q;

    // for (int i = 0; i <= n; i++)
    // {
    //     a[1][i] = 0;
    //     a[2][i] = 0;
    // }
    bool in = false;
    vector<pair<int, int>> vc;
    for (int i = 0; i < q; i++)
    {
        int u, v;
        cin >> u >> v;
        if (i == 0)
            tmp = u;
        vc.pb(make_pair(u, v));
        a[u][v]++;
        bool flag = true;

        if (tmp != u || in)
        {
            in = true;
            for (int j = 0; j < vc.size(); j++)
            {
                if (a[vc[j].first][vc[j].second] % 2 == 1)
                {
                    if (vc[j].first == 1)
                    {
                        if (a[2][vc[j].second] % 2 == 1 || a[2][vc[j].second - 1] % 2 == 1 || a[2][vc[j].second + 1] % 2 == 1)
                        {
                            // deb(vc[j].first)
                            // deb(vc[j].second)
                            flag = false;
                            break;
                        }
                    }
                    else
                    {
                        if (a[1][vc[j].second] % 2 == 1 || a[1][vc[j].second - 1] % 2 == 1 || a[1][vc[j].second + 1] % 2 == 1)
                        {
                            // deb(vc[j].first)
                            // deb(vc[j].second)
                            flag = false;
                            break;
                        }
                    }
                }
            }
        }

        cout << (flag ? "YES" : "NO") << endl;
    }

    return 0;
}

/*
  Documentation:
   


*/