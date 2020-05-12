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

template<typename... T>void read(T&... args) {((cin >> args), ...);}
template <class T>inline void sarray(T* st, T* nd){while(st<nd)cin>>*st++;/*sf("%d", st++);*/}
template <class T>inline void parray(T* st, T* nd){while(st<nd)cout<<*st++<<endl;/*sf("%d", st++);*/}

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
          lli n,k;
cin>>n>>k;

           cout<<k+(k-1)/(n-1)<<endl;  
    // lli tmp=k/n;
    // lli ans=k+tmp;
    // //deb(ans);
    // lli exc=0;
    // while(tmp/n>0)
    // {
    //    // deb(tmp)
    //     deb(ans);
    //     tmp=tmp/n;
    //     if(tmp<n)
    //     {
    //         ans+=tmp%n;
    //         exc+=tmp%n;
    //         break;
    //     }
    //     ans=ans+tmp;
    //     ans+=tmp%n;
    //     exc+=tmp%n;
    }


// lli ans=k;//k+k/n+k%n;
// lli tmp=k/n+k%n;
// ans+=tmp;
//     while(tmp>0)
//     {
       
//         tmp=tmp/n;
      

//        ans+=tmp;
       
//        tmp=tmp%n;
//          if(tmp<n)break; 
//     }
// 10
// 15
// 1999999999
// 113
// 1000000001
// 1

            
           // cout<<ans<<endl;


    
        // }  
    



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