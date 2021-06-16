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

int minCoins(int coins[], int numberOfCoins, int totalValue)
{

    int table[totalValue + 1];

    table[0] = 0;

    for (int i = 1; i <= totalValue; i++)
        table[i] = INT_MAX;

    for (int i = 1; i <= totalValue; i++)
    {

        for (int j = 0; j < numberOfCoins; j++)
            if (coins[j] <= i)
            {
                int sub_res = table[i - coins[j]];
                if (sub_res != INT_MAX && sub_res + 1 < table[i])
                    table[i] = sub_res + 1;
            }
    }
    return table[totalValue];
}

int main()
{
    Sourav;

#ifndef ONLINE_JUDGE
    freopen("C:\\Users\\my_code\\input.in", "r", stdin);
    freopen("C:\\Users\\my_code\\output.in", "w", stdout);
#endif

    int numberOfCoins, totalValue;
    cout << "Number of Coins";
    cin >> numberOfCoins;
    cout << "Total Value?";
    cin >> totalValue;
    int coins[numberOfCoins];
    for (int i = 0; i < numberOfCoins; i++)
    {
        cin >> coins[i];
    }

    cout << "Minimum coins required is "
         << minCoins(coins, numberOfCoins, totalValue);
    return 0;
}

/*
  Documentation:
   


*/