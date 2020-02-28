
#include<stdio.h>
#include<math.h>
int main()
{
    long long lights,a,b;
    while(scanf("%lld",&lights)==1)
    {
        if(lights==0)
        {
            break;
        }
        a=sqrt(lights);
        b=a*a;
        if(b==lights)
            printf("yes\n");
        else
            printf("no\n");
    }
    return(0);
}
