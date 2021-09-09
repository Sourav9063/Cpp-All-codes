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

    ll t;
    cin >> t;
    while (t--)
    {
        // int n;
        // cin >> n;
        // string s;
        // cin >> s;
        // int n1, n2;
        // n1 = n2 = 0;
        // for (size_t i = 0; i < n; i++)
        // {
        //     if (s[i] == '1')
        //         n1++;
        //     else
        //         n2++;
        // }

        // if (n2 > 0 && n2 <= 2)
        //     cout << "NO" << endl;
        // else
        // {
        //     cout << "YES" << endl;

        //     char ans[n][n];
        //     for (size_t i = 0; i < n; i++)
        //     {
        //         for (size_t j = 0; j < n; j++)
        //         {
        //             ans[i][j] = '1';
        //         }
        //     }

        //     for (size_t i = 0; i < n; i++)
        //     {
        //         for (size_t j = 0; j < n; j++)
        //         {
        //             if (i == j)
        //                 ans[i][j] = 'X';
        //             else
        //             {
        //                 if (s[i] == '1' && s[j] == '1')
        //                     ans[i][j] = '=';
        //                 else if (s[i] == '1' || s[j] == '1')
        //                 {
        //                     ans[i][j] = '=';
        //                     ans[j][i] = '=';
        //                     // ans[i][j] = '+';
        //                     // ans[j][i] = '-';
        //                 }
        //                 // else if (s[i] == '2' && s[j] == '1')
        //                 // {
        //                 //     ans[i][j] = '=';
        //                 //     ans[j][i] = '=';
        //                 // }
        //                 // else
        //                 // {
        //                 //     if (ans[i][j] == '1')
        //                 //     {
        //                 //         ans[i][j] = '+';
        //                 //         ans[j][i] = '+';
        //                 //     }

        //                 // bool ihas = false;
        //                 // bool jhas = false;
        //                 // for (size_t k = n - 1; k > 0; k--)
        //                 // {
        //                 //     if (ans[i][k] == '+')
        //                 //         ihas = true;
        //                 //     if (ans[j][k] == '+')
        //                 //         jhas = true;
        //                 // }

        //                 // if (ihas && jhas)
        //                 //     ans[i][j] = '=';
        //                 // else if (!ihas && !jhas)
        //                 //     ans[i][j] = '+';
        //                 // else if (ihas)
        //                 // {
        //                 //     ans[i][j] = '+';
        //                 //     ans[j][i] = '-';
        //                 // }
        //                 // else
        //                 // {
        //                 //     ans[i][j] = '-';
        //                 //     ans[j][i] = '+';
        //                 // }
        //                 // }
        //             }
        //         }
        //     }

        //     for (size_t i = 0; i < n; i++)
        //     {
        //         for (size_t j = 0; j < n; j++)
        //         {

        //             if (ans[i][j] == '1')
        //             {
        //                 ans[i][j] = '+';
        //                 ans[j][i] = '-';
        //                 for (; j < n; j++)
        //                 {if(ans[i][j]=='1')
        //                      ans[i][j] = '-';
        //                 }
                        
        //             }
        //         }
        //     }

        //     for (size_t i = 0; i < n; i++)
        //     {
        //         for (size_t j = 0; j < n; j++)
        //         {
        //             cout << ans[i][j];
        //         }
        //         nl
        //     }
        // }
         int n; 
        cin >> n ; 
        string s; 
        cin >> s ; 
        vector<int>flag; 
        char arr[n+10][n+10]; 
        int n2 = 0; 
        for(int i=0;i<n;i++) { 
            n2+=(s[i]=='2'); 
            if(s[i]=='2') { 
                flag.push_back(i); 
            } 
        } 
        memset(arr,'.',sizeof arr); 
        if(n2<=2 && n2) { 
            cout << "NO\n"; 
        } 
        else { 
            cout << "YES\n"; 
            for(int i=0;i<s.size();i++) { 
                if(s[i]=='1') { 
                    for(int j=0;j<n;j++) { 
                        arr[i][j]='='; 
                        arr[j][i]='='; 
                    } 
                } 
            } 
            for(int i=0;i<flag.size();i++) { 
                for(int j=0;j<flag.size();j++) { 
                    if(i==j){continue;} 
                    if(arr[flag[i]][flag[j]]=='.') { 
                        arr[flag[i]][flag[j]] ='='; 
                        arr[flag[i]][flag[j]] = '='; 
                    } 
                } 
                if(i==flag.size()-1) { 
                    arr[flag[i]][flag[0]]='+'; 
                    arr[flag[0]][flag[i]]='-'; 
                } 
                else{ 
                    arr[flag[i]][flag[i+1]]='+'; 
                    arr[flag[i+1]][flag[i]]='-'; 
                } 
            } 
            for(int i=0;i<n;i++) { 
                arr[i][i]='X'; 
                for(int j=0;j<n;j++) { 
                    cout <<arr[i][j]; 
                } 
                cout << '\n'; 
            } 
        } 
    }

    return 0;
}

/*
  Documentation:
   


*/