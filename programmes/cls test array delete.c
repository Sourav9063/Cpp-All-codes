#include<stdio.h>

int main()
{
    int A,arr[500], p,n,i=1,j,k,l,Q;
    scanf("%d",&A);
    while(i<=A)
    {scanf("%d",&arr[i]);
        i++;
    }
    for(j=1; j<i; j++)
    {
        printf("%d,",arr[j]);
    }

    printf("\n enter the no of array you want to delete :");

    scanf("%d",&p);





    for(; p<A; p++)
    {

        arr[p]=arr[p+1];


    }


    for(j=1; j<=A-1; j++)
    {
        printf("%d,",arr[j]);
    }

}
