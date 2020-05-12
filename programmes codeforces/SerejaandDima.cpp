//                      Name:
#include <bits/stdc++.h>
using namespace std;

#define lli long long int           //lld
#define ulli unsigned long long int //llu

#define pt cout << "*" << endl;
#define nl cout << endl;

#define pb(a) emplace_back(a)
#define all(x) (x).begin(), (x).end()
#define rSort(x) sort((x).rbegin(), (x).rend())

#define Sourav                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

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

int main()
{
    Sourav;
#ifndef ONLINE_JUDGE
    freopen("C:\\Users\\my_code\\input.in", "r", stdin);
    freopen("C:\\Users\\my_code\\output.in", "w", stdout);
#endif

    int n;
    cin >> n;
    vector<int> arr;
    //vector<iterator>::it;

    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        arr.emplace_back(tmp);
    }
    //cout<<arr.begin();pt;
    int a, b;
    a = 0;
    b = 0;
    for (int i = 1; i <= n; i++)
    {
        int big = 0;
        // cout<<arr[0]<<" "<<arr[arr.size()-1]<<endl;
        if (arr[0] >= arr[arr.size() - 1])
        {
            big = arr[0];
            arr.erase(arr.begin());
        }
        else
        {
            big = arr[arr.size() - 1];
            arr.pop_back();
        }
        if (i % 2 == 1)
        {
            a += big;
        }
        else
        {
            b += big;
        }
    }
    cout << a << " " << b << endl;

    return 0;
}

/*
  Documentation
  flag use korte hobe 
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