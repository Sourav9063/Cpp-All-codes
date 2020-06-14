//                      Name: https://codeforces.com/contest/1366/problem/C
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
      int n,m;
      cin>>n>>m;
      int chk=max(n,m)+min(n,m)-1;
      chk/=2;

      int ar[n+1][m+1];
      for (int i = 1; i <= n; i++)
      {
          for (int j = 1; j <= m; j++)
          {
              cin>>ar[i][j];
          }
          
          
      }
ans=0;
if(ar[1][1]!=ar[n][m])ans++;

int z=0,o=0;
      for (int i = 1; i <= chk; i++)
      {
          z=0;o=0;

          for (int j = 1; j <= i; j++)
          {
              if(ar[i-j-1][j]==1)o++;
              else z++;

              if(ar[n-(i)])
              
          }
          


      }
      
      



    }  





  return 0;
}

/*
  Documentation:
   


*/