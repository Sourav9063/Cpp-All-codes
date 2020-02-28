
#include<stdio.h>


int main()
{
    int i,tc, hj, lj,J,cur, prev, count=1;

    scanf("%d",&tc);

    while(tc--)
    {
        scanf("%d\n%d",&J,&prev);

        hj=lj=0;

        for( i=0; i<J-1; i++)
        {
            scanf("%d",&cur);
            if(cur>prev)
            {
                hj++;
            }
            if(cur<prev)
            {
                lj++;
            }
            prev = cur;
        }

        printf("Case %d: %d %d\n",count++,hj,lj);
    }

    return 0;
}
