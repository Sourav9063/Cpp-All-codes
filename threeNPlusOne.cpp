//                      Name: 3n+1
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
ll even(ll n);
ll odd(ll n);
ll odd(ll n)
{
    deb(n)
    if (n == 1)
        return 1;

    n = n * 3 + 1;
    if (n & 1)
        odd(n);
    else
        even(n);
}

ll even(ll n)
{
    deb(n);
    if (n == 1)
        return 1;
    n /= 2;
    if (n & 1)
        odd(n);
    else
        even(n);
}

int main()
{
    Sourav;

#ifndef ONLINE_JUDGE
    freopen("C:\\Users\\my_code\\input.in", "r", stdin);
    freopen("C:\\Users\\my_code\\output.in", "w", stdout);
#endif

    ll n;
    cin >> n;
    if(n&1)
        odd(n);
    else
        even(n);

    return 0;
}

/*
  Documentation:
   


*/