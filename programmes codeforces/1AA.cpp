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
#define MOD 1000000007
//template<typename... T>void read(T&... args) {((cin >> args), ...);}
template <class T>inline void sarray(T* st, T* nd) { while (st < nd)cin >> *st++;/*sf("%d", st++);*/ }
template <class T>inline void parray(T* st, T* nd) { while (st < nd)cout << *st++ << ' ';nl/*sf("%d", st++);*/ }
ll binpow(ll a, ll b)
{
  ll res = 1;
  a %= MOD;
  while (b > 0)
  {
    if (b & 1)
      res = res * a % MOD;
    a = a * a % MOD;
    b >>= 1;
  }
  return res;
}
int main()
{
  Sourav;

#ifndef ONLINE_JUDGE
  freopen("C:\\Users\\my_code\\input.in", "r", stdin);
  freopen("C:\\Users\\my_code\\output.in", "w", stdout);
#endif
  ll n;
  cin >> n;
  ll pp = 1;
  for (size_t i = 1; i <= n; i++)
  {
    pp *= 2;
  }
  pp -= 2;
  ll ans = binpow(4, pp);
  ans *= 6;
  ans %= MOD;
  if (ans < 0)
    ans += MOD;
  cout << ans << endl;
  return 0;





  return 0;
}

/*
  Documentation:



*/