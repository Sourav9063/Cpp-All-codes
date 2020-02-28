#include<stdio.h>
#include<math.h>
int main()
{
   long long int a,b,d=77,e,f,c=0;



 scanf("%lld",&a);

    while(c<= 25)

    {




        b= a%d;


        printf("\n%lld",b);

        a=pow(b,2);
        c++;
    }
}
