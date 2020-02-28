

#include<stdio.h>
int main()
{ int n,a,b,ans;
    scanf("%d%d%d",&n,&a,&b);
    if(n-b>a)
        printf("%d",b+1);
    else
        printf("%d",n-a);
}
