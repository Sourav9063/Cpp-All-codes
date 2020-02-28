#include<stdio.h>
int main()
{

    int A,arr[1000], p,q,i=1,j,k=1;

    while(scanf("%d",&arr[k])==1)
    {
        k++;
    }
    /*for(j=1; j<i; j++)
    {
        printf("%d,",arr[j]);
    }
*/


    for(i=1;i<k;i++)
    {
        for(j=i+1;j<=k;j++)
        {
            if(arr[i]>arr[j])
            {


            p=arr[i];
            q=arr[j];
             arr[i]=q;
            arr[j]=p;
            }
        }
    }




    printf("\n");
 for(j=1; j<k; j++)
    {
        printf("%d,",arr[j]);
    }


}
