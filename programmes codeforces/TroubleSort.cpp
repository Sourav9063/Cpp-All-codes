//                      Name: https://codeforces.com/contest/1365/problem/B
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

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        ll a[n],ar[n];
        int b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            ar[i]=a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        vector<ll> ab1;
        vector<ll> ab0;

        int zero = 0;
        int one = 0;
        for (int i = 0; i < n; i++)
        {
            if (b[i] == 1)
            {
                ab1.pb(a[i]);
                one++;
            }
            else
            {
                ab0.pb(a[i]);
                zero++;
            }
        }
sort(a,a+n);
        // vector<ll> absort1;
        // vector<ll> absort0;

        // absort1 = ab1;
        // absort0 = ab0;
        // sort(all(absort1));
        // sort(all(absort0));

        // // bool f = true;

        // int oneMiss=0;
        // int zeroMiss=0;
        // for (int i = 0; i < ab1.size(); i++)
        // {
        //     // cout<<absort1[i]<<endl;
        //     if (absort1[i] != ab1[i])
        //     {
        //        oneMiss++;
                
        //     }
        // }

        // for (int i = 0; i < ab0.size(); i++)
        // {
        //     if (absort0[i] != ab0[i])
        //     {
        //        zeroMiss++;
        //     }
        // }

if(zero>0&&one>0)cout<<"Yes"<<endl;
else
{
    bool f=true;
    for (int i = 0; i < n; i++)
    {
        if (ar[i]!=a[i])
        {
            f=false;break;
        }
        
    }
    
    cout<<(f?"Yes":"No")<<endl;
    
}
       
    }

    return 0;
}

/*
  Documentation:
   


*/