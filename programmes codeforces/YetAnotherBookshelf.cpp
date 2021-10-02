//                      Name: 
#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
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
template <class T>inline void parray(T* st, T* nd){while(st<nd)cout<<*st++<<' ';nl/*sf("%d", st++);*/}

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
        int n;
        cin >> n;
        int left0 = 0, inner0 = 0, right0 = 0, a[n];
        bool first1 = false;
        for (size_t i = 0; i < n; i++)
        {
            int tmp;
            cin >> tmp;
            a[i] = tmp;
            if(tmp==0){
                if(first1)
                    inner0++;
                    else
                    {
                        left0++;
                    }
                    
            }
            else
                first1 = true;
        }
        for (size_t i = n-1; i>0; i--)
        {
            
            if(a[i]==1)
                break;
            right0++;
        }
        // deb(left0)
        // deb(inner0)
        // deb(right0)

        cout << inner0-right0 << endl;
    }  





  return 0;
}

/*
  Documentation:
   


*/