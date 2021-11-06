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

double f(double x, double y) { return x + y; }

double eulerWithStep(double (*f)(double, double), double y0, double x0, double x1, int n, double* y, double* x)
{
  y[0] = y0;
  x[0] = x0;
  double h = (x1 - x0) / n;
  for (int i = 1; i <= n; i++)
  {
    if (x0 >= x1)break;
    x[i] = x[i - 1] + h;
    y[i] = y[i - 1] + h * f(x[i - 1], y[i - 1]);
  }
  return y[n];
}

double eulerWithStepSize(double (*f)(double, double), double y0, double x0, double x1, double h, double* y, double* x)
{
  y[0] = y0;
  x[0] = x0;
  int n = (x1 - x0) / h;
  for (int i = 1; i <= n; i++)
  {
    // if (x0 >= x1)break;
    x[i] = x[i - 1] + h;
    y[i] = y[i - 1] + h * f(x[i - 1], y[i - 1]);
  }
  return y[n];
}

int main()
{
//   Sourav;

// #ifndef ONLINE_JUDGE
//   freopen("C:\\Users\\my_code\\input.in", "r", stdin);
//   freopen("C:\\Users\\my_code\\output.in", "w", stdout);
// #endif

  double y[100];
  double x[100];
  cout << eulerWithStep(f, 1, 0, 1, 10, y, x);nl
  cout<<eulerWithStepSize(f, 1, 0, 1, 0.1, y, x);nl


  // parray(y, y + 10);
  return 0;
}

/*
  Documentation:



*/