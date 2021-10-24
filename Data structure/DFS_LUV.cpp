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
#define MX 100005
vector<vector<ll>>graph(MX);
bool isVisited[MX];
void dfs(ll par) {

    isVisited[par] = true;
    // deb(par)
        for (auto child : graph[par]) {

            if (isVisited[child])continue;

            dfs(child);
        }
}
int main()
{
    Sourav;

#ifndef ONLINE_JUDGE
    freopen("C:\\Users\\my_code\\input.in", "r", stdin);
    freopen("C:\\Users\\my_code\\output.in", "w", stdout);
#endif

    ll n, e;
    cin >> n >> e;
    for (ll i = 0; i < e; i++) {
        ll x, y;
        cin >> x >> y;
        graph[x].pb(y);
        graph[y].pb(x);
    }
    ll count = 0;

    for (size_t i = 1; i <= n; i++)
    {
        if (isVisited[i])continue;
    dfs(i);
        count++;
    }
    // cout << graph[1][0] << endl;
    // graph.clear();
    // cout << graph[1][0] << endl;


    cout << count << endl;



    return 0;
}

/*
  Documentation:



*/