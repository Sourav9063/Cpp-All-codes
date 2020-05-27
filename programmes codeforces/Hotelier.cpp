//                      Name: https://codeforces.com/problemset/problem/1200/A
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
ll tmp,ans;

int main()
{
Sourav;

 #ifndef ONLINE_JUDGE
            freopen("C:\\Users\\my_code\\input.in", "r", stdin); 
            freopen("C:\\Users\\my_code\\output.in", "w", stdout);
 #endif

int arr[10]={0};
int l,r,n;
l=0;
r=9;
cin>>n;
vector<int>v;
char s;
for (int i = 0; i < n; i++)
{
    cin>>s;
    if(s=='L')
    {
        // arr[l]=1;
        // l++;
        for (int j = 0; j < 10; j++)
        {
            if(arr[j]==0)
            {
                arr[j]=1;
                break;
            }
        }
        
    }
    else if (s=='R')
    {
        // arr[r]=1;
        // r--;
         for (int j = 9; j >=0; j--)
        {
            if(arr[j]==0)
            {
                arr[j]=1;
                break;
            }
        }
        
    }
    else
    {
        // v.pb(s-'0');
        arr[s-'0']=0;
    }


}

// for (int i = 0; i < v.size(); i++)
// {
//     cout<<v[i];nl
//     arr[i]=0;
// }

for (int i = 0; i < 10; i++)
{
    cout<<arr[i];
}



  return 0;
}

/*
  Documentation:
   


int power_x(int x, unsigned y)
{
    if(y==0)
        return 1;
    if(!(y&1))
        return power_x(x,y>>1)*power_x(x,y>>1);
    return x*power_x(x,y>>1)*power_x(x,y>>1);
}

*/