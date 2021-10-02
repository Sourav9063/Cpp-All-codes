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
#define MOD 1000000007

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
ull moduloMultiplication(ull a,
                            ull b
                           )
{
    ull res = 0; // Initialize result
 
    // Update a if it is more than
    // or equal to mod
    a %= MOD;
 
    while (b)
    {
        // If b is odd, add a with result
        if (b & 1)
            res = (res + a) % MOD;
 
        // Here we assume that doing 2*a
        // doesn't cause overflow
        a = (2 * a) % MOD;
 
        b >>= 1; // b = b / 2
    }
 
    return res;
}
 

ull factorial(ull n)
{
    /*Wrong value*/
    if (n == 0)
        return (1); /*Terminating condition*/
    else
    {
        // return (n%MOD * factorial(n - 1)%MOD);
        return moduloMultiplication(n, factorial(n - 1));
    }
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
        ull n;
        cin >> n;
        ll ans=1;
        for (size_t i = 3; i <= n*2; i++)
        {
            ans = moduloMultiplication(ans, i);
        }
        
        // cout << factorial(2*n)/2 << endl;
        cout<<ans<<endl;
    }

    return 0;
}

/*
  Documentation:
   


*/