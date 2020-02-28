#include<stdio.h>
#include<math.h>
int main()
{
    long long int i,n=1,b,d,c ;
   // printf("Enter the amount you want to find the primes:");
    //scanf("%lld",&d);
    while(1)
    {


        for(i=3 ; i<n/2; i=i+2)
        {

            b=n%i;
            if(b==0)
            {
                break;
            }
        }
            if(b==0)
            {
                printf("                       %lld not prime\n",n);
              n+=2;
              c=1;



            }
            else
            {
                printf(" %lld prime \n",n);
                n+=2;

                c=2;
            }




    }

}
