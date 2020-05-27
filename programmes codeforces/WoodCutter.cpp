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
 #ifndef ONLINE_JUDGE
            freopen("C:\\Users\\my_code\\input.in", "r", stdin); 
            freopen("C:\\Users\\my_code\\output.in", "w", stdout);
 #endif


    int n;
    cin >> n;
    vector<pair<int, int>> v;
    int a, b;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        v.pb(make_pair(a, b));
    }
   // cout<<v[1].second<<endl;
   if(n==1)cout<<1<<endl;
   else if (n==2)cout<<2<<endl;
 
  else{  ans = 2;
    for (int i = 1; i < n - 1; i++)
    {
        if (v[i].first - v[i - 1].first > v[i].second)
            ans++;
        else if (v[i + 1].first - v[i].first > v[i].second)
        {
            ans++;
            v[i].first += v[i].second;
        }
    }
    cout<<ans<<endl;
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