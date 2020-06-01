//                      Name: https://codeforces.com/contest/1359/problem/B
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
// ll tmp,ans;

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
      ll n,m,x,y;
      cin>>n>>m>>x>>y;
      string s[n];
      for (int i = 0; i < n; i++)
      {
          cin>>s[i];    
      }
      ll ans=0;

      if(2*x<=y)
      {
          for (int i = 0; i < n; i++)
          {
              for (int j = 0; j < m; j++)
              {
                  if(s[i][j]=='.')ans++;
              }
              
          }
          cout<<ans*x<<endl;
      }
      else
      {
          ll sq1=0,sq2=0;
          ll linedot=0;
          for (int i = 0; i < n; i++)
          {
              s[i]+='*';
              for (int j = 0; j <= m; j++)
              {
                  if(s[i][j]=='.')
                  {
                      linedot++;
                  }
                  else
                  {
                      sq2+=linedot/2;
                      sq1+=linedot%2;
                      linedot=0;
                  }
                  
              }
              
          }

          cout<<sq2*y+sq1*x<<endl;
          
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