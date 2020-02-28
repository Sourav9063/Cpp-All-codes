#include<stdio.h>
int main()
{
    long int a;
    printf("\n enter the number to find factorial:");
    while(scanf("%d",&a)==1)
    {

int b=1;

    if(a==0)
    {
        b=b;
    }
    else
    {


    while(a>1)
    {
        b=b*a;
        a=a-1;
    }

    }

    printf("\n%d is the factorial",b);
    printf("\n enter the number to find factorial:");
}
}
