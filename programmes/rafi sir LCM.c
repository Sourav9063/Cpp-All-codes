#include<stdio.h>

int main()
{
    int a,b,X;
    printf("enter two num to find LCM:");

    while((scanf("%d %d",&a,&b))!=EOF)
{
    int m=1;


    if(a>b)
    {
        X=a;

    }
    else
    {
        X=b;
    }

 while(m==1)
    {

        if(X%a==0&&X%b==0)
        {
            printf("\n LCD:%d",X);
            m=m+1;
        }
        else
        {
            X=X+1;

        }
    }
    printf("\nenter two num to find LCM:");
    }

}





