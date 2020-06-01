//                      Name: https://codeforces.com/problemset/problem/433/B
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

ll n;cin>>n;

ll a[n]={0},sum[n]={0},soSum[n];
ll ac[n];
cin>>a[0];
ac[0]=sum[0]=a[0];
for (ll i = 1; i < n; i++)
{
    cin>>a[i];
    ac[i]=a[i];
    sum[i]=a[i]+sum[i-1];
}

sort(a,a+n);
soSum[0]=a[0];
for (int i = 1; i < n; i++)
{
    soSum[i]=a[i]+soSum[i-1];
}

//  parray(sum,sum+n);
//  parray(soSum,soSum+n);


 ll t;
 cin>>t;
    while(t--)
    {
      ll chk,l,r;
      cin>>chk>>l>>r;
      if(chk==1)
      {
          cout<<sum[r-1]-sum[l-1]+ac[l-1]<<endl;
      }
      else
      {
          cout<<soSum[r-1]-soSum[l-1]+a[l-1]<<endl;
      }

    }  





  return 0;
}

/*
  Documentation:
   


*/