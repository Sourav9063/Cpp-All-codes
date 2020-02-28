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

    printf("\n enter the no of array :");

    scanf("%d",&p);

    printf("\n enter the no :");

    scanf("%d",&n);



    for(k=A+1; k>=p; k--)
    {

        arr[k+1]=arr[k];


    }
    arr[p]=n;

    for(j=1; j<=A+1; j++)
    {
        printf("%d,",arr[j]);
    }

}
