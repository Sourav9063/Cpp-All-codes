#include <bits/stdc++.h>
using namespace std;
#define lli long long int 
int main()
{ lli n;cin>>n;lli tmp;lli minar=1000000009,maxar=0;for(lli i=0;i<n;i++){cin>>tmp;minar=min(minar,tmp);maxar=max(maxar,tmp);}cout<<maxar-minar-n+1<<endl;return 0;}