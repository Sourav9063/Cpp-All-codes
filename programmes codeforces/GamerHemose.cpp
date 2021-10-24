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

int main()
{
  Sourav;

#ifndef ONLINE_JUDGE
  freopen("C:\\Users\\my_code\\input.in", "r", stdin);
  freopen("C:\\Users\\my_code\\output.in", "w", stdout);
#endif
  ll t;
  cin >> t;
  while (t--)
  {
    ll n;
    cin >> n;
    ll k;
    cin >> k;
    vector <ll>arr;
    ll value = 0, count = 0;
    for (ll i = 0; i < k; i++)
    {
      ll tmp;
      cin >> tmp;
      arr.pb(tmp);
    }

    sort(all(arr));
    for (ll i = k - 1; i >= 0; i--) {
      if (value + n - arr[i] <= n) {
        count++;
        value += n - arr[i];
      }
      else
        break;
    }
    ll ans = count, pos = 0, st = k - count;
    for (ll i = k - count; i < k; i++) {
      if (pos >= arr[i]) {
        st++;
        pos += n - arr[st];
        ans--;
      }
      pos += n - arr[i];
    }
    cout << ans << '\n';

  }

  return 0;
}

/*
  Documentation:



*/