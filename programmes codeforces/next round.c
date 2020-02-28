
#include<stdio.h>

int main()
{
    int n,k,arr[100],sum=0,i;
    scanf("%d %d",&n,&k);
    for(i=1; i<=n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1; i<=n; i++)
    {
        if(arr[i]>=arr[k]&&arr[i]>0)
            sum++;
    }
    printf("%d\n",sum);


}
