//                      Name: https://codeforces.com/problemset/problem/1144/A
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
      string s;
      cin>>s;
      sort(all(s));
      bool f=true;
      for (int i = 1; i < s.size(); i++)
      {
          if(s[i]!=s[i-1]+1)f=false;
      }
      cout<<(f?"YES":"NO");nl

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