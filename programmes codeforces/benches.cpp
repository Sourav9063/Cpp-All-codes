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

int main()
{
    Sourav;
 #ifndef ONLINE_JUDGE
            freopen("C:\\Users\\my_code\\input.in", "r", stdin); 
            freopen("C:\\Users\\my_code\\output.in", "w", stdout);
 #endif

lli n,m,i,j;
	cin>>n>>m;
	lli v[n];
	for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    
	
	lli x=*max_element(v,v+n);//return iterator of max
	sort(v,v+n);
	lli c=0;
	for(i=0;i<m;i++){
	    v[c]+=1;
	    for(j=0;j<n;j++){
	    if(v[j]<v[c])
	    c=j;}
	}
	cout<<*max_element(v,v+n)<<" "<<x+m;
	
	return 0;




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