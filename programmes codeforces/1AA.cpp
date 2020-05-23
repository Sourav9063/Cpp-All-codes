//                      Name:
#include <bits/stdc++.h>
using namespace std;

#define lli long long int           //lld
#define ulli unsigned long long int //llu

#define pt cout << "*" \
                << "\n";
#define nl cout << "\n";
#define deb(x) cout << #x << "=" << x << "\n";

#define pb(a) emplace_back(a)
#define all(x) (x).begin(), (x).end()
#define rSort(x) sort((x).rbegin(), (x).rend())

#define Sourav                      \
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
vector<vector<int>> adj;
vector<bool> visited;
void dfs(int s = 0)
{
  visited[s] = true;
  for (auto &i : adj[s])
    dfs(i);
}
int main()
{
  Sourav;
#ifndef ONLINE_JUDGE
  freopen("C:\\Users\\my_code\\input.in", "r", stdin);
  freopen("C:\\Users\\my_code\\output.in", "w", stdout);
#endif
  long a, b, c, d, n, t, l, x;
  cin >> t;
  while (t--)
  {
    cin >> n >> a;
    long A[n];
    long B[n];
    for (int i = 0; i < n; i++)
    {
      cin >> A[i];
      B[i] = 0;
    }
    l = 0;
    b = 0;
    d = 0;
    for (long i = 1; i < a - 1; i++)
    {
      if (A[i] > A[i - 1] && A[i] > A[i + 1])
      {
        d++;
        B[i] = 1;
      }
    }
    b = max(b, d + 1);
    l = 1;
    for (long i = a - 1; i < n - 1; i++)
    {
      if (B[i - a + 2] == 1)
      {
        d--;
      }
      if (A[i] > A[i - 1] && A[i] > A[i + 1])
      {
        d++;
        B[i] = 1;
      }
      if (d + 1 > b)
      {
        b = d + 1;
        l = i - a + 3;
      }
    }
    cout << b << " " << l << endl;
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