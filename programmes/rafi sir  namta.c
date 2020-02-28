#include<stdio.h>
int main()
{
    int a,b,c=1;
    printf("Enter the num:\n");

    while(scanf("%d",&a)==1)
    {
    b=c;

        while(b<=10)
        {
            printf("%d x %d=%d\n",a,b,a*b);
            b++;
        }
        printf("Enter the num:\n");

    }
    return 0;
}
