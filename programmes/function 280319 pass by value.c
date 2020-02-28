#include<stdio.h>

int print(int num[]) //array receive korar jnne 3rd bracket
{
    num[0]=1000;
    return ;
}

 int main()
 {
     int a[]={3,4,5}, i;

     for (i=0;i<3;i++)
     {


    printf("%d",a[i]); }


     print(a);     //puro array pass korsi
    for (i=0;i<3;i++)
     {


    printf("%d",a[i]); }

     return 0;

 }
