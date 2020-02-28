#include<stdio.h>
int main()
{
    int x,y;
    while(1)
    {
        scanf("%d",&x);
        y=x%13;
        printf("%d\n",y);
    }
}
