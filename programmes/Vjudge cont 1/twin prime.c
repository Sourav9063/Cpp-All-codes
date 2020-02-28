#include<stdio.h>
#include<math.h>
int main()
{
   long long int arr[100000];
    int i,n=3,b,d,e,f,g,c=1,  ;
    while(scanf("%d",&d)!=EOF)
  {


    while(n<=d)
    {


        for(i=3 ; i<n; i=i+2)
        {
            e=n+2;
            b=n%i;

            f=e%i;
            if(b==0 && f==0)
            {

                break;
            }
        }
        if(b!=0 && f!=0)
        {
            //printf("%d  prime\n",n);


            arr[c]=n;
            arr[c+1]=e;
n++;
            c++;
        }
        else
        {


            //printf("                %d not prime \n",n);


            n++;


        }




    }
    scanf("%d",&g);
    printf("%d %d",arr[g],arr[g+1]);

    //c=1;
    //while(c<=d)
    {


        //if(arr[c+1]==arr[c]+2)
        {
            //arrtp[c]=arr[c];
            //arrtp[c+1]=arr[c+1];
            //printf("(%d, %d)\n",arr[c], arr[c+1]);
        }
//                c++;

    }
  }
}

