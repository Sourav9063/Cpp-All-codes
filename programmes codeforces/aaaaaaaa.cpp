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
long long m = 1000000007;

ll binpow(ll a, ll b) {

  a %= m;

 ll res = 1;

  while (b > 0) {

    if (b & 1)

      res = res * a % m;

    a = a * a % m;

    b >>= 1;

  }

  return res;

}

int main() {
  Sourav
#ifndef ONLINE_JUDGE
            freopen("C:\\Users\\my_code\\input.in", "r", stdin); 
            freopen("C:\\Users\\my_code\\output.in", "w", stdout);
 #endif


ll  a;

  cin >> a;

  string b;

  cin >> b;

 ll res = 0;

  for (int i = 0;i < b.size();i++) {

    res = (res * 10 + b[i] - '0') % (m-1);

  }

  cout << binpow(a, res) << endl;








}

/*
  Documentation:



*/