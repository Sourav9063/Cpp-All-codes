//                      Name: 
#include<bits/stdc++.h>
using namespace std;

#define lli long long int //lld
#define ulli unsigned long long int //llu

#define pt cout<<"*"<<endl;
#define nl cout<<endl;
#define deb(x) cout << #x << "=" << x << endl;

#define pb(a)    emplace_back(a)
#define all(x)   (x).begin(),(x).end()
#define rSort(x) sort((x).rbegin(),(x).rend())

#define Sourav ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

//template<typename... T>void read(T&... args) {((cin >> args), ...);}
template <class T>inline void sarray(T* st, T* nd){while(st<nd)cin>>*st++;/*sf("%d", st++);*/}
template <class T>inline void parray(T* st, T* nd){while(st<nd)cout<<*st++<<endl;/*sf("%d", st++);*/}
lli tmp,ans;

int dist[200010];
void bfs(map<int,vector<int>>&adj,int s)
{
  queue<int>lst;

  dist[s]=0;
  lst.push(s);
  while (!lst.empty())
  {
    int standingNode=lst.front();
    lst.pop();
    for (int i = 0; i < adj[standingNode].size(); i++)
    {
      int nextNode=adj[standingNode][i];
      if(dist[nextNode]==0)
      {
        dist[nextNode]=dist[standingNode]+1;
        lst.push(nextNode);
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
 cin>>t;
    while(t--)
    {
      map<int,vector<int>>adj;
      int nodes,edges;
      cin>>nodes>>edges;
      for (int i = 0; i < edges; i++)
      {
        int x,y;
        cin>>x>>y;
        adj[x].pb(y);
        adj[y].pb(x);

      }
for (int i = 0; i < nodes+1; i++)
{
  dist[i]=0;
}

bfs(adj,1);
      
cout<<dist[nodes]<<endl;
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