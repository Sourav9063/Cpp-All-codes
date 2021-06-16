//                      Name: https://codeforces.com/problemset/problem/1249/B1
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

int a[1000000] = {0};

int Cont(int n)
{

    int an = 0;
    tmp = a[n];
    while (tmp != n)
    {
        an++;
        tmp = a[tmp];
    }
    return an + 1;
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

        for (int i = 1; i < n + 1; i++)
        {
            cin >> a[i];
        }
        int ansar[n];
        for (int i = 1; i <= n; i++)
        {
            cout << Cont(i) << " ";
        }
        nl;
    }

    return 0;
}

/*
  Documentation:
   


*/