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
long double mult(long double x, long double n) {
    long double res = 1;
    while (n--) {
        res *= x;
        // deb(res)
    }

    return res;

}
long double nthRoot(long double x, long double n) {
    long double low = 1, high = x, mid;
    while (high - low > 0.000000001) {
        mid = (low + high) / 2;
        if (mult(mid, n) < x) { low = mid; }
        else { high = mid; }

    }

    return mid;

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

        ll x;
        cin >> x;
        ll tmp = cbrt(x) + 1;
        // deb(tmp)
        bool found = false;
        for (ll i = 1; i <= tmp; i++)
        {
            ll lo = 1, hi = tmp;

            ll mid = (hi + lo) / 2;

            ll tmpmul = i * i * i;
            if ((tmpmul + mid * mid * mid) == x) {
                found = true;
                break;
            }
            while (hi - lo > 1&&!found) {
                mid = (hi + lo) / 2;
                // if (i == 5779) {
                //     deb(mid)
                //         deb(i * i * i + mid * mid * mid)
                // }
                // mid = j;
                // deb(i)
                // deb(mid)
                if ((tmpmul + mid * mid * mid) == x) {
                    found = true;
                    break;
                }
                else if ((tmpmul + mid * mid * mid) < x) {
                    lo = mid;
                }
                else {
                    hi = mid;
                    // cout << "YES" << endl;

                }
            }
            // deb(mid)
        }
        cout << (found ? "YES" : "NO") << endl;


    }





    return 0;
}

/*
  Documentation:



*/