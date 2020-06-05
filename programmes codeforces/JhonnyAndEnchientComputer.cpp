//                      Name: https://codeforces.com/contest/1362/problem/A
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
// ll tmp, ans;

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
        ll a, b;
        cin >> a >> b;

        if (a == b)
            cout << 0 << endl;
        else
        {
            int cnt = 0;
            ll mx = max(a, b), mn = min(a, b);
            bool f = false;
            // cout<<mx/mn<<" "<<mx%mn;pt
            while (mn <= mx)
            {
                if (mn == mx)
                {
                    f = true;
                    break;
                }

                mn = mn << 1;
                cnt++;
            }
            if (f)
            {
                ll tmpa = 0;
                tmpa = cnt / 3;
                cnt %= 3;
                tmpa += cnt / 2;
                cnt %= 2;
                tmpa += cnt;
                cout << tmpa << endl;
                // cout<<cnt<<endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
    }

    return 0;
}

/*
  Documentation:

  if a==b 0;
  if a>b
  a%b!=0 -1
  if b>a 
  b%a!=0 -1; 


*/