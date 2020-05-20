//                      Name:
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
map<int, set<int>> adj;
bool visited[100000];
vector<int> path;
int dist[10000] = {0};
int p[10000] = {0};

void dfs(int x, int y)
{

    queue<int> lst;
    lst.push(x);
    visited[x] = true;

    while (!lst.empty())
    {
        int standInNode = lst.front();
        lst.pop();
       // for (int i = 0; i < adj[standInNode].size(); i++)
        
        for(auto &i:adj[standInNode])
        {
            int nxtNode = i;
            // deb(nxtNode)
            if (visited[nxtNode] == false)
            {
                visited[nxtNode] = true;
                lst.push(nxtNode);
                dist[nxtNode] = dist[standInNode] + 1;
//  deb(standInNode);                //
// deb(nxtNode);
// deb(p[standInNode])
//                 if (p[nxtNode] >0)
//                 {
//                     pt;
                    //  tmp=p[nxtNode]
                   

                    // p[nxtNode] = min(p[nxtNode], standInNode);
                // }
                // else
                   p[nxtNode] = standInNode;
                    // deb(p[nxtNode])
            }
        }
    }

    path.pb(y);
    int now = y;
    while (now != x)
    {
        now = p[now];
        path.pb(now);
        /* code */
    }
}

int main()
{
   Sourav;
#ifndef ONLINE_JUDGE
    freopen("C:\\Users\\my_code\\input.in", "r", stdin);
    freopen("C:\\Users\\my_code\\output.in", "w", stdout);
#endif

    int nodes, edges, lt, tt;
    cin >> nodes >> edges >> lt >> tt;
    int x, y;
    for (int i = 0; i < edges; i++)
    {
        cin >> x >> y;
        adj[x].insert(y);
        adj[y].insert(x);
    }

    for (int i = 0; i <= nodes; i++)
    {
        visited[i] = false;
        p[i] = INT_MAX;
    }

    cin >> x >> y;

    dfs(x, y);

    cout << path.size() << endl;
    for (int i = path.size() - 1; i >= 0; i--)
    {
        cout << path[i] << " ";
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