//                      Name: Subarray Pyramid
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
        cout << *st++ << " ";nl /*sf("%d", st++);*/
}
ll tmp, ans;
ll arr[2100000], farr[2100000], barr[2100000];
ll cSum[2100000];
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
        ll n;
        cin >> n;

        for (size_t i = 1; i <= n; i++)
        {

            cin >> arr[i];
            cSum[i] = arr[i] + cSum[i - 1];
        }

        for (size_t i = 2; i <= n; i++)
        {
            farr[i] = min(farr[i - 1] + 1, arr[i] - 1);
        }
        // parray(farr, farr + n + 5);
        for (size_t i = n - 1; i >= 1; i--)
        {
            barr[i] = min(barr[i + 1] + 1, arr[i] - 1);
        }
        // parray(barr, barr + n + 5);
        ll length = 0;
        for (size_t i = 1; i <= n; i++)
        {
            ll ans = min(barr[i], farr[i]);
// deb(ans)
            ans = ans * 2 + 1;
            length = max(length, ans);
        }
        ll count = INT64_MAX;
        for (size_t i = 1; i <= n; i++)
        {
            ll ans = min(barr[i], farr[i]);

            if ((ans * 2 + 1) != length)
                continue;

            ll sum = 0;
            sum += cSum[i + ans] - cSum[i - ans - 1];
            sum -= (ans + 1 + (ans * (ans + 1)));
            count = min(count, sum);
            //   deb(sum)
        }

        cout << length << " " << count << endl;
    }

    return 0;
}

/*
  Documentation:
   


*/