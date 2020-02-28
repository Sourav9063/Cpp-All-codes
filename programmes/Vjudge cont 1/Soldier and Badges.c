#include<stdio.h>
int main()
{
    int n,i,j,cng,coin=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                cng=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=cng;
            }
        }
    }
    for(i=0; i<n; i++)
    {
        if(arr[i]==arr[i+1])
        {
            coin=coin+1;
            arr[i+1]=arr[i+1]+1;
        }
        else if(arr[i]>arr[i+1])
        {
            coin=coin+arr[i]+1-arr[i+1];
            arr[i+1]=arr[i]+1;

        }
    }
    printf("%d\n",coin);
    return 0;
}
