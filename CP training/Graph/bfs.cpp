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

unordered_map<int, vector<int>>adj;
int dis[100000];
void bfs(int startNode) {
  memset(dis, -1, sizeof(dis));
  queue<int>q;
  q.push(startNode);
  dis[startNode] = 0;
  while (!q.empty()) {
    int u = q.front();

    q.pop();
    for (auto v : adj[u]) {
      if (dis[v] == -1) {
        dis[v] = dis[u] + 1;
        q.push(v);

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
  cin >> t;
  for (int j = 1;j <= t;j++)
  {

    int n, e;
    cin >> n >> e;
    adj.clear();
    for (int i = 0; i < e; i++)
    {
      int u, v;
      cin >> u >> v;
      adj[u].pb(v);
      adj[v].pb(u);
    }
    int s, d;
    cin >> s >> d;
    bfs(s);
    // cout << dis[d] << "\n";
    int tmp[n];
    int node = 0;
    for (int i = 0; i < n; i++)
    {
      // tmp.pb(dis[i]);
      // cout << dis[i] << " ";
      tmp[i] = dis[i];

    }

    // memset(dis, -1, sizeof(dis));
    bfs(d);
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
      ans = max(ans, dis[i] + tmp[i]);
    }

    cout << "Case " << j << ": " << ans << "\n";



  }



  return 0;
}

/*
  Documentation:



*/