#include<stdio.h>
int main()
{
    int big=0,n,input,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&input);
        if(big<input) big=input;
    }
    printf("%d",big);


}
