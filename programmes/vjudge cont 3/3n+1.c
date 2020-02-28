
#include<stdio.h>
int main()
{
    int n,m,i,k,j,cycle_each,max;
    while(scanf("%d %d",&n,&m)!=EOF)
    {
        max=0;
        printf("%d %d",n,m);
        if(n>m)
        {
            k=m;
            m=n;
            n=k;
        }
        for(i=n; i<=m; i++)
        {
            cycle_each=1;
            j=i;
            while(j > 1)
            {
                if(j % 2==0)
                    j = j/2;
                else
                    j = (3*j)+1;
                cycle_each++;
            }
            if(cycle_each>=max)
                max=cycle_each;
        }
        printf(" %d\n",max);
    }
    return 0;
}
