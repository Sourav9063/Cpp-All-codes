//                      Name: https://codeforces.com/problemset/problem/615/A
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

    int n, m;

    cin >> n >> m;
    bool ar[m + 1];
    for (int i = 1; i <= m; i++)
    {
        ar[i] = false;
    }

    for (int i = 0; i < n; i++)
    {

        int l;
        cin >> l;

        for (int i = 0; i < l; i++)
        {
            cin >> tmp;
            ar[tmp] = true;
        }
    }
    bool a = true;
    for (int i = 1; i <= m; i++)
    {
        if (ar[i] == false)
        {
            a = false;
            break;
        };
    }

    cout << (a ? "YES" : "NO") << endl;

    return 0;
}

/*
  Documentation:
   


*/