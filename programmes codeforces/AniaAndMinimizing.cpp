//                      Name: https://codeforces.com/problemset/problem/1230/B
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

    ll n, k;
    string x;
    cin >> n >> k >> x;
  if(n==1&&k!=0) cout<<"0";
    else if(n>=1&&k==0) cout<<x<<endl;
    else
    {
        if(x[0]!='1') x[0]='1',k--;
        for(int i=1;i<n;i++)
        {
            if(k==0) break;
            if(x[i]!='0')
            {
                x[i]='0',k--;
            }
        }
        cout<<x<<endl;
    }
    return 0;
}

/*
  Documentation:
   


*/