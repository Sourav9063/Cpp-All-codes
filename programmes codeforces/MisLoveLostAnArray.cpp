//                      Name: https://codeforces.com/problemset/problem/1204/B
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


    int n,l,r,mini,maxi=1,x=1,y=1,z;
 
    cin>>n>>l>>r;
 
    mini = (n-l)+1;
    for(int i=1 ; i<l ; i++){
        mini = mini+(x*2);
        x = x*2;
    }
 
    for(int i=1 ; i<r ; i++){
        maxi = maxi + (y*2);
        y = y*2;
    }
    z = n-r;
    maxi = maxi + (z*y);
 
    cout<<mini<<" "<<maxi;




  return 0;
}

/*
  Documentation:
   


*/