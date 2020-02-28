#include<bits/stdc++.h>
using namespace std;
int main()
{


    long long int n,m,sum=1,t1=0,t2=1;
    scanf("%lld lld",&n,&m);
    int i;

    for(i=1;i<=n;i++)
    {
        sum=t1+t2;
        t1=t2;
        t2=sum;



    }

   printf("%lld",m%sum) ;





















}
