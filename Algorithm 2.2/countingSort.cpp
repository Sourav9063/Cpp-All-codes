//                      Name: Cournting sort
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
    // deb(n);
    // cout<<"hello";
    int givenArray[n];
    int maxValue = -1;
    // sarray(givenArray, givenArray + n);
    for (int i = 0; i < n; i++)
    {
        cin >> givenArray[i];

        maxValue = max(maxValue, givenArray[i]);
    }

    int countArray[maxValue + 1] = {0};

    for (int i = 0; i < n; i++)
    {
        countArray[givenArray[i]]++;
        // deb(countArray[i]);
    }

    for (int i = 1; i <= maxValue; i++)
    {
        //   deb(countArray[i]);
        countArray[i] += countArray[i - 1];
    }
    // for (int i = 0; i < maxValue; i++)
    // {
    //     deb(countArray[i]);
    // }
    int copyArray[n];

    for (int i = n - 1; i >= 0; i--)
    {
        copyArray[--countArray[givenArray[i]]] = givenArray[i];//not countArray[givenArray[i]]--
    }
    for (int i = 0; i < n; i++)
    {
        deb(copyArray[i]);
    }

    return 0;
}

/*
  Documentation:
  sort with out comparing
  uses counting 
  needs 3 array (given,count,copy)
  only none negative number
  best case o(n) 


*/