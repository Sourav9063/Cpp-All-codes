//                      Name: https://codeforces.com/contest/1249/problem/B2
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
ll tmp;
const int N = 2e5+7;
int p[N], ans[N];
 
int main()
{
Sourav;

 #ifndef ONLINE_JUDGE
            freopen("C:\\Users\\my_code\\input.in", "r", stdin); 
            freopen("C:\\Users\\my_code\\output.in", "w", stdout);
 #endif



    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin>>t;
 
    while (t--) {
        int n;
        cin>>n;
 
        for (int i=1; i<=n; i++)     cin>>p[i];
        memset(ans, 0, sizeof ans);
 
        for (int i=1; i<=n; i++) {
            if (ans[i]) continue;
 
            vector<int> v;
            int u = i, cnt = 0;
            while (true) {
                v.push_back(u);
                u = p[u];
                ++cnt;
                if (u == i)     break;
            }
 
            for (auto x: v)  ans[x] = cnt;
        }
 
        for (int i=1; i<=n; i++)    cout<<ans[i]<<" "; cout<<endl;
    }





  return 0;
}

/*
  Documentation:
   


*/