#include<stdio.h>
#include<math.h>
int main()
{
    int lights,i,d;

    while(scanf("%d",&lights)==1&&lights!=0)
    {
        for(i=2; i<=sqrt(lights); i++)
        {
            d=lights%i;
            if(d==0)
            {
                break;
            }

        }
        if(d==0)
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }

       //loop dekhe

    }



}
