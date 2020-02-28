#include<stdio.h>
int main()

{
    int n,q,qn,i,j,flag;
    scanf("%d",&n);
    int ar[55555]= {0};
    for(i=1; i<=n; i++)
        scanf("%d",&ar[i]);
    scanf("%d",&q);
    for(i=0; i<q; i++)
    {
        scanf("%d",&qn);
        flag=0;
        for(j=1; j<=n; j++)
        {
            if(ar[j]>=qn)
            {
                if(ar[j-1]>0)
                    printf("%d ",ar[j-1]);
                else
                    printf("X ");
                while(ar[j]==qn)
                    ++j;
                if(ar[j]>qn)
                    printf("%d\n",ar[j]);
                else if(ar[j+1]>0)
                    printf("%d\n",ar[j+1]);
                else
                    printf("X\n");
                flag=1;
                break;
            }
        }
        if(flag==0)
            printf("%d X\n",ar[n]);

    }
    return 0;
}
