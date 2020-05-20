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

    int n, a;
    cin >> n;
    a = 2 * n;
    while (a--)
    {
        cout << " ";
    }
    cout << "0" << endl;
    for (int i = 1; i <= n; i++)
    {
        a = 2 * (n - i);
        while (a--)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << j << " ";
        }
        for (int j = i - 1; j > 0; j--)
        {
            cout << j << " ";
        }
        cout << "0" << endl;
    }
    for (int i = n - 1; i > 0; i--)
    {
        a = 2 * (n - i);
        while (a--)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << j << " ";
        }
        for (int j = i - 1; j > 0; j--)
        {
            cout << j << " ";
        }
        cout << "0" << endl;
    }
    a = 2 * n;
    while (a--)
    {
        cout << " ";
    }
    cout << "0";

    //     for (int i = 0; i <= n; i++)
    //     {
    //         for (int j = 0; j <= 2*(n-i)-1; j++)
    //         {
    //             cout<<" ";
    //         }

    // cout<<0;
    //         for (int j = 1; j < i; j++)
    //         {
    //             cout<< " " << j ;
    //         }
    //         for (int j = i; j >= 0; j--)
    //         {
    //             cout << " " << j;
    //         }

    //         nl;
    //     }
    //     for (int i = n - 1; i >= 0; i--)
    //     {
    //          for (int j = 2*(n-i)-1; j>0;j-- )
    //         {
    //             cout <<" ";
    //         }
    //         cout<<"0";
    //         for (int j = 1; j <= i; j++)
    //         {
    //             cout << " "<< j ;
    //         }
    //         for (int j = i - 1; j >= 0; j--)
    //         {
    //             cout << " " << j;
    //         }

    //         nl;
    //     }

    //           0
    //         0 1 0
    //       0 1 2 1 0
    //     0 1 2 3 2 1 0
    //   0 1 2 3 4 3 2 1 0
    // 0 1 2 3 4 5 4 3 2 1 0
    //   0 1 2 3 4 3 2 1 0
    //     0 1 2 3 2 1 0
    //       0 1 2 1 0
    //         0 1 0
    //           0
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