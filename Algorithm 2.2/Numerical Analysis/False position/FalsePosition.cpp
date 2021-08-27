//                      Name: False Position
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

#define Sourav                        \
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
ll tmp, ans;

#define MAX_ITER 100

// An example function whose solution is determined using
// Bisection Method. The function is x^3 - x^2  + 2
double func(double x)
{
    return x * x * x - x * x + 2;
}

// Prints root of func(x) in interval [a, b]
void regulaFalsi(double a, double b)
{
    if (func(a) * func(b) >= 0)
    {
        cout << "You have not assumed right a and b\n";
        return;
    }

    double c = a; // Initialize result

    for (int i = 0; i < MAX_ITER; i++)
    {
        deb(a)
            deb(b)

            // Find the point that touches x axis
            c = (a * func(b) - b * func(a)) / (func(b) - func(a));
        deb(c)
            // Check if the above found point is root
            if (func(c) == 0) break;

        // Decide the side to repeat the steps
        else if (func(c) * func(a) < 0)
        {
            cout << "b=c" << endl;
            b = c;
        }
        else
        {
            
            cout << "a=c" << endl;
            a = c;
        }
        nl
    }
    cout << "The value of root is : " << c;
}

// Driver program to test above function
int main()
{
    Sourav;

#ifndef ONLINE_JUDGE
    freopen("C:\\Users\\my_code\\input.in", "r", stdin);
    freopen("C:\\Users\\my_code\\output.in", "w", stdout);
#endif

    // Initial values assumed
    double a = -200, b = 300;
    regulaFalsi(a, b);
    return 0;
}

/*
  Documentation:
   


*/