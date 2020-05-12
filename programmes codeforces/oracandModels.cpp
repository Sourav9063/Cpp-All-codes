//                      Name: 
#include<bits/stdc++.h>
using namespace std;

#define lli long long int //lld
#define ulli unsigned long long int //llu

#define pt cout<<"*"<<endl;
#define nl cout<<endl;
#define deb(x) cout << #x << "=" << x << endl;

#define pb(a)    emplace_back(a)
#define all(x)   (x).begin(),(x).end()
#define rSort(x) sort((x).rbegin(),(x).rend())

#define Sourav ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

//template<typename... T>void read(T&... args) {((cin >> args), ...);}
template <class T>inline void sarray(T* st, T* nd){while(st<nd)cin>>*st++;/*sf("%d", st++);*/}
template <class T>inline void parray(T* st, T* nd){while(st<nd)cout<<*st++<<endl;/*sf("%d", st++);*/}

int main()
{
    Sourav;

ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll dp[n],s[n];
        for(ll i=0;i<n;i++) dp[i]=1;
        vector<pair<ll,ll>> v;
        rep{
            cin>>s[i];
            v.push_back({s[i],i+1});
        }
        
        ll tmp;
        for(ll i=0;i<n;i++){
            tmp = v[i].second;
            for(ll j=i+tmp;j<n;j=j+tmp){
                if(v[j].second%tmp==0 && v[j].first>v[i].first)
                    dp[j] = max(dp[j],dp[i]+1);
            }
        }
        cout<<*max_element(dp,dp+n)<<endl;
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