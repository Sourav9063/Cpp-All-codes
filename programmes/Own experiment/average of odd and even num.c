#include<stdio.h>
int main()
{

    int i,n=0,f=0,g=0,arr[n];
    float o,even,b,c=0,d,e=0 ;
    while((scanf("%d",&n))==1)
    {
        for(i=1;i<=n;i++)
        {
            scanf("%d",&arr[i]);

            if(arr[i]%2==0)
            {
                b=arr[i];
                c=c+b;
            f++;
            }

            else
            {
                d=arr[i];
                e=e+d;
                g++;
            }
        }
        o=c/f;
        even=e/g;
    printf("average of even %f\n",o);
    printf("average of odd %f\n",even);
    }
}
