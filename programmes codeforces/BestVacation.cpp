//                      Name: 
#include<bits/stdc++.h>
using namespace std;

#define ll long long int //lld
#define ull unsigned long long int //llu

#define pt cout<<"*"<<"\n";
#define nl cout<<"\n";
#define deb(x) cout << #x << "=" << x << "\n";

#define pb(a)    emplace_back(a)
#define all(x)   (x).begin(),(x).end()
#define rSort(x) sort((x).rbegin(),(x).rend())

#define Sourav ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

//template<typename... T>void read(T&... args) {((cin >> args), ...);}
template <class T>inline void sarray(T* st, T* nd){while(st<nd)cin>>*st++;/*sf("%d", st++);*/}
template <class T>inline void parray(T* st, T* nd){while(st<nd)cout<<*st++<<endl;/*sf("%d", st++);*/}
ll tmp;

int main()
{
Sourav;

 #ifndef ONLINE_JUDGE
            freopen("C:\\Users\\my_code\\input.in", "r", stdin); 
            freopen("C:\\Users\\my_code\\output.in", "w", stdout);
 #endif

ll n,x;
cin>>n>>x;
vector<ll>v;
// vector<ll>a;
ll total=0;
for (int i = 0; i < n; i++)
{
    cin>>tmp;
    // a.pb(tmp);
    for (int j = 1; j<= tmp; j++)
    {
        v.pb(j);
        
    }
    
    total+=tmp;
}
for (int i = 0; i < x+10; i++)
{
    v.pb(v[i]);
}
total+=(x+10);

// vector<ll>ans;
 ll sum=0;
for(ll i=0;i<x;i++)
{
    sum+=v[i];
    
}
ll anns=0;
anns=max(anns,sum);
for (int i = x; i < total; i++)
{
    sum=(sum-v[i-x])+v[i];
    anns=max(anns,sum);
}



cout<<anns<<endl;






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