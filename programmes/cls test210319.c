#include<stdio.h>
#include<math.h>
int main()
{
    int a,b=0,c=0,i;

    scanf("%d",&a);

    while(1)
    {
        b=a%10;

      a=a/10;
      c=c+b;
      if(a==0)
      {
          break;
      }
    }

    printf("%d",c);

}
