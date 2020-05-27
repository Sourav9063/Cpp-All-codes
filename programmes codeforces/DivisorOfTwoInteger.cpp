//                      Name: https://codeforces.com/problemset/problem/1108/B
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

    int n;
    cin >> n;
    int arr[n];
    int flag[100000] = {0};
    vector<int> duplicates;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (flag[arr[i]] != 0)
        {
            duplicates.pb(arr[i]);
        }
        flag[arr[i]] = 1;
    }
    // rSort(duplicates);
    sort(arr, arr + n);
    cout << arr[n - 1] << " ";
    // for (int i = 0; i < duplicates.size(); i++)
    // {
    //     cout<<duplicates[i];nl
    // }

    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[n - 1] % arr[i] != 0 || arr[i] == arr[i - 1])
        {
            cout << arr[i];nl
            break;
        }
    }

    return 0;
}

/*
  Documentation:
bigges ta ekta ans
onno j double ase tar biggest ta diye jodi divide kora na jay thn oita ans;


int power_x(int x, unsigned y)
{
    if(y==0)
        return 1;
    if(!(y&1))
        return power_x(x,y>>1)*power_x(x,y>>1);
    return x*power_x(x,y>>1)*power_x(x,y>>1);
}

*/