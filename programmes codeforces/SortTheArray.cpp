//                      Name: 
#include<bits/stdc++.h>
using namespace std;

#define lli long long int //lld
#define ulli unsigned long long int //llu
#define db double //lf
#define Ld long double //Lf

#define pt cout<<"*"<<endl;
#define nl cout<<endl;

#define pb(a)    emplace_back(a)
#define all(x)   (x).begin(),(x).end()
#define Sort(x)  sort(all((x)))
#define rSort(x) sort((x).rbegin(),(x).rend())

#define OJ  freopen("input.txt", "r", stdin); \
			freopen("output.txt", "w", stdout);

#define Sourav ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

template <class T>inline void sarray(T* st, T* nd){while(st<nd)cin>>*st++;/*sf("%d", st++);*/}
template <class T>inline void parray(T* st, T* nd){while(st<nd)cout<<*st++<<endl;/*sf("%d", st++);*/}

int main()
{
	Sourav;
 #ifndef ONLINE_JUDGE
		   OJ;
 #endif

	int n;
	cin>>n;
	int flag=0;
	int l=-1,r;
	int prev=0;
	int cnt=0;
	int ar[n];
	for (int i=0;i<n;i++){
		int a;
		cin>>a;
		ar[i]=a;
		if (i>0){
			if (a<prev){
				if (flag==0)cnt++;
				flag=1;
				if (l==-1)l=i-1;
				r=i;
			}
			else{
				flag=0;
			}
		}
		prev=a;
	}
	if (l==-1){
		l=0;
		r=0;
	}
	if (cnt>1||(r!=n-1&&ar[l]>ar[r+1])||(l!=0&&ar[r]<ar[l-1]))printf ("no\n");
	else printf ("yes\n%d %d\n",l+1,r+1);


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
int highest value is LONG_MAX;
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