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

lli n;
cin>>n;
lli arr[n];
sarray(arr,arr+n);
lli ansp=0,zero=0;
// for (int i = 0; i < n; i++)
// {
    
//     if(arr[i]==0)
//     {
//         ansn++;
      
//     }
//     else if(arr[i]>0)
//     {
//         ansn+=arr[i]+1;
//     }
//     else
//     {
//         ansn+=abs(arr[i]+1);

//     }
//     deb(ansn)
    
// }

for (lli i = 0; i < n; i++)
{
    if(arr[i]==0)
    {
        //ansp++;
        zero++;
    }
    else if (arr[i]>1)
    {
    ansp+=arr[i]-1   ;
    }
     else if(arr[i]<0)
    {
        ansp+=abs(arr[i])-1;tmp++;
    }
   // deb(ansp)
    
}
ansp+=zero;

if (tmp%2==1&&zero==0)
{
    ansp+=2;// aro 1 ta neg 1 k 1 korte hobe
}

cout<<ansp<<endl;


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