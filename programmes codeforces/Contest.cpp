//                      Name: https://codeforces.com/problemset/problem/501/A
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

double a,b,c,d;
cin>>a>>b>>c>>d;
double m,v;

m=max((3*a)/10,a-(a*c)/250);
v=max((3*b)/10,b-(b*d)/250);

//  deb(m)deb(v)
if(m>v)cout<<"Misha"<<endl;
else if(v>m)
{
    cout<<"Vasya"<<endl;

    
}
else
{
    cout<<"Tie" <<endl;
}






  return 0;
}

/*
  Documentation:
   
   ceil use korbo???


*/