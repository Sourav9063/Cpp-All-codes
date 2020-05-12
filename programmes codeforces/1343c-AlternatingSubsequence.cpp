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
        int n;
        cin>>n;
        lli ans = 0;
        vector<int> v;

        for (int i = 0; i < n; i++)
        {
            int tmp;
            cin >> tmp;
            v.pb(tmp);
        }

        set<int> s;//sort korar theke bachay aar max value ber kore dey 
        lli i = 0;
        lli sum = 0;
        while (i < n)
        {
            if (v[i] < 0)
            {
                while (v[i] < 0 && i < n)
                {
                    s.insert(v[i]);
                    i++;
                }
            }
            else
            {
                while (v[i] > 0 && i < n)
                {
                    s.insert(v[i]);
                    i++;
                }
            }
// auto itt=s.end();//end use kora jabe na cause end ta past last element
// itt++;
//             deb(*itt);
            auto it = s.rbegin(); //set er last element er itarator
//deb(*it);
            sum += *it; //iterator er value
            s.clear(); //set clear
        }

        cout << sum << endl;
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