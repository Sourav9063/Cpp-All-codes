#include<stdio.h>


int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",fib(n));
    return 0;

}

int fib(int n)
{
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    else
        return fib(n-1)+fib(n-2);



}













