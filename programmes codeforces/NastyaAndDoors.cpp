//                      Name: https://codeforces.com/problemset/problem/1341/B
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
        cout << *st++ << " "; /*sf("%d", st++);*/
}
ll tmp, ans;

int main()
{
    Sourav;
#ifndef ONLINE_JUDGE
    freopen("C:\\Users\\my_code\\input.in", "r", stdin);
    freopen("C:\\Users\\my_code\\output.in", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll arr[n];
        ll peaks[n + 1] = {0};
        ll p = 0;
        ans = 0;
        sarray(arr, arr + n);
        for (ll i = 1; i < n - 1; i++)
        {
            if (arr[i - 1] < arr[i] && arr[i] > arr[i + 1])
            {
                p++;
                peaks[i + 1] = 1;
                // deb(i);
            }
        }
        // deb(p)
            // parray(peaks + 1, peaks + n);
        // nl
            ll l = 0;
        for (int i = 1; i <= n - k; i++)
        {
            tmp = 0;
            int j;
            int tl;
            for (j = i; j < i + k; j++)
            {
                if (peaks[j] == 1)
                {
                    tl = j;
                    tmp++;
                }
            }

            if (tmp > ans)
            {
                ans = tmp;

                l = tl;
            }
        }

        cout <<ans+1<<" "<<l;nl
    }

    return 0;
}

/*
  Documentation:
   


int power_x(int x, unsigned y)
{
    if(y==0)
        return 1;
    if(!(y&1))
        return power_x(x,y>>1)*power_x(x,y>>1);
    return x*power_x(x,y>>1)*power_x(x,y>>1);
}

*/