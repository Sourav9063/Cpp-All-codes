//                      Name: https://codeforces.com/problemset/problem/515/C
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
    
    
    int n;
    cin>>n;
    lli in;
    cin>>in;
    int arr[10]={0};

    tmp=in;
    while(tmp>0)
    {
        int x=tmp%10;
        tmp/=10;
        arr[x]++;
     while(x--)
     {
         arr[x]++;
     }
        
    
    }
    
for (int i = 9; i>1; i--)
{
    
    for (int j = 0; j < arr[i]; j++)
    {
        cout<<i;
    }
    
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