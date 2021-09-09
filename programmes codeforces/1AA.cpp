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
    cout << *st++ << endl; /*sf("%d", st++);*/
}
 int computeXOR(int n)
  {

    // If n is a multiple of 4
    if (n % 4 == 0)
      return n;

    // If n%4 gives remainder 1
    if (n % 4 == 1)
      return 1;

    // If n%4 gives remainder 2
    if (n % 4 == 2)
      return n + 1;

    // If n%4 gives remainder 3
    return 0;
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
  while (t--)
  {
    int a, b;
    cin >> a >> b;
    int beforXOR = computeXOR(a - 1);

    if (beforXOR == b)
    {
      cout << a << endl;
    }

    else
    {
      if (computeXOR(a) == b)
      {
        cout << a + 2 << endl;
      }
      else
      {
        cout << a + 1 << endl;
      }
    }
  }

  return 0;
}

/*
  Documentation:
   


*/