//                      Name:
#include <bits/stdc++.h>
using namespace std;

#define lli long long int           //lld
#define ulli unsigned long long int //llu

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
lli tmp, ans;

int main()
{
    Sourav;
#ifndef ONLINE_JUDGE
    freopen("C:\\Users\\my_code\\input.in", "r", stdin);
    freopen("C:\\Users\\my_code\\output.in", "w", stdout);
#endif
    lli MOD = 1000000007;

    lli x, y, n;
    cin >> x >> y;
    cin >> n;
    lli a = abs(x) % MOD, b = abs(y) % MOD, c = abs(y - x) % MOD, d = abs(-x) % MOD, e = abs(-y) % MOD, f = abs(x - y) % MOD;

    if (n % 6 == 1)
    {
        if (x >= 0 || a == 0)
            cout << a;
        else
        {
            if (a != 0)
                cout << MOD - a;
        }
    }
    else if (n % 6 == 2)
    {
        if (y >= 0 || b == 0)
            cout << b;
        else
            cout << MOD - b;
    }
    else if (n % 6 == 3)
    {
        if (y - x >= 0 || c == 0)
            cout << c;
        else
            cout << MOD - c;
    }
    else if (n % 6 == 4)
    {
        if ((-x) >= 0 || d == 0)
            cout << d;
        else
            cout << MOD - d;
    }
    else if (n % 6 == 5)
    {
        if ((-y) >= 0 || e == 0)
            cout << e;
        else
            cout << MOD - e;
    }
    else if (n % 6 == 0)
    {
        if (x - y >= 0 || f == 0)
            cout << f;
        else
            cout << MOD - f;
    }

    return 0;
}

/*
  Documentation
   
*/
/*
map<lli, bool>m;
  m[1000000000000000000] = 1;


  // loop 
  for(auto n:arrayname/anything)
  {
  
  }
Number of digits in N =floor(log10(N)) + 1;
n = n << 1;   // Multiply n with 2  use >> for div
*/

/*
int power_x(int x, unsigned y)
{
    if(y==0)
        return 1;
    if(!(y&1))
        return power_x(x,y>>1)*power_x(x,y>>1);
    return x*power_x(x,y>>1)*power_x(x,y>>1);
}

*/