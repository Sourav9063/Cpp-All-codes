#include<stdio.h>
#include<math.h>

int main()
{
    long long int t,i,j;
    double t1,t2,t3,u,v,d;
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%lf%lf%lf",&d,&v,&u);
        {
            if(v>=u)
                printf("Case %d: can't determine\n",i);
            else
            {
                t1=d/u;
                t2=d/(sqrt(u*u-v*v));

                t3=t2-t1;
                if(t3<=0)
                     printf("Case %d: can't determine\n",i);
                else
                   {

                printf("Case %lld: %.3lf\n",i,t3);}
            }
        }
    }

}
