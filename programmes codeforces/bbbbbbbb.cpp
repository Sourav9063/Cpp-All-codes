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
        int n; cin >> n;
        vector<int> a(n + 2);
        ll sum = 0;
        for (auto& x : a) {
            cin >> x;
            sum += x;
        }
        sort(a.begin(), a.end());
        if (sum - a[n + 1] - a[n] == a[n]) {
            for (int i = 0; i < n; i++) {
                cout << a[i] << ' ';
            }
            cout << '\n';
        }
        else {
            sum -= a[n + 1];
            int f = 0;
            for (int i = 0; i <= n; i++) {
                if (sum - a[i] == a[n + 1]) {
                    for (int j = 0; j <= n; j++) {
                        if (i != j) {
                            cout << a[j] << ' ';
                        }
                    }
                    cout << '\n';
                    f = 1;
                    break;
                }
            }
            if (!f) {
                cout << -1 << '\n';
            }
        }

    }





    return 0;
}

/*
  Documentation:



*/