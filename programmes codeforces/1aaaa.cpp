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
        cout << *st++ << " ";
    nl /*sf("%d", st++);*/
}
ll tmp, ans;

int main()
{
    Sourav;

#ifndef ONLINE_JUDGE
    freopen("C:\\Users\\my_code\\input.in", "r", stdin);
    freopen("C:\\Users\\my_code\\output.in", "w", stdout);
#endif

    int test;
    cin >> test;
    for (size_t t = 1; t <= test; t++)
    {
        int n;
        string s;
        cin >> n;
        cin >> s;
        int charCountArray[26];

        memset(charCountArray, 0, sizeof(charCountArray));
        ll odd = 0;
        for (size_t i = 0; i < n; i++)
        {
            charCountArray[s[i] - 'a']++;
        }
        for (size_t i = 0; i < 26; i++)
        {
            if (charCountArray[i] % 2 == 1)
                odd++;
        }

        int query;
        int indexOfFixedChar;
        char fixedChar;
        cin >>
            query;
        cout << "Case " << t << ":" << endl;
        for (size_t i = 0; i < query; i++)
        {
            // deb(odd)
            cin >> indexOfFixedChar >> fixedChar;
          
            if (charCountArray[s[indexOfFixedChar - 1]-'a'] % 2 == 0)
            {
                odd++;
            }
            else
            {
                odd--;
            }
            charCountArray[s[indexOfFixedChar - 1] - 'a']--;
            if (charCountArray[fixedChar - 'a'] % 2 == 0)
            {
                odd++;
            }
            else
            {
                odd--;
            }
            charCountArray[fixedChar - 'a']++;
            s[indexOfFixedChar - 1] = fixedChar;
            // deb(odd)
             int add=0;
            if (odd != 0)
                add=1;
            // parray(charCountArray, charCountArray + 26);
            cout << n - odd+add << endl;
        }
    }

    return 0;
}

/*
  Documentation:
   


*/