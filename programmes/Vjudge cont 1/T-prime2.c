#include<stdio.h>
#include<math.h>

int main()
{
    int flag=1,i,m;
    long long int arr, n,p;
    scanf("%I64d",&n);
    long long int arry[n];


    for(i=1; i<=n; i++)
    {
        scanf("%I64d",&arry[i]);
    }


    for(i=1; i<=n; i++)
    {   flag=1;
        arr=sqrt(arry[i]);

        if(arry[i]!=arr*arr || arry[i]==1)
        {
            printf("NO\n");
        }
        else if(arry[i]==arr*arr)
        {
            for(p=2; p<=sqrt(arr); p++)
            {
                m=arr%p;

                if(m==0)
                {

                    flag=2;

                    break;
                }
            }
            if(flag==2)
            {
                 printf("NO\n");
            }
            else if(flag==1||arry[i]==4)
                {printf("YES\n");}

        }


    }
}





