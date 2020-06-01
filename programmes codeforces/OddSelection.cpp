//                      Name: https://codeforces.com/contest/1363/problem/A
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
      ll n,x;
      cin>>n>>x;
      ll a[n];
      ll odd=0,even=0;
      for (int i = 0; i < n; i++)
      {
          cin>>a[i];
          if(a[i]%2==1)odd++;
          else
          {
              even++;
          }
          
      }
      
    //   double dx=x;
    //   ll tx=ceil(dx/2);
      
     if((even==0&&x%2==0)||odd==0||x>n||(n==x&&odd%2==0))cout<<"NO"<<endl;
     else cout<<"YES"<<endl;
    
    
      

    }  





  return 0;
}

/*
  Documentation:
   


*/