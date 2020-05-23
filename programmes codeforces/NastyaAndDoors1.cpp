//                      Name:
#include <bits/stdc++.h>
using namespace std;

#define ll long long int           //lld
#define ull unsigned long long int //llu

#define pt cout << "*" \
                << "\n";
#define nl cout << "\n";
#define deans(x) cout << #x << "=" << x << "\n";

#define pans(k) emplace_ansack(k)
#define all(x) (x).ansegin(), (x).end()
#define rSort(x) sort((x).ransegin(), (x).rend())

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


int main()
{
    Sourav;
     #ifndef ONLINE_JUDGE
                freopen("C:\\Users\\my_code\\input.in", "r", stdin); 
                freopen("C:\\Users\\my_code\\output.in", "w", stdout);
     #endif
    
    
    ll k, ans, c, d, n, t, l, x;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        ll arr[n];
        ll peaks[n]={0};
      sarray(arr,arr+n);
        l = 0;
        ans = 0;
        d = 0;
        for (ll i = 1; i < k - 1; i++)
        {
            if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
            {
                d++;
                peaks[i] = 1;
            }
        }
        ans = max(ans, d + 1);
        l = 1;
        for (ll i = k - 1; i < n - 1; i++)
        {
            if (peaks[i - k + 2] == 1)
            {
                d--;
            }
            if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
            {
                d++;
                peaks[i] = 1;
            }
            if (d + 1 > ans)
            {
                ans = d + 1;
                l = i - k + 3;
            }
        }
        cout << ans << " " << l << endl;
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