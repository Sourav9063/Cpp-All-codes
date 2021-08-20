//                      Name: https://www.youtube.com/watch?v=kVyIhwYnLNs&list=PLk6CEY9XxSIBG2Gv6-d1WE3Uxqx94o5B2&index=10
#include <bits/stdc++.h>
using namespace std;

#define lli long long int           //lld
#define ulli unsigned long long int //llu

#define pt cout << "*" << endl;
#define nl cout << endl;
#define deb(x) cout << #x << "=" << x << endl;

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
lli tmp, ans;
vector<bool> visited;
vector<vector<int>> adj;
//using stack
void dfsS(int s)
{
    stack<int> stk;
    stk.push(s);
    visited[s] = true;
    while (!stk.empty())
    {
        int node = stk.top();
        stk.pop();
         deb(node);
        ans++;
        //  for (int i = 0; i < Vec[node].size(); i++)
        // {
        //     if (!visited[Vec[node][i]])
        //     {
        //         Stk.push(Vec[node][i]);
        //         visited[Vec[node][i]] = true;
        //         if(Vec[node][i]==tmp)
        //         cout<<ans<<endl;
        //     }
        // }
        for (auto i : adj[node])
        {
            if (!visited[i])
            {
                stk.push(i);
                visited[i] = true;
                // cout << i << " ";
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

    int t;
    cin >> t;
    while (t--)

    {

        int nodes, edges, x, y;
        ans = 0;
        cin >> nodes >> edges;
        tmp = nodes;
        adj.resize(nodes + 1);
        visited.resize(nodes + 1);
        for (int i = 0; i < edges; i++)
        {
            cin >> x >> y;
            adj[x].pb(y);
            adj[y].pb(x);
        }
        // for (int i = 0; i < visited.size(); i++)
        // {
        //     visited[i]=false;
        // }

        dfsS(1);
    }

    return 0;
}

/*
  Documentation
   
uses stack or recursive
depht first search
6 7
1 2
1 4
4 5
4 6
6 3
3 2
2 4


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