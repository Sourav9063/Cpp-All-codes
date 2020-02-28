#include<stdio.h>
int main()
{
    int i,n;
    float a=0,b;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%f",&b);
        a+=b;
        printf("%.10f\n",a/i);
    }
}
