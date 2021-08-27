//                      Name:
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

int main()
{
    Sourav;

#ifndef ONLINE_JUDGE
    freopen("C:\\Users\\my_code\\input.in", "r", stdin);
    freopen("C:\\Users\\my_code\\output.in", "w", stdout);
#endif
    {
        float k1, k2, x0, l, y0, h, x1, y1;
        int n, i;
        printf("enter the value of n \n");
        scanf("%d", &n);
        printf("enter the initial point x0, last point L and initial condition y0:\n");
        scanf("%f %f %f", &x0, &l, &y0);
        h = (l - x0) / n;
        for (i = 1; i <= n; i++)
        {
            x1 = x0 + h;
            k1 = -h * y0;
            k2 = -h * (y0 + k1);
            y1 = y0 + 0.5 * (k1 + k2);
            printf("x[%d] and y[%d]:%f\t\t%f \n", i, i, x1, y1);
            x0 = x1;
            y0 = y1;
        }
        return 0;
    }

    /*
  Documentation:
   


*/