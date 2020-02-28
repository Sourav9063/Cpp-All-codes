
#include<stdio.h>

int main()
{

    int yr,flagl=0,flagh=0,flagb=0;

    while(scanf("%d",&yr)!=EOF)
    {
        if(yr%4==0&&yr%100!=0||yr%400==0) flagl=1;
        if(yr%15==0) flagh=1;
        if(flagl==1&&yr%55==0) flagb=1;


        if(flagl==1) printf("This is leap year\n");
        if(flagh==1) printf("This is huluculu festival year\n");
        if(flagb==1) printf("This is bulukulu festival year\n");


        if(flagl!=1&&flagh!=1&&flagb!=1) printf("This is an ordinary year\n");

        printf("\n");
    flagl=0;flagh=0;flagb=0;





    }












}
