#include<stdio.h>
#include<math.h>
int main()
{
    int i,n=1,b,d ,e,c=1,f;
    scanf("%d",&d);
    int arr[d*200],arrtp[d];
    while(n<=d*200)
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
                //printf("%d not prime\n",n);
              n++;


            }
            else
            {
                arr[c]=n;

                //printf("                %d prime \n",n);
                c++;

                n++;


            }




    }
    c=1;
    while(c<=d*200)
     {


     if(arr[c+1]==arr[c]+2)
                {   e=1;
                    arrtp[e]=arr[c];
                    arrtp[e+1]=arr[c+1];
                    e++;

                }
                c++;

     }
     f=d;
     scanf("%d",&f);
     printf("(%d, %d)\n",arrtp[f], arrtp[f+1]);
}


