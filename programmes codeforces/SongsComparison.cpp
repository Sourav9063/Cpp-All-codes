//                      Name: 
#include<bits/stdc++.h>
using namespace std;

#define lli long long int //lld
#define ulli unsigned long long int //llu

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
lli tmp,ans;

int main()
{
    Sourav;
 #ifndef ONLINE_JUDGE
            freopen("C:\\Users\\my_code\\input.in", "r", stdin); 
            freopen("C:\\Users\\my_code\\output.in", "w", stdout);
 #endif

	long long c,d,n,m,j,s1=0,s2=0;
	cin>>n>>m;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>c>>d;
		a[i]=(c-d);
		s1+=c;
	}
	if(s1<=m)
	{
		cout<<"0";
		return 0;
	}
	sort(a, a+n, greater<int>());
	for(int i=0;i<n;)
	{
		s2+=a[i];
		if(s2>=(s1-m))
		{
		cout<<i+1; 
		return 0; }
		++i;
	}
	cout<<"-1";




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