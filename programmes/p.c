#include<stdio.h>
int main()
{
    int n=0,i=0,j=0;
    float a[n],b;
    printf("enter amount of number:\n");

    while(scanf("%d",&n)==1)
    {
        while(i<n)
        {


            scanf("%f",&a[i]);


            i++;
        }

            b=a[0];

        for(j=1; j<n; j++)


        {
            if(b>a[j])
            {
                b=a[j];

            }


        }


        printf("the min num is: %f\n",b);

    i=0;
     printf("enter amount of number:\n");

    }

}
