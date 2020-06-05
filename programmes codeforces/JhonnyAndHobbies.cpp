//                      Name:
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

    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        sarray(a, a + n);
        sort(a, a + n);
        int b[n];
        int i;
        bool f = true;
        for (i = 1; i < 1111; i++)
        {
            f = true;
            for (int j = 0; j < n; j++)
            {
                b[j] = a[j] ^ i;
            }
            sort(b, b + n);
            for (int k = 0; k < n; k++)
            {
                if (b[k] != a[k])
                {

                    f = false;
                    break;
                }
            }

            if (f)
            {
                break;
            }
        }
if(i==1111)cout<<-1<<endl;
else
        cout << i << endl;
    }

    return 0;
}

/*
  Documentation:
   


*/