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


    printf("\n new input\n");
        int new1;

    scanf("%d",&new1);

    for(i=k;;i--)
    {
     if(new1<arr[i])arr[i+1]=arr[i];
     else
     {

         arr[i]=new1;


         break;

     }
    }

    for(j=1; j<=k; j++)
    {
        printf("%d,",arr[j]);
    }







}

