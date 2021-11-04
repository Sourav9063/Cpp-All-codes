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
template <class T>inline void sarray(T* st, T* nd){while(st<nd)cin>>*st++;/*sf("%d", st++);*/}
template <class T>inline void parray(T* st, T* nd){while(st<nd)cout<<*st++<<' ';nl/*sf("%d", st++);*/}

//create a general polynominal function

double coeff[100];
int degree = 0;
double fpoly(double x) {
    double ans = 0;
    for(int i=0; i<=degree; i++)
        ans += coeff[i]*pow(x, i);
    return ans;
}
// create a function that return the derivative of the polynominal function
double fpoly_derivative(double x) {
    double ans = 0;
    for(int i=1; i<=degree; i++)
        ans += coeff[i]*i*pow(x, i-1);
    return ans;
}

double newton_raphson(double (*f)(double), double (*fp)(double), double a, double b, double eps, int n) {
    double x1 = (a+b)/2;
    double x2;
    int k = 0;
    while (abs(f(x1)) > eps&&k < n) {
        x2 = x1 - f(x1)/fp(x1);
        x1 = x2;
        k++;
    }
    return x1;
}



int main()
      {
Sourav;

 #ifndef ONLINE_JUDGE
            freopen("C:\\Users\\my_code\\input.in", "r", stdin); 
            freopen("C:\\Users\\my_code\\output.in", "w", stdout);
 #endif






  return 0;
}

/*
  Documentation:
   


*/