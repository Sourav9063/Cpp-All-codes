#include<stdio.h>
#include<math.h>
long long int po(long long int a,long long int b,long long int m)
{
    if(b==0)
        return 1%m;
    long long int x=po(a,b/2,m);
    if(b%2==0) return (x*x)%m;
    else return ((x*x)%m*a)%m;
}
int main()
{
    long long int a,b,m;
    while(scanf("%lld %lld %lld",&a,&b,&m)==3)
    {
        long long int r=po(a,b,m);
        printf("%lld\n",r);
    }
    return 0;
}
