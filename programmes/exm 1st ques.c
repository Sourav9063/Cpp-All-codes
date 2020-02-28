#include<stdio.h>
int main()
{
    int a,i,d,sum=0,num;

    scanf("%d",&a);
    for(i=1;a!=0;i++)
    {
        num=a%10;
    if(num%2!=0) {sum+=num;}

    a=a/10;

    }
    printf("%d",sum);







}
