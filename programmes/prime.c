#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,b, c;
    scanf("%d",&n);

    if(n!=2)
    {
        for(i=2;i<=sqrt(n);i++)
         {  b=n%i;
         if(b==0)
         {

             break;
         }

         }
        if(b==0)
        {
           //c=1;
            printf("not prime");

        }
        else
        {
            //c=2;
            printf("prime");
        }

}
}
