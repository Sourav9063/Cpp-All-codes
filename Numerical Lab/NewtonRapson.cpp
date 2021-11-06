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
double binPow(double n, int p) {
    double ret = 1.0;
    while (p) {
        if (p & 1)
            ret *= n;
        n *= n;
        p >>= 1;
    }
    return ret;
}


double coeff[100];
int degree = 0;
double fpoly(double x) {
  double ans = 0;
  for (int i = degree; i >= 0; i--)
    ans += coeff[i] * binPow(x, i);
  return ans;
}

double fpoly_derivative(double x) {
  double ans = 0;
  for (int i = degree; i > 0; i--)
    ans += coeff[i] * i * binPow(x, i - 1);
  return ans;
}



double newton_raphson(double (*f)(double), double (*fp)(double), double a, double b, double eps, int n) {
  double x1;
  if (f(a) == 0) {
    cout << "Root is" << a << "\n";
    return a;
  }
  else if (f(b) == 0) {
    cout << "Root is" << b << "\n";
    return b;
  }

  else if (f(a) < f(b)) {
    x1 = a;
  }

  else {
    x1 = b;
  }
  double x2;
  int k = 0;
  while (fabs(f(x1)) > eps && k < n) {
    x2 = x1 - f(x1) / fp(x1);
    x1 = x2;
    k++;
  }
  cout << "Root is " << x1 << endl;
  return x1;
}
// newton_raphson method for finding a root of a polynominal function
double newton_raphson() {
  double a, b, eps, n;
  cout << "Enter the value of a, b, eps, n" << endl;
  cin >> a >> b >> eps >> n;
  return newton_raphson(fpoly, fpoly_derivative, a, b, eps, n);
}



int main()
{


  // #ifndef ONLINE_JUDGE
  //   freopen("C:\\Users\\my_code\\input.in", "r", stdin);
  //   freopen("C:\\Users\\my_code\\output.in", "w", stdout);
  // #endif
  while (1) {
    cout << "Enter polynominal degree\nEnter any negetive number to exit\n";
    cin >> degree;
    if (degree < 0)break;
    cout << "Enter the coeffecients\n";
    for (int i = degree; i >= 0; i--)
      cin >> coeff[i];
    newton_raphson();
  }




  return 0;
}

/*
  Documentation:



*/