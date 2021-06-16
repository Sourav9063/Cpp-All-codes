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
int count(int S[], int m, int n)
{
    int i, j, x, y;

    int table[n + 1][m];

    for (i = 0; i < m; i++)
        table[0][i] = 1;

    for (i = 1; i < n + 1; i++)
    {
        for (j = 0; j < m; j++)
        {

            x = (i - S[j] >= 0) ? table[i - S[j]][j] : 0;

            y = (j >= 1) ? table[i][j - 1] : 0;

            table[i][j] = x + y;
        }
    }
    return table[n][m - 1];
}
int main()
{
    Sourav;

    // #ifndef ONLINE_JUDGE
    //     freopen("C:\\Users\\my_code\\input.in", "r", stdin);
    //     freopen("C:\\Users\\my_code\\output.in", "w", stdout);
    // #endif

    int n;
    cout << "Number of coins" << endl;
    cin >> n;
    cout << "Enter coins" << endl;
    int coins[n];
    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
    }

    cout << "Total amount?" << endl;
    int amount;

    cin >> amount;

    cout << count(coins, n, amount);

    return 0;
}

/*
  Documentation:
   


*/