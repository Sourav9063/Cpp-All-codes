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
vector<ull>vPrime;
bitset<10000000>isPrime;

void seive()
{
    ull n = 100000;
    //suf(n);
    isPrime.flip();
    isPrime[1] = 0;
    vPrime.pb(2);
    for (ull i = 2; i * i < n; i++)
    {
        if (isPrime[i])
        {
            // lp[i] = hp[i] = i;
            for (ull j = i * 2; j < n; j += i)
            {
                isPrime[j] = 0;
                // hp[j] = i;
                // if (lp[j] == 0) {
                //     lp[j] = i;
                // }
            }
        }
    }
    for (ull p = 1; p <= n; p += 2)
    {
        if (isPrime[p])
        {
            vPrime.pb(p);
            //cout<<p<<endl;
        }
    }
}
int main()
{
    Sourav;

#ifndef ONLINE_JUDGE
    freopen("C:\\Users\\my_code\\input.in", "r", stdin);
    freopen("C:\\Users\\my_code\\output.in", "w", stdout);
#endif
    seive();
    
     ll t;
     cin>>t;
        while(t--)
        {
            ll d;
            cin >> d;
            ll tmp = d + 1;
            while (!isPrime[tmp]) {
                tmp++;
            }
            ll tmp2 = tmp + d;
            while (!isPrime[tmp2]) {
                tmp2++;
            }
            cout << tmp * tmp2 << endl;
        }  
    






    return 0;
}

/*
  Documentation:



*/