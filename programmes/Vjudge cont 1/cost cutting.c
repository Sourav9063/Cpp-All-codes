#include<stdio.h>
int main()
{
    int r,a,b=1,c,i,arr[67];
    scanf("%d",&r);
    for(i=1; i<r*3; i++)
    {
        scanf("%d ",&arr[i]);
    }

    for(i=1; i<r*3; i=i+3)
    {




        if((arr[i]<arr[i+1]&&arr[i+1]<arr[i+2])||(arr[i]>arr[i+1]&&arr[i+1]>arr[i+2]))
        {
            printf("Case %d: %d\n",b,arr[i+1]);

        }
        else if((arr[i+1]<arr[i]&&arr[i]<arr[i+2])||(arr[i+1]>arr[i]&&arr[i]>arr[i+2]))
        {

            printf("Case %d: %d\n",b,arr[i]);
        }
        else
        {
            printf("Case %d: %d\n",b,arr[i+2]);

        }
     b++;

    }
}
