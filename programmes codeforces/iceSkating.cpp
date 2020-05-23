//                      Name: https://codeforces.com/problemset/problem/217/A
#include<bits/stdc++.h>
using namespace std;

#define ll long long int //lld
#define ull unsigned long long int //llu

#define pt cout<<"*"<<"\n";
#define nl cout<<"\n";
#define deb(x) cout << #x << "=" << x << "\n";

#define pb(a)    emplace_back(a)
#define all(x)   (x).begin(),(x).end()
#define rSort(x) sort((x).rbegin(),(x).rend())

#define Sourav ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

//template<typename... T>void read(T&... args) {((cin >> args), ...);}
template <class T>inline void sarray(T* st, T* nd){while(st<nd)cin>>*st++;/*sf("%d", st++);*/}
template <class T>inline void parray(T* st, T* nd){while(st<nd)cout<<*st++<<endl;/*sf("%d", st++);*/}
int a[1003],b[1003],vis[1003],n;
 
void dfs(int x)
{
	vis[x]=1;
	for(int i=0;i<n;i++)
	{
		if(!vis[i])
		{
			if(a[x]==a[i] || b[x]==b[i])
				dfs(i);
		}
	}
}
 
int main()
{
	int i,j,m=0;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i]>>b[i];
	for(i=0;i<n;i++)
	{
		if(!vis[i])
		{
			dfs(i);
			m++;
		}
	}
	cout<<(m-1);
}
/*
  Documentation
 not  connected component number
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