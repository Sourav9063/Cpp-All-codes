#include<stdio.h>
int main()
{
    int sum=0,i,j;
    for(i=1;i<=5;++i)
    {
        printf("%d %d\n",sum,i);
        sum=sum+5;


        if(i>2)
            continue;
        sum=sum+i;

    }
    printf("%d %d\n",sum,i);

}
