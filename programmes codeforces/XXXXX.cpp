//                      Name: https://codeforces.com/contest/1364/problem/A
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
    ll  sum=0;
      ll div=0,nonDiv=0;
      vector<ll>nonDivLoc;
      for (ll i = 0; i < n; i++)
      {
          cin>>a[i];
          sum+=a[i];
          if(a[i]%x==0)div++;
          else
          {
              nonDiv++;

              nonDivLoc.pb(i);
          }
          
      }

      if(sum%x==0&&nonDiv==0)cout<<-1<<endl;
      else if (sum%x!=0)
      {
          cout<<n<<endl;
      }
      else
      {
          cout<<n-min(nonDivLoc[0]+1,(n-1)-nonDivLoc[nonDivLoc.size()-1]+1)<<endl;
      }
      
      

    }  





  return 0;
}

/*
  Documentation:
   


*/