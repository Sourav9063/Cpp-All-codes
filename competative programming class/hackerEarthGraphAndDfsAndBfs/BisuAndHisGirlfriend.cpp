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


vector< int > adj[1001];
vector< bool >visited(1000,false);
int dsit[1001];

void dfs(int s)
{
   // memset(dsit,0,sizeof(dsit));

    stack < int > st;
    st.push(s);
    dsit[s] = 0;

    while(!st.empty()){
        int u = st.top();
        st.pop();
        for(int i = 0; i < adj[u].size() ; i++){
            int v = adj[u][i];

            if(v > dsit[u]+1){
                dsit[v] = dsit[u]+1;
                st.push(v);
            }
        }
    }
}

int main()
{
    int n,m;
    cin >> n;
    for(int i = 0; i < n-1; i++){
        int x,y;
        cin >> x >> y;
        // if undirected graph
        adj[x].push_back(y);
        adj[y].push_back(x); // if directed graph not needed this line
    }
    int res = INT_MAX,q,ans=0;
    cin >> q;
    int mal;
    dfs(1);
    for(int i = 0;i < q; i++){
        cin >> mal;
        if(dsit[mal] < res){
            res = dsit[mal];
            ans = mal;
        }else if(res == dsit[mal]){
            ans = min(ans,mal);
        }
      }
    cout << ans << endl;

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