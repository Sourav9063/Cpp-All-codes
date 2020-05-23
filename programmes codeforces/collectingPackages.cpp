//                      Name: https://codeforces.com/problemset/problem/1294/B
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
string s;
void inr(int n)
{
    while (n--)
    {
        s = s + 'R';
    }
}
void inu(int n)
{
    while (n--)
    {
        s = s + 'U';
    }
}

int main()
{
    Sourav;
#ifndef ONLINE_JUDGE
    freopen("C:\\Users\\my_code\\input.in", "r", stdin);
    freopen("C:\\Users\\my_code\\output.in", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)
    {
        vector<pair<int, int>> v;
        int n;
        bool f = true;
        cin >> n;
        s = "";
        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            if (x < 0 || y < 0)
            {
                f = false;
                break;
            }

            v.pb(make_pair(x, y));
        }

        if (f)
        {
            sort(all(v));

            // for (auto &it : v)
            // {
            //     cout << it.first << " " << it.second;
            //     nl;
            // }

            inr(v[0].first);
            inu(v[0].second);
            bool fl = true;
            for (int i = 1; i < n; i++)
            {
                if (v[i].first < v[i - 1].first || v[i].second < v[i - 1].second)
                {
                    fl = false;
                    break;
                }
                else
                {
                    inr(v[i].first - v[i - 1].first);
                    inu(v[i].second - v[i - 1].second);
                }
            }

            if (fl)
            {
                cout<<"YES"<<endl;
                cout << s << endl;
            }
            else
            {
                cout << "NO";
                nl;
            }
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
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