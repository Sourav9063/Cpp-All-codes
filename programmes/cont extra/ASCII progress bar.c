#include<stdio.h>
#include<string.h>
int main()
{
    int i,b,c ;
    float a;

    scanf("%f",&a);
    c=a;




        printf("[");

            b=c/10;



        for(i=1; i<=10; i++)
        {
            if(i<=b)printf("+");

            else printf(".");
        }

        printf("] %d%%",c);


}
