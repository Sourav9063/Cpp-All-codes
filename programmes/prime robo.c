#include<stdio.h>
int main()

   {


    int i,n=1,b,d=100 ;


    while(n<=d)
    {


        for(i=2 ; i<n; i++)
        {

            b=n%i;
            if(b==0)
            {
                break;
            }
        }

            if(b==0)
            {



                        printf("not %d\n",n);
            n++;
            }

            else
            {

        printf("yes %d\n",n)  ;
     n++;

      }




    }

}





