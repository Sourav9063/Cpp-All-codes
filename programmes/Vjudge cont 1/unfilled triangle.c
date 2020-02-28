
#include <stdio.h>
int main()
{
    int i,j,n,space =20,k=0;
    printf("Enter the value of row:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=space;j++)
        {
            printf("");

        }
        for(j = 1;j<=2*i-1;j++)
        {
           if(j==1||j==i+k||i==n)
            printf("*");
            else
                printf("");
        }
        k++;
        space--;
    }
    return 0;
}
