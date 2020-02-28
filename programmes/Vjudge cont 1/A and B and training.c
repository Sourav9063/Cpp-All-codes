
#include<stdio.h>
int main()
{
    int i,n,m,count = 0;
    scanf("%d%d",&n,&m);
    while(n > 0 && m > 0)
    {
        if(n>m && n>=2)
        {
            n=n-2;
            m--;
            count++;
        }
        else if(m>n && m>=2)
        {
            m-=2;
            n--;
            count++;
        }
        else if(n==m && m>=2)
        {
            m=m-2;
            n--;
            count++;
        }
        else
            break;
    }
    printf("%d",count);
    return 0;
}
