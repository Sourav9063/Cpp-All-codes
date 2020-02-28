#include<stdio.h>
int main()
{
    long long int a,n;
    while(scanf("%lld",&n)==1)
    {
        if(n<0)

          {

            break;
          }

        a=1+((n*(n+1))/2);


        printf("%lld\n",a);
    }


    return 0;
}
