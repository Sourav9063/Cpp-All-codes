//                      Name:
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
ll tmp=LONG_LONG_MAX, ans;
bool prime(ll n)
{
    ll i;
    double sqrt_n = sqrt(static_cast<double>(n));

    for (i = 2; i <= sqrt_n; i++)
    {
        if (n % i == 0)   // If i divides n evenly,
            return false; //  n is not prime.
    }
    return true; // If no divisor found, n is prime.
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
//         ll n, k;
//         cin >> n >> k;
//         if (k >= n)
//         {
//             cout << 1 << endl;
//         }
//         else if (k == 1)
//         {
//             cout << n << endl;
//         }
//         else
//         {
//             if (prime(n))
//             {

//                 cout << n << endl;
//             }

//             else

//             {

//                 for (int i = 2; i < n / 2 + 1; i++)
//                 {
//                     if (n % i == 0 &&k>= ( n / i)  )
//                     {
//                         tmp=n/( n / i) ;

                        
// // deb(k)deb(tmp) deb(i)
//                         break;
//                     }
//                 }
//                 cout<<min(n,tmp)<<endl;
               
//             }
//         }
long long a,b;
        cin>>a>>b;
        if(b>=a)
        {
            cout<<1<<endl;
        }
        else
        {
            long long mn=INT_MAX;
            for(long long i=1;i*i<=a;i++)
            {
                if(a%i==0)
                {
                    if(a/i<mn && i<=b)
                    {
                        mn=a/i;
                    }
                    if(i<mn && a/i<=b)
                    {
                        mn=i;
                    }
                }
            }
            cout<<mn<<endl;
 
        }
    }

    return 0;
}

/*
  Documentation:
   


int power_x(int x, unsigned y)
{
    if(y==0)
        return 1;
    if(!(y&1))
        return power_x(x,y>>1)*power_x(x,y>>1);
    return x*power_x(x,y>>1)*power_x(x,y>>1);
}

*/