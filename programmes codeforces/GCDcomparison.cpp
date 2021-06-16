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
// ll tmp,ans;

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
        int a[2 * n + 1];
        stack<int> even;
        stack<int> odd;
        for (int i = 1; i <= 2 * n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 1)
                odd.push(i);
            else
                even.push(i);
        }
        if (odd.size() % 2 == 1)
            odd.pop();

        if (even.size() % 2 == 1)
            even.pop();

        int tmp = n - 1;
        
        while (tmp > 0 && !odd.empty())
        {

            int tmpo1 = odd.top();
            odd.pop();
            int tmpo2 = odd.top();
            odd.pop();

            cout << tmpo1 << " " << tmpo2 << endl;

            tmp--;
        }

        
        while (tmp > 0 && !even.empty())
        {

            int tmpo1 = even.top();
            even.pop();
            int tmpo2 = even.top();
            even.pop();

            cout << tmpo1 << " " << tmpo2 << endl;

            tmp--;
        }
    }

    return 0;
}

/*
  Documentation:
   


*/