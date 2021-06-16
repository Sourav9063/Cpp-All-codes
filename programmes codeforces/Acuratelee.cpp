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

    ll t;
    cin >> t;
    while (t--)
    {
       
       int z=0,o=0;

        int n;
        cin >> n;
        string s;
        cin >> s;
        int oneZero = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == '1' && s[i + 1] == '0')
                oneZero++;
        }
        // sc.push('0');
        if (s[n - 1] == '1')
        {
            
            for (int i = n - 1; i > 0; i--)
            {


                    if(s[i]=='0')break;

                    o++;
            }
        }
        if(s[0]=='0'){
            for (int i = 0; i < n; i++)
            {
                if(s[i]=='1')break;
                z++;
            }
            
        }

        if (oneZero == 0)
            cout << s << endl;
        else
        {
         for (int i = 0; i <= z; i++)
         {
             cout<<0;
         }
         for (int i = 0; i < o; i++)
         {
             cout<<1;
         }
         nl;
         
        }
    }

    return 0;
}

/*
  Documentation:
   


*/