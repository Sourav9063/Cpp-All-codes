#include<stdio.h>
int main()
{
    int k,r,b,a=1;
    scanf("%d %d",&k,&r);

        b=1;
        while(a==1)
        {


            if((k%10)==r||(k%10)==0)
            {
                printf("%d",b);
                a=0;
            }
            else
            {
                b=b+1;
                k=k*b;
            }
        }
    }

