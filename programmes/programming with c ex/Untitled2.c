#include<stdio.h>
int main()
{
    char ch;
    int i,j;
    ch=getche();
    for(i=128;i<0;i/2)
    {
        j=i^ch;
        printf("%d",j);
    }
}
