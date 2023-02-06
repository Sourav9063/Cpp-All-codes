//                      Name: 
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
template <class T>inline void parray(T* st, T* nd) { while (st < nd)cout << *st++ << endl;/*sf("%d", st++);*/ }
ll tmp, ans;
vector<ull>vPrime;

bitset<10000010>isPrime;
void seive()
{
    ull n = 1000000;
    //suf(n);

    isPrime.flip();
    isPrime[1] = 0;
    vPrime.pb(2);
    for (ull i = 2; i * i <= n; i++)
    {
       
            if (isPrime[i])
            {
                for (ull j = i * i; j <= n; j += i)
                {
                    isPrime[j] = 0;
                }
            }
    }
    for (ull p = 1; p <= n; p += 2)
    {
        if (isPrime[p])
        {
            vPrime.pb(p);
            if(p%100==91)
            cout << p << endl;
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
// deb(isPrime[997])
    // for (size_t i = 0; i < 1000; i++)
    // {
    //     ll tmp;
    //     cin >> tmp;
    //     if (!isPrime[tmp]||vPrime[i]!=tmp) { cout << tmp;nl }
    // }




    return 0;
}

/*
  Documentation:



*/