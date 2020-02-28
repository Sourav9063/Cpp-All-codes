#include<stdio.h>

int main()
{
    int a,b,X,Y;
    printf("enter two num :");

    while((scanf("%d %d",&a,&b))!=EOF)
{
  int y=0;

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


 while(Y<=X)
    {


        y=y+Y;
        Y=Y+1;
    }
    printf("\nSum of inner num:%d",y);
}
}
