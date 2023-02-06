//                      Name: Bisection.cpp
// #pragma GCC optimize("Ofast")
// #pragma GCC optimize ("unroll-loops")
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
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

double a = 0, b = 0, c = 0, d = 0;
ll degree = 0;
double coeff[100];
double binPow(double x, ll n) {
    double res = 1; 
    while (n) {
        if (n & 1)res *= x;
        x *= x;
        n >>= 1;
    }
    return res;
}
double fCubic(double x)
{
    return a * x * x * x + b * x * x + c * x + d;
}

double fBinomial(double x)
{
    return a * x * x + b * x + c;
}
// create a general polynominal function
double fGeneral(double x)
{
    double ans = 0;
    for (ll i = degree; i >= 0; i--)
    {
        ans += binPow(x, i) * coeff[i];
    }
    return ans;
}

double bisection(double f(double), double low, double high, double eps, int n)
{

    int k = 0;
    if (f(low) * f(high) > 0)
    {
        cout << "No root in this interval" << endl;
        return 0;
    }
    else if (f(low) == 0)
    {
        cout << "Root is " << low << endl;
        return low;
    }
    else if (f(high) == 0) {
        cout << "Root is " << high << endl;
        return high;
    }

    double mid = (low + high) / 2.0;
    while (fabs(high - low) > eps && k < n)
    {
        if (f(mid) == 0)
            break;
        if (f(low) * f(mid) < 0)
            high = mid;
        else
            low = mid;
        mid = (low + high) / 2.0;
        k++;
    }
    cout << "Root is " << mid << endl;
    return mid;

}
double bisection(double f(double))
{
    // Sourav
    //      #ifndef ONLINE_JUDGE
    //                 freopen("C:\\Users\\my_code\\input.in", "r", stdin); 
    //                 freopen("C:\\Users\\my_code\\output.in", "w", stdout);
    //      #endif


    double low, high;
    double eps;
    int n;
    cout << "Input bisection intervals a b\n";
    cin >> low >> high;
    cout << "Input bisection eps\n";
    cin >> eps;
    cout << "Input bisection itaration limit\n";
    cin >> n;

    int k = 0;
    if (f(low) * f(high) > 0)
    {
        cout << "No root in this interval" << endl;
        return 0;
    }
    else if (f(low) == 0)
    {
        cout << "Root is " << low << endl;
        return low;
    }
    else if (f(high) == 0) {
        cout << "Root is " << high << endl;
        return high;
    }

    double mid = (low + high) / 2.0;
    while (fabs(high - low) > eps && k < n)
    {
        if (f(mid) == 0)
            break;
        if (f(low) * f(mid) < 0)
            high = mid;
        else
            low = mid;
        mid = (low + high) / 2.0;
        k++;
    }
    cout << "Root is " << mid << endl;
    return mid;
}



int main()
{
    // Sourav;

    // #ifndef ONLINE_JUDGE
    //     freopen("C:\\Users\\my_code\\input.in", "r", stdin);
    //     freopen("C:\\Users\\my_code\\output.in", "w", stdout);
    // #endif
    // cout << "For binomial equation input 'b'.\nFor cubic equation input 'c'.\nPress anything else to exit\n";
    string ch;
    while (1) {
        cout << "*For binomial equation input 'b'.\n*For cubic equation input 'c'\n*For general polynominal equation input 'd'.\nEnter anything else to exit\n";
        cin >> ch;
        if (ch == "b")
        {
            cout << "ax^2+bx+c" << endl;
            cout << "Enter a b c\n";
            cin >> a >> b >> c;
            cout << "Do you want to specify the a, b and eps?\n[y/n]\n";
            string ch2;
            cin >> ch2;
            if (ch2 == "y")
            {

                double x = bisection(fBinomial);
            }
            else
                double x = bisection(fBinomial, -100, 100, 0.00001, 100);
        }
        else if (ch == "c")
        {
            cout << "ax^3+bx^2+cx+d" << endl;
            cout << "Enter a b c d\n";
            cin >> a >> b >> c >> d;
            cout << "Do you want to specify the a, b and eps?\n[y/n]\n";
            string ch2;
            cin >> ch2;
            if (ch2 == "y")
            {
                double x = bisection(fCubic);
            }
            else


                double x = bisection(fCubic, -100, 100, 0.00001, 100);
        }
        else if (ch == "d")
        {
            cout << "Enter degree of polynominal\n";
            cin >> degree;
            cout << "Enter coeffecients of polynominal\n";
            for (ll i = degree; i >= 0; i--)
            {
                cin >> coeff[i];
            }
            cout << "Do you want to specify the a, b and eps?\n[y/n]\n";
            string ch2;
            cin >> ch2;
            if (ch2 == "y")
            {

                double x = bisection(fGeneral);
            }
            else
                double x = bisection(fGeneral, -100, 100, 0.00001, 100);
        }
        else
            break;

    }




    return 0;
}

/*
  Documentation:



*/