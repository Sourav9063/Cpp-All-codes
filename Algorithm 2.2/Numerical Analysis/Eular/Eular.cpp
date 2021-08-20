//                      Name: 
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

using namespace std;
 
// Consider a differential equation
// dy/dx=(x + y + xy)
float func(float x, float y)
{
    return (x + 2*y );
}
 
// Function for Euler formula
void euler(float x0, float y, float h, float x)
{

    float temp;
    int i = 0;
    // Iterating till the point at which we
    // need approximation
    // for (x0; x0 < x; x0+=h)
    // {
       
    //     deb(x0)
    //     deb(y)
    //     temp = y;
    //     y = y + h * func(x0, y);
    //     nl
    // }
    
    while (x0 < x) {
       
        i++;
        deb(i)
        deb(x0)
        deb(y)
        temp = y;
        y = y + h * func(x0, y);
        x0 = x0 + h;
        nl
    }
 
    // Printing approximation
    cout << "Approximate solution at x = "
         << x << "  is  " << temp << endl;
}
 
// Driver program
int main()
{
    Sourav;

 #ifndef ONLINE_JUDGE
            freopen("C:\\Users\\my_code\\input.in", "r", stdin); 
            freopen("C:\\Users\\my_code\\output.in", "w", stdout);
 #endif



    // Initial Values
    float x0 = 2;
    float y0 = 3;
    float h = 0.1f;

    // Value of x at which we need approximation
    float x = 2.5;
 
    euler(x0, y0, h, x);
    return 0;
}
/*
  Documentation:
   


*/