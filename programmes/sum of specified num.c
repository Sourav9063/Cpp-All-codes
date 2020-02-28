
#include<stdio.h>
int main()
{
    while(1)
    {
        int start=1, c;
        float a,b=0;
        printf("\n\nhow many num you want to sum\n");
        scanf("%d",&c);

        while(start<=c)
        {
            printf("enter %d number:",start);

            scanf("%f",&a);
            b=b+a;
            start=start+1;
        }

        printf("\n Total sum:%f",b);

    }
    return 0;
}
