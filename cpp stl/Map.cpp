//                      Name:
#include<bits/stdc++.h>
using namespace std;

#define lli long long int //lld
#define ulli unsigned long long int //llu
#define db double //lf
#define Ld long double //Lf

#define pt cout<<"*"<<endl;
#define nl cout<<endl;

#define s2f(a,b) scanf("%d%d",&a,&b)
#define s3f(a,b,c) scanf("%d%d%d",&a,&b,&c)

#define pb(a) push_back(a);
#define all(x)   (x).begin(),(x).end()
#define Sort(x)  sort(all((x)))
#define rSort(x) sort((x).rbegin(),(x).rend())

#define Sourav ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

template <class T>inline void sarray(T* st, T* nd) {while (st < nd)cin >> *st++;/*sf("%d", st++);*/}
template <class T>inline void parray(T* st, T* nd) {while (st < nd)cout << *st++ << endl;/*sf("%d", st++);*/}

int main()
{
    Sourav;

    map<string, int> m;
    map<string, int>::iterator it;

    m["diptp"] = 12;
    m["arnob"] = 100;
    cout << m["diptp"] << endl;

    m.insert(make_pair("sourav", 63));
    it = m.begin();


    cout << it->first << endl;
    cout << it->second << endl;


    for (it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << " ";
        cout << it->second << endl;


    }
    return 0;
}

/*
    Documentation
    map uses unique key and not unique value
    key ta sort hoye jabe

    https://www.youtube.com/watch?v=fGCJIOWANIg
*/
/*
Number of digits in N =floor(log10(N)) + 1;
n = n << 1;   // Multiply n with 2
n = n >> 1;   // Divide n by 2
*/
