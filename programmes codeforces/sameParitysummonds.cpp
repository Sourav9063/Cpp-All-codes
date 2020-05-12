//                      Name:
#include <bits/stdc++.h>
using namespace std;

#define lli long long int           //lld
#define ulli unsigned long long int //llu

#define pt cout << "*" << endl;
#define nl cout << endl;
#define deb(x) cout << #x << "=" << x << endl;

#define pb(a) emplace_back(a)
#define all(x) (x).begin(), (x).end()
#define rSort(x) sort((x).rbegin(), (x).rend())

#define Sourav                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

template <typename... T>
void read(T &... args)
{
    ((cin >> args), ...);
}
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

int main()
{
    Sourav;
#ifndef ONLINE_JUDGE
    freopen("C:\\Users\\my_code\\input.in", "r", stdin);
    freopen("C:\\Users\\my_code\\output.in", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        if (k > n)
            cout << "NO" << endl;
        else if (k == n)
        {
            cout << "YES" << endl;
            for (int j = 0; j < n; j++)
            {
                cout << "1 ";
            }
            nl;
        }
        else if (n % 2 == 1 && k % 2 == 0) // odd even;
        {
            cout << "NO" << endl;
        }

        else
        {
            if (n % 2 == 0 && k % 2 == 0)
            {
                cout << "YES" << endl;
                int i = 1;
                for (i = 1; i < k; i++)
                {
                    cout << "1"
                         << " ";
                }
                cout << n - i + 1 << endl;
            }
            else if (n % 2 == 1 && k % 2 == 1) //odd odd
            {
                cout << "YES" << endl;
                int i = 1;
                for (i = 1; i < k; i++)
                {
                    cout << "1"
                         << " ";
                }
                cout << n - i + 1 << endl;
            }

            else if (n % 2 == 0 && k % 2 == 1) //even odd
            {
                if (k<=n/2)
                {
                    cout << "YES" << endl;
                    int i = 1;
                    for (i = 1; i < k; i++)
                    {
                        cout << "2"
                             << " ";
                    }
                    cout << n - (i - 1) * 2 << endl;
                }
                else
                {
                    cout << "NO" << endl;
                    //deb(n/2);deb(k);
                }
            }
         
        }
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