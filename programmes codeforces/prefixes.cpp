//                      Name: https://codeforces.com/problemset/problem/1216/A
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
    string s;
    cin >> s;
    int a = 0, b = 0;

    for (int i = 1; i < n; i+=2)
    {
        if(s[i-1]==s[i]){
            ans++;
            if(s[i]=='a')s[i]='b';
            else
            {
                s[i]='a';
            }
            
        }
        
    }
    
    cout<<ans<<endl;
    cout<<s<<endl;




    // if(n&1)
    // {//odd

    // }
    // else
    // {
    // for (int i = 0; i < n; i++)
    // {
    //     if (s[i] == 'a')
    //     {
    //         a++;
    //     }
    //     else
    //     {
    //         b++;
    //     }

    //     if (i & 1)
    //     {
    //         //odd even pos
    //         if (a != b)
    //         {
    //             ans++;
                
    //         }
    //     }
    // }

    // // }
    // if (ans==0){
    //     cout<<ans;
    //     nl
    //     cout<<s<<endl;
    // }

    //     else
    //     {
    //         cout << ans << endl;
    //         for (int i = 0; i < n; i++)
    //         {
    //             if (i & 1)
    //                 cout << 'a';
    //             else
    //             {
    //                 cout << 'b';
    //             }
    //         }
    //     }

    return 0;
}

/*
  Documentation:
   


*/