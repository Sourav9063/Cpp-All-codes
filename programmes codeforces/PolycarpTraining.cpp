//                      Name:
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
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
        cout << *st++ << ' ';
    nl /*sf("%d", st++);*/
}

int main()
{
    Sourav;

#ifndef ONLINE_JUDGE
    freopen("C:\\Users\\my_code\\input.in", "r", stdin);
    freopen("C:\\Users\\my_code\\output.in", "w", stdout);
#endif

    int n;
    cin >> n;
    vector<int> a;
    for (size_t i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        a.emplace_back(tmp);
    }
    int ans = 0;
    sort(a.begin(), a.end());
    // for (size_t i = 0; i < n; i++)
    // {
    //     cout << a[i] << " ";
    // }
    // nl
    
    //  for (size_t i = 1; i <= n; i++)
    // {
    //     // deb(a[0])
    //     // for (auto j:a)
    //     // {

    //     //     cout <<j<< " ";
    //     // }
    //     //     deb(i)
    //     while (a[0] < i || a.empty())
    //         a.pop_front();
    //     a.pop_front();
    //     ans++;
    //     if (a.empty())
    //         break;
    // }
    for (int i = 1,j=0; i <= n&&j<n;)
    {
        if(a[j]>=i){
            ans++;
            i++;
            j++;
        }
        else{
            j++;
        }
        
    }
    

    cout << ans << endl;
    return 0;
}

/*
  Documentation:
   


*/