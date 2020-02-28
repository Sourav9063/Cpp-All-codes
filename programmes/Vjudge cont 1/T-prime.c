#include<stdio.h>
#include<math.h>
int main()
{
   long long int i, n;
   int c=0,a=0,m;
    scanf("%I64d",&n);
 long long  int ar, arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%I64d",&arr[i]);

    }
    i=0;
    while(c<n)
    {
        a=0;
if(arr[c]==4)
{
    printf("YES\n");
    goto ab;
}
if(arr[c]==1)
{
    printf("NO\n");
    goto ab;
}

if(arr[c]%2!=0)
{
     ar=sqrt(arr[c]);


for(i=2; i<=sqrt(arr[c]); i++)
            {

                m=arr[c]%i;

                if(m==0)
                {
                    a++;
                    break;

                }



            }










        if(arr[c]==ar*ar )
            {
                printf("YES\n");

            }
            else
            {
                printf("NO\n");
            }
}
else { printf("NO\n");}
            ab:
            c++;

        }
        return 0;




    }

