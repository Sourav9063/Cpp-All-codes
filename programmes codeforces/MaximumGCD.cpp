//                      Name: 
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

 
 bool arr[500100];



void seive( ll n)
{
   for (int i = 1; i < n+10; i++)
   {
       arr[i]=true;
   }
   


   
    for (ll p = 2; p * p <= n; p++)
    {
        if (arr[p])
        {
            for (ull i = p * p; i <= n; i += p)
            {
                arr[i] = false;

            }
        }
    }

}






int main()
{
Sourav;

 #ifndef ONLINE_JUDGE
            freopen("C:\\Users\\my_code\\input.in", "r", stdin); 
            freopen("C:\\Users\\my_code\\output.in", "w", stdout);
 #endif


 ll t;
 cin>>t;
//  seive(500100);

    while(t--)
    {
      ll n;
      cin>>n;
    
cout<<n/2<<endl;

    }  




  return 0;
}

/*
  Documentation:
   


*/