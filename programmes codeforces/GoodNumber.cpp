//                      Name: https://codeforces.com/contest/365/problem/A
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

 ll n,k;
 cin>>n>>k;
 
 ll num=0;
 for (int i = 0; i < n; i++)
 {
     ll  f[k+1]={0};
cin>>num;
     while(num)
     {
         tmp=num%10;
         if(tmp<=k)f[tmp]=1;
// deb(tmp)
num/=10;
// deb(num)
     }
bool alll=true;
    for (int i = 0; i <= k; i++)
    {
        if(f[i]==0)alll=false;
        
    }
    
if(alll)ans++;

 }
 
cout<<ans;nl;
 

    return 0;
}

/*
  Documentation:
  string use kori 


int power_x(int x, unsigned y)
{
    if(y==0)
        return 1;
    if(!(y&1))
        return power_x(x,y>>1)*power_x(x,y>>1);
    return x*power_x(x,y>>1)*power_x(x,y>>1);
}

*/