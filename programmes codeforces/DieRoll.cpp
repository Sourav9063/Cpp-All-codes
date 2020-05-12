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
    
    int a ,b;
    read(a,b);

    int n=7-max(a,b);

    cout<<n/__gcd(n,6)<<"/"<<6/__gcd(n,6)<<endl;


//     float ans(10);
   

//     float a,b;
//     read(a,b);
//     if(max(a,b)==6)
//     {
      
//         cout<<"0/1";    
    
//     }
//     else if(max(a,b)==0)
//     {
//         cout<<"1/1";
//     }
//     else
//     {

// float arr[7];
// for(int i=1;i<=6;i++)
// {
//     float a=i;
//     arr[i]=a/6;

// }
  
// //    parray(arr,arr+7);
//     //cout<<arr[4];
//     ans=(7-max(a,b));

//    //  deb(ans);
//      ans/=6;
//     // ans=round(ans);
//      deb(ans);
//     // cout<<ans-arr[5];
//     float sth=ans-34;
//     // deb(ans);
//      if (ans==arr[1])              
//      {
//         cout<<"1/6";
//      }
//      else if (ans==arr[2])
//      {
//         cout<<"1/3";
//      }
//      else if(ans==arr[3])
//      {  
//         cout<<"1/2";    
//      }
     
//      else if (ans==arr[4])
//      {
//          cout<<"2/3";
//      }
//      else if(ans==arr[5])
//     {
//         cout<<"5/6";    
//     }
//     else if(ans==arr[6])
//     cout<<"1/1";
    
// }
// nl;
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