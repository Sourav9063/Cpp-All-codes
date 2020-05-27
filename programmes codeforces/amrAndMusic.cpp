//                      Name: https://codeforces.com/contest/507/problem/A
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

int n,k;
cin>>n>>k;
int arr[n+1]={0};
vector<vector<int>>pos;
pos.resize(222);
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
    pos[arr[i]].pb(i);
}
sort(arr,arr+n);


int c=0;
for (int i = 0; i < n; i++)
{
    ans+=arr[i];
    if(k<ans)break;

    else
    {
        c++;
    }
    
}

if(c==0)cout<<c<<endl;
else
{
    cout<<c<<endl;
    for (int i = 0; i < c; i++)
    {
        tmp=pos[arr[i]][0];
        cout<<tmp+1<<" ";
        pos[arr[i]].erase(pos[arr[i]].begin());
    }
    
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