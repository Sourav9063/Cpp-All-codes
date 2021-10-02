//                      Name:
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
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
    cout << *st++ << ' ';
  nl /*sf("%d", st++);*/
}

main()
{
  Sourav;
#ifndef ONLINE_JUDGE
  freopen("C:\\Users\\my_code\\input.in", "r", stdin);
  freopen("C:\\Users\\my_code\\output.in", "w", stdout);
#endif

  int t;
  cin >> t;
  while (t--)
  {
    while (t--)
    {
      ll n;
      cin >> n;
      vector<ll> v(n);
      priority_queue<pair<ll, ll>> pq;
      for (ll i = 0; i < n; i++)
      {
        cin >> v[i];
        if (v[i])
        {
          pq.push({v[i], i});
        }
      }
      vector<vector<ll>> ans(n,{-1,-1});
      while (pq.size() > 1)
      {
        ll num1 = pq.top().first;
        ll ind1 = pq.top().second + 1;
        pq.pop();
        ll num2 = pq.top().first;
        ll ind2 = pq.top().second + 1;
        pq.pop();
        num1--;
        num2--;
        ans.push_back({ind1, ind2});
        if (num1 > 0)
        {
          pq.push({num1, ind1 - 1});
        }
        if (num2 > 0)
        {
          pq.push({num2, ind2 - 1});
        }
      }
      cout << ans.size() << '\n';
      for (auto itr : ans)
      {
        for (auto it : itr)
        {
          if(it==-1)
            break;
          cout << it << " ";
          
        }
        cout << "\n";
        
      }
    }
  }
  return 0;
}
/*
  Documentation:
   


*/