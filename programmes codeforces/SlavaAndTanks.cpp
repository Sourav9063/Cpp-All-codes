//                      Name: https://codeforces.com/problemset/problem/877/C
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

vector<int>vp;

for (int i = 2; i <= n; i+=2)
{
   
    vp.pb(i); 
}


for (int i = 1; i <= n; i+=2)
{
   vp.pb(i); 
    
}


for (int i = 2; i <= n; i+=2)
{
    vp.pb(i); 
    
}


cout<<vp.size()<<endl;
for (auto i :vp)
{
   cout<<i<<" ";
}


  return 0;
}

/*
  Documentation:
   


*/