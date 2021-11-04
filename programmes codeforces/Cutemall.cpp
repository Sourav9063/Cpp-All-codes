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
template <class T>inline void sarray(T* st, T* nd) { while (st < nd)cin >> *st++;/*sf("%d", st++);*/ }
template <class T>inline void parray(T* st, T* nd) { while (st < nd)cout << *st++ << ' ';nl/*sf("%d", st++);*/ }
vector<int>graph[100010];
bool vis[100010];
vector<int>numOfEdge(100010, 1);

void dfs(int ver) {
    // cout << "init";   deb(ver);
    vis[ver] = true;
    for (auto child : graph[ver]) {
        if (!vis[child]) {
            dfs(child);
            // deb(ver)deb(child);
            // deb(numOfEdge[child])
            numOfEdge[ver] += numOfEdge[child];
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
    int n;
    cin >> n;
    for (size_t i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[u].pb(v);
        graph[v].pb(u);
    }
    ll ans = 0;

    if (n % 2 == 1)cout << -1 << endl;
    else {
        for (size_t i = 1; i <= n; i++)
        {
            if (!vis[i])dfs(i);
        }
        for (int i = 2; i <= n; i++)
        {
            // deb(numOfEdge[i]);
            if (numOfEdge[i] % 2 == 0)ans++;
        }   cout << ans << endl;
    }






    return 0;
}

/*
  Documentation:



*/