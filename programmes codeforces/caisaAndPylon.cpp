//                      Name: https://codeforces.com/problemset/problem/463/B
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
    int dollar = 0;
    int en = 0;
    int arr[n];
    sarray(arr, arr + n);

    tmp = arr[0];

    dollar = tmp;
    // en=tmp;
    //en=0;
    for (int i = 1; i < n;i++)
    {
       if(arr[i - 1] - arr[i]>=0) {
            en += arr[i - 1] - arr[i];//i++;
        }
    else if (arr[i - 1] - arr[i]<0&&en>=abs(arr[i - 1] - arr[i]))
    {
         en += arr[i - 1] - arr[i];//i++;
    }
else if(arr[i - 1] - arr[i]<0&&en<abs(arr[i - 1] - arr[i]))
{
    
    dollar+=abs(arr[i - 1] - arr[i])-en;
    // en+=abs(arr[i - 1] - arr[i])-en;
    en=0;
}
    // deb(arr[i-1])deb(arr[i])
// deb(en)
// deb(dollar)

    }
    cout<<dollar<<endl;

    return 0;
}

/*
  Documentation:
  ist e doller =1st pylon;
  strpr e jokhn - hobe tokhn dollar+=abs(e); 


int power_x(int x, unsigned y)
{
    if(y==0)
        return 1;
    if(!(y&1))
        return power_x(x,y>>1)*power_x(x,y>>1);
    return x*power_x(x,y>>1)*power_x(x,y>>1);
}

*/