//                      Name: Gifts Fixing
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
template <class T>inline void parray(T* st, T* nd){while(st<nd)cout<<*st++<<endl;/*sf("%d", st++);*/}

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
        int c[n], o[n];
        int minc, mino;
        ll ans = 0;
        minc = mino = INT32_MAX;
        for (size_t i = 0; i < n; i++)
        {
            cin >> c[i];
            minc = min(minc, c[i]);
        }
        for (size_t i = 0; i < n; i++)
        {
            cin >> o[i];
            mino = min(mino, o[i]);
        }
        for (size_t i = 0; i < n; i++)
        {
            int curc = c[i];
            int curo = o[i];
            if(curc>minc&&curo>mino)
                {
                    int dif = max((curc - minc) ,(curo - mino));
                    ans += dif;
                }
            else if(curc>minc){
                ans += (curc - minc);
            }
            else if(curo>mino){
                ans += (curo - mino);
            }

            // deb(ans)
        }
        cout << ans << endl;
    }  





  return 0;
}

/*
  Documentation:
   


*/