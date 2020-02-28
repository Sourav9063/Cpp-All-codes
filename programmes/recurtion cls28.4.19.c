#include<stdio.h>


int fct(int n)
{
    if(n<=1)            //base recursion
                        // end of recursion that indicates the end of function
        return 1;
    else
        return n*fct(n-1);
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",fct(n));
    return 0;
}
