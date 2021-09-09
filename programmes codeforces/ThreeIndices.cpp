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
        cout << *st++ << ' ';
    nl /*sf("%d", st++);*/
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
        int n;
        cin >> n;
        bool up = false, down = false;
        int a[n];
        int p[6]={0};
        cin >> a[0];
        for (int i = 1; i < n; i++)
        {
            cin >> a[i];
            if (a[i - 1] < a[i]&&!up)
            {
                up = true;
                p[0] = a[i - 1];
                p[1] = i;
            }
            if(!down&&a[i-1]>a[i]&&up){
                down = true;
                p[2] = a[i - 1];
                p[3] = i;
                p[4] = a[i];
                p[5] = i+1;
            }
            
        }

        // parray(p, p + 6);

        if(p[1]!=0&&p[3]!=0&&p[5]!=0){
            cout << "YES" << endl;
            cout << p[1] << " ";
            cout << p[3] << " ";
            cout << p[5] << " ";
            nl
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}

/*
  Documentation:
   


*/