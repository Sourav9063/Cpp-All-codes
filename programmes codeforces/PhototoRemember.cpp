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
struct WxH
{
    int width;
    int height;
};
int main()
{
    Sourav;

#ifndef ONLINE_JUDGE
    freopen("C:\\Users\\my_code\\input.in", "r", stdin);
    freopen("C:\\Users\\my_code\\output.in", "w", stdout);
#endif

    ll n;
    cin >> n;
    ll widthTotal = 0;
    vector<WxH> list(n);
    // vector<int> heights;
    int mxheight = -1, mxheight2nd = -1;
    for (size_t i = 0; i < n; i++)
    {
        cin >> list[i].width;
        cin >> list[i].height;
        widthTotal += list[i].width;
        if (mxheight < list[i].height)
        {
            mxheight2nd = mxheight;
            mxheight = list[i].height;
        }
        else {
            if( list[i].height>mxheight2nd){
                mxheight2nd = list[i].height;
            }

        }

        // heights.pb(list[i].height);
    }
    // rSort(heights);

    for (size_t i = 0; i < n; i++)
    {
        if (list[i].height == mxheight)
        {
            cout << (widthTotal - list[i].width) * mxheight2nd << " ";
        }
        else{
            cout << (widthTotal - list[i].width) * mxheight << " ";
        }
    }

    return 0;
}

/*
  Documentation:
   


*/