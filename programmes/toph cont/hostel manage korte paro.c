#include<stdio.h>
int main()
{
    int i,std,bill,total,ogrim,mill;

    scanf("%d %d",&std,&bill);

    for(i=1;i<=std;i++)
    {
        scanf("%d %d",&mill,&ogrim);

        total=1300+mill*bill-ogrim;


        if(total<0)
            {
                 total=-total;
        printf("Member %d will get back %d tk.\n",i,total);

       }
        else if(total==0) printf("It's same !!\n");
        else if(total>0)
            printf("Member %d will give %d tk.\n",i,total);




    }














}
