//                      Name: https://codeforces.com/problemset/problem/450/A
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
int tmp, ans;

int main()
{
    Sourav;

#ifndef ONLINE_JUDGE
    freopen("C:\\Users\\my_code\\input.in", "r", stdin);
    freopen("C:\\Users\\my_code\\output.in", "w", stdout);
#endif

    int n, m;
    cin >> n >> m;
    ans = n;
    vector<pair<int, int>> v;
    for (int i = 1; i <= n; i++)
    {
        cin >> tmp;
        v.pb(make_pair(tmp, i));
    }
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i].first << " " << v[i].second << endl;
    // }
    // nl

   
        while(!v.empty())
        {
          //  deb(v[0].second)
            if (v[0].first > m)
            {
                ans=v[0].second;
                v.pb(make_pair(v[0].first - m, v[0].second));
                 v.erase(v.begin());
            }
            else
            {
                 v.erase(v.begin());
            }
        }

    //  for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i].first << " " << v[i].second << endl;
    // }
    // nl

    cout << ans << endl;

    return 0;
}

/*
  Documentation:
   


*/