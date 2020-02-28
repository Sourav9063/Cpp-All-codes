#include<stdio.h>
int main()
{
    int n=0,i=0;
    float a[n],sum;

    while(scanf("%d",&n)==1)
    {
        while(i<n)
        {


            scanf("%f",&a[i]);
            sum+=a[i];

            ++i;


        }


        for(i=0; i<n; ++i)
        {
            if(i<n-1)
            {
                printf("%f + ",a[i]);
            }
            else
            {
                printf("%f",a[n-1]);
            }
        }

        printf(" = %f",sum);

    }
    return 0;
}
