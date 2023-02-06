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
    int n;
    cin >> n;
    ll a[n];
    int neg = 0;
    ll lowNeg = INT64_MIN;
    ll lowPos = INT64_MAX;
    ll sumPos = 0;
    ll sumNeg = 0;
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
      if (a[i] < 0)
      {


        neg++;
        sumNeg += a[i];
        if (a[i] > lowNeg)
        {
          lowNeg = a[i];
        }
      }
      else {
        sumPos += a[i];
        if (a[i] < lowPos)
        {
          lowPos = a[i];
        }
      }
    }
    sumNeg *= -1;
    if (lowPos == INT64_MAX) {
      lowPos = 0;
      if (neg % 2 == 0) {
        cout << sumPos + sumNeg << endl;
        continue;
      }
      else {
        sumNeg += lowNeg;
        cout << sumPos + sumNeg + lowNeg << endl;
        continue;
      }
    }
    if (lowNeg == INT64_MIN) {
      lowNeg = 0;
      cout << sumPos + sumNeg << endl;
      continue;

    }

    if (neg % 2 == 0)
    {
      cout << sumPos + sumNeg << endl;
    }
    else {
      sumNeg += lowNeg;
      sumPos -= lowPos;

      if (lowNeg * -1 >= lowPos) {
        lowNeg *= -1;
        lowPos *= -1;
        cout << sumPos + sumNeg + lowNeg + lowPos << endl;

      }
      else {
        cout << sumPos + sumNeg + lowNeg + lowPos << endl;
      }

    }

  }





  return 0;
}

/*
  Documentation:



*/