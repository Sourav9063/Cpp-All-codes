//                      Name: https://codeforces.com/contest/1364/problem/B`
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
ll tmp,ans;

int main()
{
Sourav;

 #ifndef ONLINE_JUDGE
            freopen("C:\\Users\\my_code\\input.in", "r", stdin); 
            freopen("C:\\Users\\my_code\\output.in", "w", stdout);
 #endif

 
  ll t;
  cin>>t;
     while(t--)
     {
       ll n;
       cin>>n;

       ll a[n];
       vector<ll>anss;
bool u=false,d=false;
cin>>a[0];
anss.pb(a[0]);
       for (int i = 1; i < n; i++)
       {
           cin>>a[i];


       }
       
    for (int i = 1; i < n-1; i++)
    {
        if(a[i-1]<a[i]&&a[i+1]<a[i])anss.pb(a[i]);
        if(a[i-1]>a[i]&&a[i+1]>a[i])anss.pb(a[i]);
    }
    
anss.pb(a[n-1]);

cout<<anss.size()<<endl;
for (int i = 0; i < anss.size(); i++)
{
    cout<<anss[i]<<" ";
}
nl

 
     }  
 




  return 0;
}

/*
  Documentation:
   


*/