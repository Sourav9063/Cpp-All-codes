//                      Name: https://codeforces.com/problemset/problem/1136/A
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

int n;
cin>>n;

vector<pair<int,int>>Vp;

for (int i = 0; i < n; i++)
{
    int u,v;
    cin>>u>>v;
 for (int j = u; j <= v; j++)
 {

   Vp.pb(make_pair(i,j));
    
 }
 
    
}
int k;
cin>>k;
// for (int i = 0; i < Vp.size(); i++)
// {
//   cout<<Vp[i].first<<" "<<Vp[i].second<<endl;
// }


for (int i = 0; i < Vp.size(); i++)
{
  if(Vp[i].second==k){
    cout<<n-Vp[i].first<<endl;
    break;
  }
}






  return 0;
}

/*
  Documentation:
   


*/