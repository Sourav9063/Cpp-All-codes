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

vector<int>graph[200010];
bool isVisited[200010];
bool verticesDegree2;
void dfs(int v) {

    isVisited[v] = true;
    if (graph[v].size() != 2)verticesDegree2 = false;
    for (auto child : graph[v]) {
        if (!isVisited[child])dfs(child);
    }

}

int main()
{
    Sourav

#ifndef ONLINE_JUDGE
    freopen("C:\\Users\\my_code\\input.in", "r", stdin);
    freopen("C:\\Users\\my_code\\output.in", "w", stdout);
#endif

    int v, e;
    cin >> v >> e;
    for (size_t i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[u].pb(v);
        graph[v].pb(u);

    }

    int ans = 0;
    for (int i = 1; i < v; i++)
    {
        if (!isVisited[i]) {
            verticesDegree2 = true;
            dfs(i);
            if (verticesDegree2)ans++;
        }
    }
    
    cout << ans << endl;



    return 0;
}

/*
  Documentation:



*/