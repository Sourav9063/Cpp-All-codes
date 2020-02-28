#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("\n");
    while((scanf("%d",&b)!=EOF))
    {
        a=b;
        while(a>0)
        {
            printf("*");
            a=a-1;
        }
        c=b-2;
        while(c>0)
        {
            printf("\n* *");
            c=c-1;
        }

        d=b;
        printf("\n");
        while(d>0)
        {
            printf("*");
            d=d-1;
        }

        printf("\n");
    }
}
