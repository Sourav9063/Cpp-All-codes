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
ll ans;
map<int, vector<int>> adj;

bool visited[1000000];

int dfs(int s, int tmp)
{
    int stp = 0;
    visited[s] = true;
    stack<int> st;
    st.push(s);
    stp++;
    while (!st.empty())
    {
        stp++;
        int standingNode = st.top();
        st.pop();
        for (int i = 0; i < adj[standingNode].size(); i++)
        {
            int nxtNodes = adj[standingNode][i];

            if (visited[nxtNodes] == false)
            {
                st.push(nxtNodes);
                visited[nxtNodes] = false;
                if (nxtNodes == tmp)
                    return stp;
            }
        }
    }
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
    for (int i = 1; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].pb(y);
        adj[y].pb(x);
    }

    for (int i = 0; i < n + 1; i++)
    {
        visited[i] = false;
    }

    int g;
    cin >> g;
    int arr[g];
    for (int i = 0; i < g; i++)
    {
        cin >> arr[g];
    }
    sort(arr, arr + n);
    int chk = LONG_MAX;
    int gp;
    for (int i = 0; i < g; i++)
    {
        //    tmp = arr[i];
        ans = dfs(1, arr[i]);

        if (ans < chk)
        {
            chk = ans;
            gp = arr[i];
        }
    }
    cout << gp << endl;

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