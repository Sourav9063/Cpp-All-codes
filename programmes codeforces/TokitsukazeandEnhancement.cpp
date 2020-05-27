//                      Name: https://codeforces.com/problemset/problem/1191/A
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
    
    

    vector<pair<int,string>>v(4);

//     v.pb(make_pair(1,"A"));
// v.pb(make_pair(3,"B"));
// v.pb(make_pair(2,"C"));
// v.pb(make_pair(0,"D"));

int n;
cin>>n;
tmp=n%4;
if(tmp==1)cout<<0<<" A"<<endl;
else if (tmp==2)
{
    cout<<1<<" B";nl;

}
else if (tmp==3)
{
    cout<<2<<" A"<<endl;
}
else if (tmp==0)
{
    cout<<1<<" A"<<endl;
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