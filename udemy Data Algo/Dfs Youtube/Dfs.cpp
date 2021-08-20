//                      Name:
#include <bits/stdc++.h>
using namespace std;

#define ll long long int           //lld
#define ull unsigned long long int //llu

#define pt cout << "*" \
                << "\n";
#define nl cout << "\n";
#define deb(x) cout << #x << "=" << x << "\n";

#define pb(a) emplace_back(a)
#define all(x) (x).begin(), (x).end()
#define rSort(x) sort((x).rbegin(), (x).rend())

#define Sourav                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

//template<typename... T>void read(T&... args) {((cin >> args), ...);}
template <class T>
inline void sarray(T *st, T *nd)
{
  while (st < nd)
    cin >> *st++; /*sf("%d", st++);*/
}
template <class T>
inline void parray(T *st, T *nd)
{
  while (st < nd)
    cout << *st++ << endl; /*sf("%d", st++);*/
}
ll tmp, ans;

#define mx 100005
int visited[mx];
vector<int> adj[mx];
void dfs(int k){
  if(!visited[k]){
    deb(k)
    visited[k] = 1;
    for(auto i :adj[k]){
      if(!visited[i]){
        dfs(i);
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
  int n,e;
  cin>>n>>e;
  for (size_t i = 0; i < e; i++)
  {
    int p, q;
    cin >> p >> q;
    adj[p].pb(q);

  }

  dfs(0);
  for (size_t i = 0; i <= n; i++)
  {
    cout << i;
    deb(visited[i])
  }
  
  return 0;
}

/*
  Documentation:
   
https://www.youtube.com/watch?v=zozEqVy-sKA

*/