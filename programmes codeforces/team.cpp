#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ans=0;
    int n;
    int p,v,t;
    int sol1;
    sol1=0;
    scanf("%d",&n);
    int i;
    for(i=1;i<=n;i++)
    {
        scanf("%d %d %d",&p,&v,&t);
        sol1=p+v+t;

if(sol1>=2)ans++;
    }


    printf("%d",ans);








}
