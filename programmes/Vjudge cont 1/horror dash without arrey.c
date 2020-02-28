#include<stdio.h>
int main()
{
    int t,i,c,n,a,s;
    while(scanf("%d",&t)==1)
    {
        for(i=1; i<=t; i++)
        {
            a=0;
         scanf("%d",&n);
            for(c=1; c<=n; c++)
            {
                scanf("%d",&s);
                if(a<s)
                {

                    a=s;
                }
            }
            printf("Case %d: %ldn",i,a);

        }

    }
 return 0;
}
