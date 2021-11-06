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


double func(double x, double y)
{
    return 3 * x + y * y;
}



void rangaKutta(double (*f)(double, double), double y0, double x0, double x1, int n, double h, double* y, double* x)
{
    int i;
    double k1, k2, k3, k4;
    y[0] = y0;
    x[0] = x0;
    for (i = 1; i < n; i++)
    {
        k1 = h * f(x[i - 1], y[i - 1]);
        k2 = h * f(x[i - 1] + 0.5 * h, y[i - 1] + 0.5 * k1);
        k3 = h * f(x[i - 1] + 0.5 * h, y[i - 1] + 0.5 * k2);
        k4 = h * f(x[i - 1] + h, y[i - 1] + k3);
        y[i] = y[i - 1] + (k1 + 2 * k2 + 2 * k3 + k4) / 6;
        x[i] = x[i - 1] + h;
    }
}

double rangaKutta2ndWithStep(double (*f)(double, double), double y0, double x0, double x1, int n, double* y, double* x)
{
    double k1, k2;
    double h = (x1 - x0) / n;
    y[0] = y0;
    x[0] = x0;
    for (int i = 1; i <= n; i++)
    {
        k1 = h * f(x[i - 1], y[i - 1]);
        k2 = h * f(x[i - 1] + h, y[i - 1] + k1);
        y[i] = y[i - 1] + .5 * (k1 + k2);
        x[i] = x[i - 1] + h;

        if (fabs(x[i] - x1) <= 0.0000001) {
            return y[i];

        }
    }
}
double rangaKutta2ndWithStepSize(double (*f)(double, double), double y0, double x0, double x1, double h, double* y, double* x)
{
    double k1, k2;
    int n = ceil((x1 - x0) / h);


        y[0] = y0;
        x[0] = x0;
        double check = 1000000.0;
        double ans = 10000.0;
        for (int i = 1; i <= n; i++)
    {
        k1 = h * f(x[i - 1], y[i - 1]);
        k2 = h * f(x[i - 1] + h, y[i - 1] + k1);
        y[i] = y[i - 1] + .5 * (k1 + k2);
        x[i] = x[i - 1] + h;
        if (fabs(x[i] - x1) <= check) {
            check = fabs(x[i] - x1);
            ans = y[i];

        }

    }
    return ans;
}




int main()
{
//     Sourav;

// #ifndef ONLINE_JUDGE
//     freopen("C:\\Users\\my_code\\input.in", "r", stdin);
//     freopen("C:\\Users\\my_code\\output.in", "w", stdout);
// #endif
    double x[1001], y[1001];
    cout << rangaKutta2ndWithStep(func, 1.2, 1, 1.1, 1, y, x);nl
    cout << rangaKutta2ndWithStepSize(func, 1.2, 1, 1.1, 0.02, y, x);nl



        return 0;
}

/*
  Documentation:



*/