#include<stdio.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
int d;
   d= add(a,b);
   printf("2nd%d\n",d);
   printf("3rd%d\n",add(a,b));

    return 0;
}

int add(int a,int b) //void(kono kisu return na korle) ,int,float ,char
{
    int c=a+b;
    printf("1st%d\n",a+b);
    return c;
}
