#include<stdio.h>

int main()

{
    int a,b,c, X,Y;
    printf("enter Two number\n");
    while(scanf("%d %d",&a,&b)!=EOF)
    {


        if(a>b)
        {
            X=a;
            Y=b;

        }
        else
        {
            X=b;
            Y=a;
        }

        while(Y!=0)
        {
            c=X%Y;
            X=Y;
            Y=c;


        }
        printf("\nGCD is: %d\n",X);
        printf("enter Two number\n");
    }

}
