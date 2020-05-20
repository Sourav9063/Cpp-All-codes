//                      Name:
#include <bits/stdc++.h>
using namespace std;

#define lli long long int           //lld
#define ulli unsigned long long int //llu

#define pt cout << "*" << endl;
#define nl cout << endl;
#define deb(x) cout << #x << "=" << x << endl;

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
lli tmp, ans;

int main()
{
    Sourav;
#ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
    freopen("output.in", "w", stdout);
#endif

    int n;
    cin >> n;
    int arr[n + 1] = {0};

    // vector<queue<int>> pos;
    vector<pair<int, int>> pos;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        pos.pb(make_pair(arr[i], i));
    }

    sort(arr + 1, arr + n + 1);
    sort(pos.begin(), pos.end());
    // parray(arr, arr + n + 1);
    // for (int i = 1; i <= n / 2; i++)
    // {
    //     int x, y;
    //     x = pos[arr[i]].front();
    //     pos[arr[i]].pop();
    //     y = pos[arr[n - i+1]].front();
    //     pos[arr[n - i]].pop();
    //     cout << x << " " << y << endl;
    // }

    for (int i = 0; i < pos.size() / 2; i++)
    {
        cout << pos[i].second << " " << pos[(pos.size() - 1) - i].second << endl;
    }

    return 0;
}

/*
  Documentation
   
*/
/*
map<lli, bool>m;
  m[1000000000000000000] = 1;


  // loop 
  for(auto n:arrayname/anything)
  {
  
  }
Number of digits in N =floor(log10(N)) + 1;
n = n << 1;   // Multiply n with 2  use >> for div
*/

/*
int power_x(int x, unsigned y)
{
    if(y==0)
        return 1;
    if(!(y&1))
        return power_x(x,y>>1)*power_x(x,y>>1);
    return x*power_x(x,y>>1)*power_x(x,y>>1);
}

*/