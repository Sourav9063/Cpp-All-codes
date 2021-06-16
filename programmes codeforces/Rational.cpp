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
      ll n,k;
      cin>>n>>k;
      int af[1000000]={0};
      int a[n], ar[k];
      set<int>st;
    //   sarray(a,a+n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        st.insert(a[i]);
        af[a[i]]++;
    }
    int uniq=st.size();
vector<int>unqV;
    for (auto i:st)
    {
        unqV.pb(i);
    }
    
      sarray(ar,ar+k);
      sort(a,a+n);
      sort(ar,ar+k);

        ll ans=0;
        int tmp=n;
    for(int i=0;i<k;i++){

        

        ans+=(a[tmp-1]+a[tmp-ar[i]]);
    tmp-=ar[i];
    // deb(tmp)

    }

cout<<ans<<endl;


    }  





  return 0;
}

/*
  Documentation:
   


*/