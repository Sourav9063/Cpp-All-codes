#include<stdio.h>
int main()
{ int a, b,c=1;

do{
printf("\n\nfor dec > hexa press 1 \nfor dec > octa press 2 \nfor octa > dec press 3\nfor octa > hexa press 4\nfor hexa >dec press 5\nfor hexa > oct press 6\n\n");

        scanf("%d",&a);
        printf("enter your required num:");

        if(a==1)
        {


            scanf("%d",&b);
            printf("%x",b);
        }
        else if(a==2)
        {
            scanf("%d",&b);
            printf("%o",b);
        }
        else if(a==3)
        {
            scanf("%o",&b);
            printf("%x",b);

        }
        else if(a==4)
        {
            scanf("%o",&b);

            printf("%x",b);
        }
        else if(a==5)
        {

            scanf("%x",&b);
            printf("%d",b);

        }
        else if(a==6)
        {
            scanf("%x",&b);
            printf("%o",b);
        }
        c++;
        printf("  is the converted ans");


        }while(c<=1000);
}
