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

    // #ifndef ONLINE_JUDGE
    //     freopen("C:\\Users\\my_code\\input.in", "r", stdin);
    //     freopen("C:\\Users\\my_code\\output.in", "w", stdout);
    // #endif
    cout << "Enter the number of products" << endl;
    int n;
    cin >> n;
    cout << "How much weight can be carried?" << endl;
    int totalWeight;
    cin >> totalWeight;

    int weight[n + 1];
    int profit[n + 1];
    weight[0] = 0;
    profit[0] = 0;
    int table[n + 1][totalWeight + 1];
    cout << "Enter the weight of the products" << endl;
    for (int i = 1; i <= n; i++)
    {
        cin >> weight[i];
    }
    cout << "Enter the profit of the products" << endl;
    for (int i = 1; i <= n; i++)
    {
        cin >> profit[i];
    }

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= totalWeight; j++)
        {
            if (i == 0 || j == 0)
            {
                table[i][j] = 0;
            }
            else if (weight[i] <= j)
            {
                table[i][j] = max(profit[i] + table[i - 1][j - weight[i]], table[i - 1][j]);
            }
            else
                table[i][j] = table[i - 1][j];
        }
    }
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= totalWeight; j++)
        {
            cout << table[i][j] << " ";
        }
        nl;
    }
    cout << "Maximum " << table[n][totalWeight] << " can be profited" << endl;

    cout << "Collection " << endl;

    while (totalWeight > 0 && n > 0)
    {
        if (table[n][totalWeight] == table[n - 1][totalWeight])
        {
            // cout << n << "=0" << endl;
            n--;
        }
        else
        {
            // cout << n << "=1" << endl;
            cout << "Weight " << weight[n] << " Profit " << profit[n] << endl;

            totalWeight = totalWeight - weight[n];
            n--;
        }
    }

    return 0;
}

/*
  Documentation:
   


*/