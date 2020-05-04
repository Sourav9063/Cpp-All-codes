//                      Name:
#include<bits/stdc++.h>
using namespace std;

#define lli long long int //lld
#define ulli unsigned long long int //llu
#define db double //lf
#define Ld long double //Lf

#define pt cout<<"*"<<endl;
#define nl cout<<endl;

#define pb(a)    emplace_back(a)
#define all(x)   (x).begin(),(x).end()
#define Sort(x)  sort(all((x)))
#define rSort(x) sort((x).rbegin(),(x).rend())

#define Sourav ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

template <class T>inline void sarray(T* st, T* nd) {while (st < nd)cin >> *st++;/*sf("%d", st++);*/}
template <class T>inline void parray(T* st, T* nd) {while (st < nd)cout << *st++ << endl;/*sf("%d", st++);*/}

int main()
{
    Sourav;

    int n, s = 0, m, k, x, t = 0;
    int b[20], c[20];
    cin >> n >> m >> k;
    lli a[m + 1];
    for (int i = 0; i < m + 1; i++)
        cin >> a[i];
    x = a[m];
    for (int i = 19; i >= 0; i--)
    {
        b[i] = x % 2;
        x /= 2;
    }
    for (int i = 0; i < m; i++)
    {
        s = 0;
        x = a[i];
        for (int i = 19; i >= 0; i--)
        {
            c[i] = x % 2;
            x /= 2;
        }
        for (int j = 0; j < 20; j++)
            if (b[j] != c[j])
                s++;
        if (s <= k)
            t++;
    }
    cout << t << endl;
    return 0;



}

/*
    Documentation

*/
/*
Number of digits in N =floor(log10(N)) + 1;
n = n << 1;   // Multiply n with 2  use >> for div
*/
