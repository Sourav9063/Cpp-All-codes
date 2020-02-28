#include<stdio.h>
int main()
{
    char ch ;
    printf("Enter the operator:\n");
    while((scanf("%c",&ch))==1)
    {


    if(ch=='+')
    {
        printf("addition");
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
    else if(ch=='-')
    {
        printf("subtraction");
        int start=1, c;
        float a,b=0;
        printf("\n\nhow many num you want to substract\n");
        scanf("%d",&c);

        while(start<=c)
        {
            printf("enter %d number:",start);

            scanf("%f",&a);
            b=b-a;
            start=start+1;
        }

        printf("\n Total sum:%f",b);

    }
    else if(ch=='*')
    {
        printf("multiplication");
        int start=1, c;
        float a,b=1;
        printf("\n\nhow many num you want to multiple\n");
        scanf("%d",&c);

        while(start<=c)
        {
            printf("enter %d number:",start);

            scanf("%f",&a);
            b=b*a;
            start=start+1;
        }

        printf("\n Total sum:%f",b);

    }
    else if(ch=='/')
     {
        printf("divition");
        float a,b,c;
        scanf("%f%f",&a,&b);
        c=a/b;

        printf("%f",c);
     }
      printf("Enter the operator:\n");
    }

}
