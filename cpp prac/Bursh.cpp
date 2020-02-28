#include<bits/stdc++.h>
using namespace std;
// __int64 variable; cin cout diye
// __uint64 variable;
#define lli long long int //lld
#define ulli unsigned long long int //llu
#define db double //lf
#define Ld long double //Lf
#define pf printf
#define sf scanf
#define nl printf("\n")
#define plf(a) printf("%lld",a)
#define slf(b) scanf("%lld",&b)
#define puf(a) printf("%llu",a)
#define suf(b) scanf("%llu",&b)
#define pif(a) printf("%d",a)
#define sif(b) scanf("%d",&b)
#define pff(a) printf("%f",a)
#define sff(b) scanf("%f",&b)
#define pLf(a) printf("%Lf",a)
#define sLf(b) scanf("%Lf",&b)
#define pdf(a) printf("%lf",a)
#define sdf(b) scanf("%lf",&b)

#define pb(a) push_back(a);



const double pie= 2*acos(0.0);
const long long mxl= 1000000007;

vector<bool> v;

vector<vector<int>>g;
vector<vector<int>>c;

int d[100];

void edge(int a,int b)
{
	g[a].pb(b);

	g[b].pb(a);
}
void cost(int cx,int cy,int cw)
{
	c[cx].pb(cw);
	c[cy].pb(cw);
}


void bfs(int n,int srce)
{

	for(int i=0; i<100; i++) d[i] = mxl;

    queue<int> q;

    q.push(srce);
    d[srce] = 0;

    while (!q.empty())
     {

        int u = q.front();
        q.pop();

        int ucost=d[u];

        //cout << f << " ";

         for(int i=0; i<g[u].size(); i++) {
            int v = g[u][i], vcost = c[u][i] + ucost;


            if( d[v] > vcost ) {
                d[v] = vcost;
                q.push( v );
            }
        }
    }
    if(d[n-1]==mxl)printf("Impossible\n");
    else
    printf("%d\n",d[n-1]);
     }











int main()
{
	int T;

	sif(T);

	for(int co=1;co<=T;co++)
{
    int n, e;
    cin >> n >> e;

    v.assign(n, false);
    g.assign(n, vector<int>());
    c.assign(n, vector<int>());


    int a, b,w;

    for (int i = 0; i < e; i++) {
        cin >> a >> b>>w;
        a-=1;b-=1;
        edge(a, b);
        cost(a,b,w);
    }

     pf("Case %d: ",co);
            bfs(n,0);
            g.clear();
            c.clear();


 }

    return 0;

}
